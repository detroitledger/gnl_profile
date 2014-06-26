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
  $view->name = 'admin_grants';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'admin_grants';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administer grants';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any grant content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Funder */
  $handler->display->display_options['fields']['field_funder']['id'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['table'] = 'field_data_field_funder';
  $handler->display->display_options['fields']['field_funder']['field'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_recipient']['id'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
    'grant' => 'grant',
  );
  /* Filter criterion: Content: Amount (field_funded_amount) */
  $handler->display->display_options['filters']['field_funded_amount_value']['id'] = 'field_funded_amount_value';
  $handler->display->display_options['filters']['field_funded_amount_value']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['filters']['field_funded_amount_value']['field'] = 'field_funded_amount_value';
  $handler->display->display_options['filters']['field_funded_amount_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_funded_amount_value']['expose']['operator_id'] = 'field_funded_amount_value_op';
  $handler->display->display_options['filters']['field_funded_amount_value']['expose']['label'] = 'Amount';
  $handler->display->display_options['filters']['field_funded_amount_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_funded_amount_value']['expose']['operator'] = 'field_funded_amount_value_op';
  $handler->display->display_options['filters']['field_funded_amount_value']['expose']['identifier'] = 'field_funded_amount_value';
  $handler->display->display_options['filters']['field_funded_amount_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Funder (field_funder) */
  $handler->display->display_options['filters']['field_funder_target_id']['id'] = 'field_funder_target_id';
  $handler->display->display_options['filters']['field_funder_target_id']['table'] = 'field_data_field_funder';
  $handler->display->display_options['filters']['field_funder_target_id']['field'] = 'field_funder_target_id';
  $handler->display->display_options['filters']['field_funder_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['operator_id'] = 'field_funder_target_id_op';
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['label'] = 'Funder';
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['operator'] = 'field_funder_target_id_op';
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['identifier'] = 'field_funder_target_id';
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Recipient (field_recipient) */
  $handler->display->display_options['filters']['field_recipient_target_id']['id'] = 'field_recipient_target_id';
  $handler->display->display_options['filters']['field_recipient_target_id']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['filters']['field_recipient_target_id']['field'] = 'field_recipient_target_id';
  $handler->display->display_options['filters']['field_recipient_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['operator_id'] = 'field_recipient_target_id_op';
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['label'] = 'Recipient';
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['operator'] = 'field_recipient_target_id_op';
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['identifier'] = 'field_recipient_target_id';
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/grants';
  $export['admin_grants'] = $view;

  $view = new view();
  $view->name = 'all_grants';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All grants';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All grants';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['label'] = '';
  $handler->display->display_options['fields']['field_funded_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_recipient']['id'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['label'] = 'to';
  $handler->display->display_options['fields']['field_recipient']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipient']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Funder */
  $handler->display->display_options['fields']['field_funder']['id'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['table'] = 'field_data_field_funder';
  $handler->display->display_options['fields']['field_funder']['field'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['label'] = 'from';
  $handler->display->display_options['fields']['field_funder']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Amount (field_funded_amount) */
  $handler->display->display_options['sorts']['field_funded_amount_value']['id'] = 'field_funded_amount_value';
  $handler->display->display_options['sorts']['field_funded_amount_value']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['sorts']['field_funded_amount_value']['field'] = 'field_funded_amount_value';
  $handler->display->display_options['sorts']['field_funded_amount_value']['order'] = 'DESC';
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
    'org' => 'org',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-grants';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'grants_services');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_recipient']['id'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['label'] = 'to';
  $handler->display->display_options['fields']['field_recipient']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipient']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Funder */
  $handler->display->display_options['fields']['field_funder']['id'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['table'] = 'field_data_field_funder';
  $handler->display->display_options['fields']['field_funder']['field'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['label'] = 'from';
  $handler->display->display_options['fields']['field_funder']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['label'] = 'amount';
  $handler->display->display_options['fields']['field_funded_amount']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_funded_amount']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = 'year_start';
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year_1']['id'] = 'field_year_1';
  $handler->display->display_options['fields']['field_year_1']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year_1']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year_1']['label'] = 'year_end';
  $handler->display->display_options['fields']['field_year_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_year_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_year_1']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Funder */
  $handler->display->display_options['fields']['field_funder_1']['id'] = 'field_funder_1';
  $handler->display->display_options['fields']['field_funder_1']['table'] = 'field_data_field_funder';
  $handler->display->display_options['fields']['field_funder_1']['field'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder_1']['label'] = 'from_id';
  $handler->display->display_options['fields']['field_funder_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_funder_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_recipient_1']['id'] = 'field_recipient_1';
  $handler->display->display_options['fields']['field_recipient_1']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient_1']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient_1']['label'] = 'to_id';
  $handler->display->display_options['fields']['field_recipient_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_recipient_1']['settings'] = array(
    'link' => 0,
  );
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
    'grant' => 'grant',
  );
  /* Filter criterion: Content: Funder (field_funder) */
  $handler->display->display_options['filters']['field_funder_target_id']['id'] = 'field_funder_target_id';
  $handler->display->display_options['filters']['field_funder_target_id']['table'] = 'field_data_field_funder';
  $handler->display->display_options['filters']['field_funder_target_id']['field'] = 'field_funder_target_id';
  $handler->display->display_options['filters']['field_funder_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['operator_id'] = 'field_funder_target_id_op';
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['label'] = 'funder';
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['operator'] = 'field_funder_target_id_op';
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['identifier'] = 'funder';
  $handler->display->display_options['filters']['field_funder_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Recipient (field_recipient) */
  $handler->display->display_options['filters']['field_recipient_target_id']['id'] = 'field_recipient_target_id';
  $handler->display->display_options['filters']['field_recipient_target_id']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['filters']['field_recipient_target_id']['field'] = 'field_recipient_target_id';
  $handler->display->display_options['filters']['field_recipient_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['operator_id'] = 'field_recipient_target_id_op';
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['label'] = 'recipient';
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['operator'] = 'field_recipient_target_id_op';
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['identifier'] = 'recipient';
  $handler->display->display_options['filters']['field_recipient_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'grants_services';
  $export['all_grants'] = $view;

  $view = new view();
  $view->name = 'flags';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Flags';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: flag */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'flag';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Recent flags */
  $handler = $view->new_display('feed', 'Recent flags', 'feed_recent');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent flags';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'field_note';
  $handler->display->display_options['row_options']['link_field'] = 'view_node';
  $handler->display->display_options['row_options']['description_field'] = 'title';
  $handler->display->display_options['row_options']['creator_field'] = 'field_ip';
  $handler->display->display_options['row_options']['date_field'] = 'timestamp';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'timestamp',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Flagging: Flagger IP address */
  $handler->display->display_options['fields']['field_ip']['id'] = 'field_ip';
  $handler->display->display_options['fields']['field_ip']['table'] = 'field_data_field_ip';
  $handler->display->display_options['fields']['field_ip']['field'] = 'field_ip';
  $handler->display->display_options['fields']['field_ip']['relationship'] = 'flag_content_rel';
  /* Field: Flagging: Note */
  $handler->display->display_options['fields']['field_note']['id'] = 'field_note';
  $handler->display->display_options['fields']['field_note']['table'] = 'field_data_field_note';
  $handler->display->display_options['fields']['field_note']['field'] = 'field_note';
  $handler->display->display_options['fields']['field_note']['relationship'] = 'flag_content_rel';
  /* Field: Flags: Flagged time */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
  $handler->display->display_options['path'] = 'flags/recent-rss';
  $handler->display->display_options['sitename_title'] = 0;
  $export['flags'] = $view;

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
  $handler->display->display_options['title'] = 'Grants received';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['sorts']['field_year_value_1']['id'] = 'field_year_value_1';
  $handler->display->display_options['sorts']['field_year_value_1']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value_1']['field'] = 'field_year_value';
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

  /* Display: Grants funded */
  $handler = $view->new_display('block', 'Grants funded', 'funded');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Grants funded';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_3',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'reverse_field_funder_node';
  $handler->display->display_options['row_options']['view_mode'] = 'grantee_only';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: no grants funded msg */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['ui_name'] = 'no grants funded msg';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'no grants funded msg';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'We don\'t have any records for grants made by this organization.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_funder_node']['id'] = 'reverse_field_funder_node';
  $handler->display->display_options['relationships']['reverse_field_funder_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_funder_node']['field'] = 'reverse_field_funder_node';
  $handler->display->display_options['relationships']['reverse_field_funder_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_funder_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Grants received */
  $handler = $view->new_display('block', 'Grants received', 'received');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'reverse_field_recipient_node';
  $handler->display->display_options['row_options']['view_mode'] = 'grantor_only';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: no grants received msg */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['ui_name'] = 'no grants received msg';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'no grants received msg';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'We don\'t have any records for grants received by this organization.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_recipient_node']['id'] = 'reverse_field_recipient_node';
  $handler->display->display_options['relationships']['reverse_field_recipient_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_recipient_node']['field'] = 'reverse_field_recipient_node';
  $handler->display->display_options['relationships']['reverse_field_recipient_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value_1']['id'] = 'field_year_value_1';
  $handler->display->display_options['sorts']['field_year_value_1']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value_1']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value_1']['relationship'] = 'reverse_field_recipient_node';
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25,50,100,200';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
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
  /* Sort criterion: Total granted */
  $handler->display->display_options['sorts']['raw_sort']['id'] = 'raw_sort';
  $handler->display->display_options['sorts']['raw_sort']['table'] = 'views_raw_sql';
  $handler->display->display_options['sorts']['raw_sort']['field'] = 'raw_sort';
  $handler->display->display_options['sorts']['raw_sort']['ui_name'] = 'Total granted';
  $handler->display->display_options['sorts']['raw_sort']['order'] = 'DESC';
  $handler->display->display_options['sorts']['raw_sort']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['raw_sort']['expose']['label'] = 'Total granted';
  $handler->display->display_options['sorts']['raw_sort']['raw_sql'] = '(SELECT SUM(fdffa.field_funded_amount_value) FROM {field_data_field_funded_amount} AS fdffa INNER JOIN {field_data_field_funder} AS fdff ON fdffa.entity_id=fdff.entity_id WHERE fdff.field_funder_target_id=node.nid)';
  /* Sort criterion: Total received */
  $handler->display->display_options['sorts']['raw_sort_1']['id'] = 'raw_sort_1';
  $handler->display->display_options['sorts']['raw_sort_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['sorts']['raw_sort_1']['field'] = 'raw_sort';
  $handler->display->display_options['sorts']['raw_sort_1']['ui_name'] = 'Total received';
  $handler->display->display_options['sorts']['raw_sort_1']['order'] = 'DESC';
  $handler->display->display_options['sorts']['raw_sort_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['raw_sort_1']['expose']['label'] = 'Total received';
  $handler->display->display_options['sorts']['raw_sort_1']['raw_sql'] = '(SELECT SUM(fdffa.field_funded_amount_value) FROM {field_data_field_funded_amount} AS fdffa INNER JOIN {field_data_field_recipient} AS fdfr ON fdffa.entity_id=fdfr.entity_id WHERE fdfr.field_recipient_target_id=node.nid)';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'no results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No organizations found!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'org_totals_services');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Data from */
  $handler->display->display_options['fields']['grants_datestart']['id'] = 'grants_datestart';
  $handler->display->display_options['fields']['grants_datestart']['table'] = 'node';
  $handler->display->display_options['fields']['grants_datestart']['field'] = 'grants_datestart';
  $handler->display->display_options['fields']['grants_datestart']['label'] = 'data_from';
  /* Field: Content: Grants funded */
  $handler->display->display_options['fields']['grants_funded']['id'] = 'grants_funded';
  $handler->display->display_options['fields']['grants_funded']['table'] = 'node';
  $handler->display->display_options['fields']['grants_funded']['field'] = 'grants_funded';
  $handler->display->display_options['fields']['grants_funded']['label'] = 'grants_funded';
  /* Field: Content: Grants received */
  $handler->display->display_options['fields']['grants_received']['id'] = 'grants_received';
  $handler->display->display_options['fields']['grants_received']['table'] = 'node';
  $handler->display->display_options['fields']['grants_received']['field'] = 'grants_received';
  $handler->display->display_options['fields']['grants_received']['label'] = 'grants_received';
  $handler->display->display_options['path'] = 'org_totals_services';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Org_name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Grants funded */
  $handler->display->display_options['fields']['grants_funded']['id'] = 'grants_funded';
  $handler->display->display_options['fields']['grants_funded']['table'] = 'node';
  $handler->display->display_options['fields']['grants_funded']['field'] = 'grants_funded';
  /* Field: Content: Grants received */
  $handler->display->display_options['fields']['grants_received']['id'] = 'grants_received';
  $handler->display->display_options['fields']['grants_received']['table'] = 'node';
  $handler->display->display_options['fields']['grants_received']['field'] = 'grants_received';
  $handler->display->display_options['path'] = 'organizationscsv';
  $export['orgs'] = $view;

  return $export;
}
