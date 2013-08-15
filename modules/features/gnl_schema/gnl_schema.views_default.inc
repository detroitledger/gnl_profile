<?php
/**
 * @file
 * gnl_schema.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gnl_schema_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'org_grants';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'org_grants';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_year' => 'field_year',
    'title_2' => 'title_2',
    'field_funded_amount' => 'field_funded_amount',
    'field_year_1' => 'field_year_1',
    'title_3' => 'title_3',
    'field_funded_amount_1' => 'field_funded_amount_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funded_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funded_amount_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_funder_node']['id'] = 'reverse_field_funder_node';
  $handler->display->display_options['relationships']['reverse_field_funder_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_funder_node']['field'] = 'reverse_field_funder_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_recipient_node']['id'] = 'reverse_field_recipient_node';
  $handler->display->display_options['relationships']['reverse_field_recipient_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_recipient_node']['field'] = 'reverse_field_recipient_node';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'reverse_field_funder_node';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['element_type'] = '0';
  $handler->display->display_options['fields']['field_year']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_funder_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['element_type'] = '0';
  $handler->display->display_options['fields']['title_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['relationship'] = 'reverse_field_funder_node';
  $handler->display->display_options['fields']['field_funded_amount']['label'] = '';
  $handler->display->display_options['fields']['field_funded_amount']['element_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year_1']['id'] = 'field_year_1';
  $handler->display->display_options['fields']['field_year_1']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year_1']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year_1']['relationship'] = 'reverse_field_recipient_node';
  $handler->display->display_options['fields']['field_year_1']['label'] = '';
  $handler->display->display_options['fields']['field_year_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_year_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_year_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_year_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_year_1']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_recipient_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['element_type'] = '0';
  $handler->display->display_options['fields']['title_3']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_3']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title_3']['element_default_classes'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount_1']['id'] = 'field_funded_amount_1';
  $handler->display->display_options['fields']['field_funded_amount_1']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount_1']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount_1']['relationship'] = 'reverse_field_recipient_node';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount_1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['relationship'] = 'reverse_field_funder_node';
  /* Sort criterion: Content: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value_1']['id'] = 'field_year_value_1';
  $handler->display->display_options['sorts']['field_year_value_1']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value_1']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value_1']['relationship'] = 'reverse_field_recipient_node';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'org' => 'org',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';

  /* Display: org grants block */
  $handler = $view->new_display('block', 'org grants block', 'org_grants_block');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'reverse_field_funder_node';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['element_type'] = '0';
  $handler->display->display_options['fields']['field_year']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_funder_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['element_type'] = '0';
  $handler->display->display_options['fields']['title_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['relationship'] = 'reverse_field_funder_node';
  $handler->display->display_options['fields']['field_funded_amount']['label'] = '';
  $handler->display->display_options['fields']['field_funded_amount']['element_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year_1']['id'] = 'field_year_1';
  $handler->display->display_options['fields']['field_year_1']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year_1']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year_1']['relationship'] = 'reverse_field_recipient_node';
  $handler->display->display_options['fields']['field_year_1']['label'] = '';
  $handler->display->display_options['fields']['field_year_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_year_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_year_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_year_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_year_1']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_recipient_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['element_type'] = '0';
  $handler->display->display_options['fields']['title_3']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_3']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title_3']['element_default_classes'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount_1']['id'] = 'field_funded_amount_1';
  $handler->display->display_options['fields']['field_funded_amount_1']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount_1']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount_1']['relationship'] = 'reverse_field_recipient_node';
  $handler->display->display_options['fields']['field_funded_amount_1']['label'] = '';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount_1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );

  /* Display: org grants totals block */
  $handler = $view->new_display('block', 'org grants totals block', 'org_grants_totals_block');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['relationship'] = 'reverse_field_funder_node';
  $handler->display->display_options['fields']['field_funded_amount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_funded_amount']['label'] = 'Total given';
  $handler->display->display_options['fields']['field_funded_amount']['element_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount']['empty'] = '$0';
  $handler->display->display_options['fields']['field_funded_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount_1']['id'] = 'field_funded_amount_1';
  $handler->display->display_options['fields']['field_funded_amount_1']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount_1']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount_1']['relationship'] = 'reverse_field_recipient_node';
  $handler->display->display_options['fields']['field_funded_amount_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_funded_amount_1']['label'] = 'Total received';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_funded_amount_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount_1']['empty'] = '$0';
  $handler->display->display_options['fields']['field_funded_amount_1']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $export['org_grants'] = $view;

  $view = new view();
  $view->name = 'organization_grants_received';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organization Grants Received';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organization Grants Received';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_recipient_target_id']['id'] = 'field_recipient_target_id';
  $handler->display->display_options['relationships']['field_recipient_target_id']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['relationships']['field_recipient_target_id']['field'] = 'field_recipient_target_id';
  $handler->display->display_options['relationships']['field_recipient_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_recipient_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'grant' => 'grant',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['organization_grants_received'] = $view;

  $view = new view();
  $view->name = 'orgs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organizations';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25,50,100,200';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'grants_funded' => 'grants_funded',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'grants_funded' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Data from */
  $handler->display->display_options['fields']['grants_datestart']['id'] = 'grants_datestart';
  $handler->display->display_options['fields']['grants_datestart']['table'] = 'node';
  $handler->display->display_options['fields']['grants_datestart']['field'] = 'grants_datestart';
  /* Field: Content: Grants funded */
  $handler->display->display_options['fields']['grants_funded']['id'] = 'grants_funded';
  $handler->display->display_options['fields']['grants_funded']['table'] = 'node';
  $handler->display->display_options['fields']['grants_funded']['field'] = 'grants_funded';
  /* Field: Content: Grants received */
  $handler->display->display_options['fields']['grants_received']['id'] = 'grants_received';
  $handler->display->display_options['fields']['grants_received']['table'] = 'node';
  $handler->display->display_options['fields']['grants_received']['field'] = 'grants_received';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'org' => 'org',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name contains';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = '';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Nonprofit type';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'ntee';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'orgs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Organizations';
  $handler->display->display_options['menu']['description'] = 'View a list of organizations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Create grant */
  $handler = $view->new_display('page', 'Create grant', 'select_org_for_grant');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'org' => 'org',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'grants/add';

  /* Display: org_totals_services */
  $handler = $view->new_display('services', 'org_totals_services', 'org_totals_services');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'org_totals_services';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'org_totals_services';
  $export['orgs'] = $view;

  return $export;
}
