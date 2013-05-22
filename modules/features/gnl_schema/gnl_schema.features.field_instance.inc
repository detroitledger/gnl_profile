<?php
/**
 * @file
 * gnl_schema.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gnl_schema_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-org-body'
  $field_instances['node-org-body'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-org-field_funding_rels'
  $field_instances['node-org-field_funding_rels'] = array(
    'bundle' => 'org',
    'default_value' => array(
      0 => array(
        'relation_fields' => array(
          'field_amount' => array(
            'und' => array(
              0 => array(
                'value' => 0,
              ),
            ),
          ),
          'field_date_announced' => array(
            'und' => array(
              0 => array(
                'value' => '2013-05-22 00:00:00',
                'show_todate' => TRUE,
                'timezone' => 'America/Detroit',
                'offset' => -14400,
                'offset2' => -14400,
                'value2' => '2013-05-22 00:00:00',
              ),
            ),
          ),
          'field_duration' => array(
            'und' => array(
              0 => array(
                'value' => '2013-05-22 00:00:00',
                'value2' => '2013-05-22 00:00:00',
                'show_todate' => 0,
                'timezone' => 'America/Detroit',
                'offset' => -14400,
                'offset2' => -14400,
              ),
            ),
          ),
          'field_grant_types' => array(
            'und' => array(),
          ),
          'field_links' => array(
            'und' => array(
              0 => array(
                'title' => '',
                'url' => '',
                '_weight' => 0,
              ),
              'add_more' => 'Add another item',
            ),
          ),
          'field_more_info' => array(
            'und' => array(
              0 => array(
                'summary' => '',
                'value' => '',
                'format' => 'plain_text',
              ),
            ),
          ),
        ),
        'exposed_filters' => array(
          'element_id' => 'edit-field-funding-rels-und-0',
          'form_build_id' => 'form-Ejey49havZRVrUibnD0O53pKQp6Y7mMj8ZIv5Ty-jbg',
          'form_id' => 'relation_select_views_exposed_form',
          'form_token' => 'T2-wPissT2O2fkleey5DcwGnuzZQnMWdRUX4q2Usjlg',
          'term' => '',
          'view_display_id' => 'default',
          'view_name' => 'relation_select_term',
          'vocab' => 'All',
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_select',
        'settings' => array(),
        'type' => 'relation_select',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_funding_rels',
    'label' => 'Funding relationships',
    'required' => 0,
    'settings' => array(
      'relation_type' => 'funds',
      'relation_view' => 'relation_select_node:default',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_select',
      'settings' => array(),
      'type' => 'relation_select',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Funding relationships');

  return $field_instances;
}
