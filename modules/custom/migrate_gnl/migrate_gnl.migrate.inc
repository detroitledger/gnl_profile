<?php

/**
 * @file migrate_gnl.migrate.inc
 * Migrate content from CSVs into detroit ledger taxonomy terms
 */

/**
 * Implements hook_migrate_api().
 */
function migrate_gnl_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'terms' => array(
        'title' => t('Terms'),
      ),
      'nodes' => array(
        'title' => t('Nodes'),
      ),
    ),
    'migrations' => array(
      'GrantTypes' => array(
        'class_name' => 'GrantTypes',
        'group_name' => 'terms',
      ),
      'OrgNTEETypes' => array(
        'class_name' => 'OrgNTEETypes',
        'group_name' => 'terms',
      ),
      'Orgs' => array(
        'class_name' => 'Orgs',
        'group_name' => 'nodes',
      ),
      'Grants' => array(
        'class_name' => 'Grants',
        'group_name' => 'nodes',
      ),
      'IRSOrgData' => array(
        'class_name' => 'IRSOrgData',
        'group_name' => 'nodes',
      ),
    ),
  );
  return $api;
}

class GrantTypes extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import grant types from CSV.');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        "type" => array(
          'type' => 'varchar',
          'length' => '255',
          'not null' => TRUE,
          'description' => 'grant type',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );
    $this->source = new MigrateSourceCSV('/tmp/migrate_battlecreek/classify_grants.csv', $this->csvcols(), array('header_rows'=>4,'embedded_newlines'=>FALSE));
    $this->destination = new MigrateDestinationTerm('grant_types');
    $this->addFieldMapping('name', 'type');
    $this->addFieldMapping('description', 'description');
  }
  protected function csvcols() {
    $cols[0] = array('type', 'grant type');
    $cols[1] = array('description', 'description');
    return $cols;
  }
}

class OrgNTEETypes extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import organization NTEE codes and descriptions from CSV into term name and ntee code fields.');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        "code" => array(
          'type' => 'varchar',
          'length' => '8',
          'not null' => TRUE,
          'description' => 'ntee code',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );
    $this->source = new MigrateSourceCSV('/tmp/migrate_battlecreek/classify_nonprofits_detail.csv', $this->csvcols(), array('header_rows'=>4,'embedded_newlines'=>FALSE));
    $this->destination = new MigrateDestinationTerm('ntee');
    $this->addFieldMapping('name', 'description');
    $this->addFieldMapping('field_ntee_code', 'code');
    $this->addFieldMapping('parent', 'parent_tid');
  }
  protected function csvcols() {
    $cols[0] = array('code', 'ntee code');
    $cols[1] = array('description', 'description');
    return $cols;
  }
  public function prepareRow($row) {
    if (strlen($row->code) > 1) { // e.g. A1 or A5E as opp. to C
                                  // A must come before A1, so we can look it up!
      $letter_tid = db_select('field_data_field_ntee_code', 'ntee')
                       ->fields('ntee', array('entity_id'))
                       ->condition('field_ntee_code_value', $row->code[0])
                       ->execute()
                       ->fetchField();
      if ($letter_tid) {
        $row->parent_tid = $letter_tid;
      }
    }
  }
}

class Orgs extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import organizations from a CSV like orgs_masterlist_NTEE.csv');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        "ORGANIZATION_NAME" => array(
          'type' => 'varchar',
          'length' => '128',
          'not null' => TRUE,
          'description' => 'org name',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->source = new MigrateSourceCSV('/tmp/migrate_battlecreek/orgs_masterlist_NTEE.csv', array(), array('header_rows'=>1, 'embedded_newlines'=>FALSE));
    $this->destination = new MigrateDestinationNode('org');
    $this->addFieldMapping('title', 'ORGANIZATION_NAME');
    $this->addFieldMapping(NULL, 'ORG_NTEE'); // used by prepareRow()
    $this->addFieldMapping(NULL, 'TAGS'); // used by prepareRow()
    $this->addFieldMapping('field_ntee', 'ntees');
    $this->addFieldMapping('field_ntee:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_org_tags', 'org_tags_blob');
    $this->addFieldMapping('field_org_tags:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_org_tags:ignore_case')->defaultValue(TRUE);
  }

  public function prepareRow($row) {
    $codes = array_map('trim', explode(';', $row->ORG_NTEE));
    $tids = array();
    foreach ($codes as $code) {
      $tids[] = db_select('field_data_field_ntee_code', 'ntee')
                  ->fields('ntee', array('entity_id'))
                  ->condition('field_ntee_code_value', $code)
                  ->execute()
                  ->fetchField();
    }
    $row->ntees = $tids;

    $tags = array();
    $org_tags = preg_split("/[\s]*[;][\s]*/", $row->TAGS);
    foreach ($org_tags as $org_tag) {
      if (strlen($org_tag) > 1) {
        $tags[] = $org_tag;
      }
    }
    $row->org_tags_blob = $tags;

  }

  public function fields() {
    return array(
      'title' => 'Organization name',
      'ntees' => 'Comma-separated list of NTEE tids',
    );
  }
}


class Grants extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import grants from a CSV');

    // Set up the source
    $this->source = new MigrateSourceCSV('/tmp/migrate_battlecreek/allgrants.csv', array(), array('header_rows'=>1, 'embedded_newlines'=>FALSE));

    // Map fields in the source to the destination.
    // This defines the key fields for the source and the destination.
    // The first parameter names the map.
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
    // battlecreek uses 'start_date' and 'end_date' in mm/dd/yyyy format instead of 'year' and 'length'
    $this->addFieldMapping('title', 'title'); // should be auto generated...
    $this->addFieldMapping(NULL, 'granter'); // used by prepareRow()
    $this->addFieldMapping(NULL, 'grantee'); // used by prepareRow()
    $this->addFieldMapping(NULL, 'amount'); // used by prepareRow()
    $this->addFieldMapping(NULL, 'start_date'); // used by prepareRow()
    $this->addFieldMapping(NULL, 'end_date'); // used by prepareRow()
    $this->addFieldMapping(NULL, 'granter_program'); // used by prepareRow()
    $this->addFieldMapping('field_source', 'data_source');
    $this->addFieldMapping('field_funder', 'granter_nid');
    $this->addFieldMapping('field_recipient', 'grantee_nid');
    $this->addFieldMapping('field_funded_amount', 'amount_clean');
    $this->addFieldMapping('field_year', 'years_clean');
    $this->addFieldMapping('body', 'notes');
    $this->addFieldMapping('field_grant_tags', 'tags_blob');
    $this->addFieldMapping('field_grant_tags:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_grant_tags:ignore_case')->defaultValue(TRUE);
  }

  protected function getNidByOrgName($orgName) {
    $node = db_select('node', 'n')
              ->fields('n')
              ->condition('title', $orgName, '=')
              ->execute()
              ->fetch();
    $nid = $node->nid;
    return $nid;
  }

  public function prepareRow($row) {
    // Make a title
    $row->title = $row->granter . ' -> ' . $row->grantee;

    $date_data = array(
      'from' => (string) $row->start_date . ' 00:00:00',
      'to' => (string) $row->end_date . ' 00:00:00',
    );

    $row->years_clean = drupal_json_encode($date_data);

    // Get the organziation's IDs
    $row->granter_nid = $this->getNidByOrgName($row->granter);
    $row->grantee_nid = $this->getNidByOrgName($row->grantee);

    $row->amount_clean = (int) str_replace('$', '', str_replace(' ', '', str_replace(',', '', $row->amount)));

    // Tags
    $tags = array();

    $granter_programs = preg_split("/[\s]*[;][\s]*/", $row->granter_program);
    foreach ($granter_programs as $program) {
      if (strlen($program) > 1) {
        $tags[] = 'Granter program: ' . $program;
      }
    }
    $row->tags_blob = $tags;
  }

  /**
   * After rollback, remove hastily-created tags.
   */
  public function postRollback() {
    parent::postRollback();
    $vocabs = taxonomy_vocabulary_get_names();
    $grant_tags_vid = $vocabs['grant_tags']->vid;
    $terms = db_select('taxonomy_term_data', 't')->fields('t', array('tid'))->condition('vid', $grant_tags_vid)->execute();
    foreach ($terms as $term) {
      taxonomy_term_delete($term->tid);
    }
  }
}

class IRSOrgData extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->systemOfRecord = Migration::DESTINATION;

    $this->description = t('Add EINs to orgs from irs_eins table');

    $source_fields = array(
      'ein' => 'EIN',
      'primary_name_of_organization' => 'Organization name',
      'street_address' => 'street address',
      'city' => 'city',
      'state' => 'state',
      'zip_code' => 'zip code',
    );

    $q = db_select('node', 'n');
    $q->leftjoin('irs_eins', 'e', "UPPER(REPLACE(n.title, ',', ''))=UPPER(REPLACE(e.primary_name_of_organization, ',', ''))");
    $q->fields('n', array('nid'))
      ->fields('e', array('ein'))
      ->condition('n.type', 'org', '=');

    $this->source = new MigrateSourceSQL($q, $source_fields);

    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'nid' => array(
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
            'description' => 'nid',
            'alias' => 'n',
          )
        ),
        MigrateDestinationNode::getKeySchema()
    );

    $this->destination = new MigrateDestinationNode('org');

    $this->addFieldMapping('nid', 'nid');
    $this->addFieldMapping('field_ein', 'ein');
  }
}
