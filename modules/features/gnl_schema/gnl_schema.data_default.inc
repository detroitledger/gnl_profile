<?php
/**
 * @file
 * gnl_schema.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function gnl_schema_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Irs eins';
  $data_table->name = 'irs_eins';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'ein' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '9',
        'not null' => TRUE,
        'description' => '',
      ),
      'primary_name_of_organization' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'in_care_of_name' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'street_address' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'city' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '22',
        'not null' => FALSE,
        'description' => '',
      ),
      'state' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '4',
        'not null' => FALSE,
        'description' => '',
      ),
      'zip_code' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '10',
        'not null' => TRUE,
        'description' => '',
      ),
      'group_exemption_number' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '4',
        'not null' => TRUE,
        'description' => '',
      ),
      'subsection_code' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '2',
        'not null' => TRUE,
        'description' => '',
      ),
      'affiliation_code' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'classification_codes' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'ruling_date' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'deductibility_code' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'foundation_code' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '2',
        'not null' => TRUE,
        'description' => '',
      ),
      'activity_codes' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '9',
        'not null' => TRUE,
        'description' => '',
      ),
      'organization_code_' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'exempt_organization_status_code_new' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '2',
        'not null' => TRUE,
        'description' => '',
      ),
      'advance_ruling_process' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'tax_period' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'asset_code' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'income_code' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'filing_requirement_code' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '2',
        'not null' => TRUE,
        'description' => '',
      ),
      'pf_filing_requirement_code_new' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'accounting_period' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '2',
        'not null' => TRUE,
        'description' => '',
      ),
      'asset_amount' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '10',
        'scale' => '0',
        'not null' => FALSE,
        'description' => '',
      ),
      'income_amount' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '10',
        'scale' => '0',
        'not null' => FALSE,
        'description' => '',
      ),
      'form_990_revenue_amount' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '10',
        'scale' => '0',
        'not null' => FALSE,
        'description' => '',
      ),
      'national_taxonomy_of_exempt_entities_ntee_code' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '4',
        'not null' => FALSE,
        'description' => '',
      ),
      'sort_name_secondary_name_line' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '34',
        'not null' => FALSE,
        'description' => '',
      ),
      'deductability_descrip' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '62',
        'not null' => FALSE,
        'description' => '',
      ),
      'foundation_descrip' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'subsection_descrip' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'activity_broad_descrip' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'activity_descrip' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'exempt_broad_descrip' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '55',
        'not null' => FALSE,
        'description' => '',
      ),
      'exempt_descrip' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'irs_eins',
    'indexes' => array(
      'ein' => array(
        0 => 'ein',
      ),
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'ein' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'primary_name_of_organization' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'in_care_of_name' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'street_address' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'city' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'state' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'zip_code' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'group_exemption_number' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'subsection_code' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'affiliation_code' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'classification_codes' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'ruling_date' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'deductibility_code' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'foundation_code' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'activity_codes' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'organization_code_' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'exempt_organization_status_code_new' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'advance_ruling_process' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'tax_period' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'asset_code' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'income_code' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'filing_requirement_code' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'pf_filing_requirement_code_new' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'accounting_period' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'asset_amount' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'income_amount' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'form_990_revenue_amount' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'national_taxonomy_of_exempt_entities_ntee_code' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'sort_name_secondary_name_line' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'deductability_descrip' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'foundation_descrip' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'subsection_descrip' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'activity_broad_descrip' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'activity_descrip' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'exempt_broad_descrip' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'exempt_descrip' => array(
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
    ),
    'join' => array(
      'field_data_field_ein' => array(
        'left_field' => 'field_ein_value',
        'field' => 'ein',
        'inner_join' => '0',
      ),
    ),
  );
  $export['irs_eins'] = $data_table;

  return $export;
}
