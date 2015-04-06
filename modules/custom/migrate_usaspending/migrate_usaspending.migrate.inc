<?php

/**
 * @file migrate_usaspending.migrate.inc
 * import grant data from a USAspending export
 */

/**
 * Implements hook_migrate_api().
 */
function migrate_usaspending_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'nodes' => array(
        'title' => t('Nodes'),
      ),
    ),
    'migrations' => array(
      'USA_Orgs' => array(
        'class_name' => 'USA_Orgs',
        'group_name' => 'nodes',
      ),
      'USA_Grants' => array(
        'class_name' => 'USA_Grants',
        'group_name' => 'nodes',
      ),
    ),
  );
  return $api;
}

class USA_Orgs extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->description = t('Import organizations from USA Spending export');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        "ledgerized_subawardee_name" => array(
          'type' => 'varchar',
          'length' => '128',
          'not null' => TRUE,
          'description' => 'org name',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->source = new MigrateSourceCSV('/tmp/usaspending.csv', array(), array('header_rows'=>1, 'embedded_newlines'=>FALSE));

    $this->destination = new MigrateDestinationNode('org');

    $this->addFieldMapping('title', 'ledgerized_subawardee_name');
    $this->addFieldMapping(NULL, 'TAGS'); // used by prepareRow()
    $this->addFieldMapping('field_duns', 'subawardee_dunsnumber');
    $this->addFieldMapping('field_org_tags', 'org_tags_blob');
    $this->addFieldMapping('name', 'ledgerized_subawardee_name');

    $this->addFieldMapping('field_org_address')->defaultValue('US');
    $this->addFieldMapping('field_org_address:organisation_name', 'ledgerized_subawardee_name');
    $this->addFieldMapping('field_org_address:thoroughfare', 'subawardee_street');
    $this->addFieldMapping('field_org_address:premise')->defaultValue(NULL);
    $this->addFieldMapping('field_org_address:locality', 'subawardee_city');
    $this->addFieldMapping('field_org_address:administrative_area', 'subawardee_state');
    $this->addFieldMapping('field_org_address:postal_code', 'subawardee_zipcode');

    $this->addFieldMapping('field_org_tags:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_org_tags:ignore_case')->defaultValue(TRUE);
  }

  public function getNidByOrgName($orgName) {
    $node = db_select('node', 'n')
              ->fields('n')
              ->where("UPPER(title) LIKE :orgname", array(':orgname' => db_like(strtoupper($orgName))))
              ->execute()
              ->fetch();

    $nid = $node->nid;

    return $nid;
  }

  public function prepareRow($row) {
    // skip if it's already in the ledger...
    $nid = $this->getNidByOrgName($row->ledgerized_subawardee_name);
    if ($nid) {
      return false;
    }

    $row->org_tags_blob = array('usaspending');

  }

  public function fields() {
    return array(
      'title' => 'Organization name',
    );
  }
}

class USA_Grants extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->description = t('Import grants from USA Spending export');

    // Set up the source
    $this->source = new MigrateSourceCSV('/tmp/usaspending.csv', array(), array('header_rows'=>1, 'embedded_newlines'=>FALSE));

    // this id field is calculated as:
    // import batch # (starting at 1) + record # (starting at 1)
    // both of these are Detroit Ledger-specific
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'id',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Set up grants as the destination
    $this->destination = new MigrateDestinationNode('grant');


    // destination field is the first parameter
    // and the source field is the second parameter
    $this->addFieldMapping('field_federal_award_id', 'prime_award_federal_award_id');
    $this->addFieldMapping('title', 'title'); // should be auto generated...
    $this->addFieldMapping(NULL, 'ledgerized_prime_award_funding_major_agency_name'); // used by prepareRow()
    $this->addFieldMapping(NULL, 'ledgerized_subawardee_name'); // used by prepareRow()
    $this->addFieldMapping(NULL, 'subaward_CFDA_program_number_title_codes'); // used by prepareRow()
    $this->addFieldMapping(NULL, 'subaward_report_month'); // used by prepareRow()
    $this->addFieldMapping(NULL, 'subaward_report_year'); // used by prepareRow()
    $this->addFieldMapping('field_funded_amount', 'subaward_amount');
    $this->addFieldMapping('field_year', 'years_clean');
    $this->addFieldMapping('field_source')->defaultValue('USASpending export');
    $this->addFieldMapping('field_funder', 'granter_nid');
    $this->addFieldMapping('field_recipient', 'grantee_nid');
    $this->addFieldMapping('body', 'subaward_project_description');
    $this->addFieldMapping('field_grant_tags', 'tags_blob'); // used by prepareRow()
    $this->addFieldMapping('field_grant_tags:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_grant_tags:ignore_case')->defaultValue(TRUE);
  }

  public function getNidByOrgName($orgName) {
    $node = db_select('node', 'n')
              ->fields('n')
              ->where("UPPER(title) LIKE :orgname", array(':orgname' => db_like(strtoupper($orgName))))
              ->execute()
              ->fetch();

    $nid = $node->nid;

    return $nid;
  }

  public function prepareRow($row) {
    $row->title = $row->ledgerized_prime_award_funding_major_agency_name . ' -> ' . $row->ledgerized_subawardee_name;

    // assume 1 year term?
    $month_start = intval($row->subaward_report_month);
    $year_start = intval($row->subaward_report_year);

    $year_end = $year_start + 1;

    $date_data = array(
      'from' => (string) $month_start . '/01/' . $year_start . ' 00:00:00',
      'to' => (string) $month_start . '/01/' . $year_end . ' 00:00:00',
    );

    $row->years_clean = drupal_json_encode($date_data);

    $row->granter_nid = $this->getNidByOrgName($row->ledgerized_prime_award_funding_major_agency_name);
    $row->grantee_nid = $this->getNidByOrgName($row->ledgerized_subawardee_name);

    $tags = array('usaspending');
    $cfda_tags = preg_split("/[\s]*[;][\s]*/", $row->subaward_CFDA_program_number_title_codes);

    // store CFDAs as tag
    foreach ($cfda_tags as $cfda_tag) {
      if (strlen($cfda_tag) > 1) {
        $tags[] = 'CFDA: ' . $cfda_tag;
      }
    }

    $row->tags_blob = $tags;
  }


}
