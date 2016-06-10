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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_funder' => 'field_funder',
    'field_recipient' => 'field_recipient',
    'field_funded_amount' => 'field_funded_amount',
    'field_year' => 'field_year',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funder' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_recipient' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funded_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'gnl_date_type_human_short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'gnl_date_type_human_short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'User';
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
  /* Field: Content: Federal Award ID */
  $handler->display->display_options['fields']['field_federal_award_id']['id'] = 'field_federal_award_id';
  $handler->display->display_options['fields']['field_federal_award_id']['table'] = 'field_data_field_federal_award_id';
  $handler->display->display_options['fields']['field_federal_award_id']['field'] = 'field_federal_award_id';
  $handler->display->display_options['fields']['field_federal_award_id']['label'] = 'Fed Award ID';
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
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Creator';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Federal Award ID (field_federal_award_id) */
  $handler->display->display_options['filters']['field_federal_award_id_value']['id'] = 'field_federal_award_id_value';
  $handler->display->display_options['filters']['field_federal_award_id_value']['table'] = 'field_data_field_federal_award_id';
  $handler->display->display_options['filters']['field_federal_award_id_value']['field'] = 'field_federal_award_id_value';
  $handler->display->display_options['filters']['field_federal_award_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['operator_id'] = 'field_federal_award_id_value_op';
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['label'] = 'Fed Award ID';
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['operator'] = 'field_federal_award_id_value_op';
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['identifier'] = 'field_federal_award_id_value';
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['autocomplete_field'] = 'field_federal_award_id';
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_federal_award_id_value']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/grants';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage grants';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Dupefinder */
  $handler = $view->new_display('page', 'Dupefinder', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find dupe grants based on Federal Award IDs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_federal_award_id',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'changed' => 'changed',
    'field_funder' => 'field_funder',
    'field_recipient' => 'field_recipient',
    'field_funded_amount' => 'field_funded_amount',
    'field_year' => 'field_year',
    'edit_node' => 'edit_node',
    'field_federal_award_id' => 'field_federal_award_id',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funder' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_recipient' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funded_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_federal_award_id' => array(
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
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'gnl_date_type_human_short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'gnl_date_type_human_short';
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
  /* Field: Content: Federal Award ID */
  $handler->display->display_options['fields']['field_federal_award_id']['id'] = 'field_federal_award_id';
  $handler->display->display_options['fields']['field_federal_award_id']['table'] = 'field_data_field_federal_award_id';
  $handler->display->display_options['fields']['field_federal_award_id']['field'] = 'field_federal_award_id';
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
  /* Filter criterion: Content: Federal Award ID (field_federal_award_id) */
  $handler->display->display_options['filters']['field_federal_award_id_value']['id'] = 'field_federal_award_id_value';
  $handler->display->display_options['filters']['field_federal_award_id_value']['table'] = 'field_data_field_federal_award_id';
  $handler->display->display_options['filters']['field_federal_award_id_value']['field'] = 'field_federal_award_id_value';
  $handler->display->display_options['filters']['field_federal_award_id_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'admin/content/dupefinder-awardids';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Find dupe grants based on Federal Award IDs';
  $handler->display->display_options['menu']['weight'] = '23';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Grant totals */
  $handler = $view->new_display('page', 'Grant totals', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Grant totals';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'field_funded_amount' => 'field_funded_amount',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funded_amount' => array(
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['group_type'] = 'count';
  $handler->display->display_options['fields']['type']['label'] = 'Number of records';
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_funded_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Funder */
  $handler->display->display_options['fields']['field_funder']['id'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['table'] = 'field_data_field_funder';
  $handler->display->display_options['fields']['field_funder']['field'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_funder']['separator'] = ', ';
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_recipient']['id'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_recipient']['separator'] = ', ';
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
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Creator';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = 'between';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/grants/total';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage grants';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['admin_grants'] = $view;

  $view = new view();
  $view->name = 'admin_orgs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administer organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CSW refinement';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'delete any org content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ein' => 'field_ein',
    'field_org_lifespan' => 'field_org_lifespan',
    'field_ntee' => 'field_ntee',
    'field_state_corp_id' => 'field_state_corp_id',
    'field_org_tags' => 'field_org_tags',
    'status' => 'status',
    'body' => 'body',
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
    'field_ein' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_org_lifespan' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ntee' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_state_corp_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_org_tags' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'instructions';
  $handler->display->display_options['header']['area']['content'] = 'Annoyingly, to search for "IS NULL" or "IS NOT NULL" you still need to specify something in the search box for that field, e.g. to find orgs with missing NTEE codes you select "is empty (NULL)" and then also select some value for the search box.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: EIN */
  $handler->display->display_options['fields']['field_ein']['id'] = 'field_ein';
  $handler->display->display_options['fields']['field_ein']['table'] = 'field_data_field_ein';
  $handler->display->display_options['fields']['field_ein']['field'] = 'field_ein';
  $handler->display->display_options['fields']['field_ein']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Founded/dissolved */
  $handler->display->display_options['fields']['field_org_lifespan']['id'] = 'field_org_lifespan';
  $handler->display->display_options['fields']['field_org_lifespan']['table'] = 'field_data_field_org_lifespan';
  $handler->display->display_options['fields']['field_org_lifespan']['field'] = 'field_org_lifespan';
  $handler->display->display_options['fields']['field_org_lifespan']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: NTEE */
  $handler->display->display_options['fields']['field_ntee']['id'] = 'field_ntee';
  $handler->display->display_options['fields']['field_ntee']['table'] = 'field_data_field_ntee';
  $handler->display->display_options['fields']['field_ntee']['field'] = 'field_ntee';
  $handler->display->display_options['fields']['field_ntee']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_ntee']['settings'] = array(
    'display' => 'all',
    'link' => 1,
    'wrap' => 'none',
    'separator' => ' » ',
  );
  $handler->display->display_options['fields']['field_ntee']['delta_offset'] = '0';
  /* Field: Content: State corp id */
  $handler->display->display_options['fields']['field_state_corp_id']['id'] = 'field_state_corp_id';
  $handler->display->display_options['fields']['field_state_corp_id']['table'] = 'field_data_field_state_corp_id';
  $handler->display->display_options['fields']['field_state_corp_id']['field'] = 'field_state_corp_id';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_org_tags']['id'] = 'field_org_tags';
  $handler->display->display_options['fields']['field_org_tags']['table'] = 'field_data_field_org_tags';
  $handler->display->display_options['fields']['field_org_tags']['field'] = 'field_org_tags';
  $handler->display->display_options['fields']['field_org_tags']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_org_tags']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['type_custom_false'] = 'not published!';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published?';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'org' => 'org',
  );
  /* Filter criterion: Content: Founded/dissolved (field_org_lifespan) */
  $handler->display->display_options['filters']['field_org_lifespan_value']['id'] = 'field_org_lifespan_value';
  $handler->display->display_options['filters']['field_org_lifespan_value']['table'] = 'field_data_field_org_lifespan';
  $handler->display->display_options['filters']['field_org_lifespan_value']['field'] = 'field_org_lifespan_value';
  $handler->display->display_options['filters']['field_org_lifespan_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['operator_id'] = 'field_org_lifespan_value_op';
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['label'] = 'Founded date';
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['operator'] = 'field_org_lifespan_value_op';
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['identifier'] = 'field_org_lifespan_value';
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['autocomplete_field'] = 'field_org_lifespan';
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_org_lifespan_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Founded/dissolved (field_org_lifespan:value2) */
  $handler->display->display_options['filters']['field_org_lifespan_value2']['id'] = 'field_org_lifespan_value2';
  $handler->display->display_options['filters']['field_org_lifespan_value2']['table'] = 'field_data_field_org_lifespan';
  $handler->display->display_options['filters']['field_org_lifespan_value2']['field'] = 'field_org_lifespan_value2';
  $handler->display->display_options['filters']['field_org_lifespan_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_lifespan_value2']['expose']['operator_id'] = 'field_org_lifespan_value2_op';
  $handler->display->display_options['filters']['field_org_lifespan_value2']['expose']['label'] = 'Dissolved date';
  $handler->display->display_options['filters']['field_org_lifespan_value2']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_org_lifespan_value2']['expose']['operator'] = 'field_org_lifespan_value2_op';
  $handler->display->display_options['filters']['field_org_lifespan_value2']['expose']['identifier'] = 'field_org_lifespan_value2';
  $handler->display->display_options['filters']['field_org_lifespan_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_org_lifespan_value2']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_org_lifespan_value2']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_org_lifespan_value2']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_org_lifespan_value2']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: NTEE (field_ntee) */
  $handler->display->display_options['filters']['field_ntee_tid']['id'] = 'field_ntee_tid';
  $handler->display->display_options['filters']['field_ntee_tid']['table'] = 'field_data_field_ntee';
  $handler->display->display_options['filters']['field_ntee_tid']['field'] = 'field_ntee_tid';
  $handler->display->display_options['filters']['field_ntee_tid']['value'] = '';
  $handler->display->display_options['filters']['field_ntee_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ntee_tid']['expose']['operator_id'] = 'field_ntee_tid_op';
  $handler->display->display_options['filters']['field_ntee_tid']['expose']['label'] = 'NTEE';
  $handler->display->display_options['filters']['field_ntee_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_ntee_tid']['expose']['operator'] = 'field_ntee_tid_op';
  $handler->display->display_options['filters']['field_ntee_tid']['expose']['identifier'] = 'field_ntee_tid';
  $handler->display->display_options['filters']['field_ntee_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ntee_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_ntee_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ntee_tid']['vocabulary'] = 'ntee';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: EIN (field_ein) */
  $handler->display->display_options['filters']['field_ein_value']['id'] = 'field_ein_value';
  $handler->display->display_options['filters']['field_ein_value']['table'] = 'field_data_field_ein';
  $handler->display->display_options['filters']['field_ein_value']['field'] = 'field_ein_value';
  $handler->display->display_options['filters']['field_ein_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ein_value']['expose']['operator_id'] = 'field_ein_value_op';
  $handler->display->display_options['filters']['field_ein_value']['expose']['label'] = 'EIN';
  $handler->display->display_options['filters']['field_ein_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_ein_value']['expose']['operator'] = 'field_ein_value_op';
  $handler->display->display_options['filters']['field_ein_value']['expose']['identifier'] = 'field_ein_value';
  $handler->display->display_options['filters']['field_ein_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/orgs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage organizations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Manage EINs */
  $handler = $view->new_display('page', 'Manage EINs', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ein_editable' => 'field_ein_editable',
    'field_org_address' => 'field_org_address',
    'status' => 'status',
    'created' => 'created',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ein_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_org_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: EIN (editable) */
  $handler->display->display_options['fields']['field_ein_editable']['id'] = 'field_ein_editable';
  $handler->display->display_options['fields']['field_ein_editable']['table'] = 'field_data_field_ein';
  $handler->display->display_options['fields']['field_ein_editable']['field'] = 'field_ein_editable';
  $handler->display->display_options['fields']['field_ein_editable']['label'] = 'EIN';
  $handler->display->display_options['fields']['field_ein_editable']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ein_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_ein_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_ein_editable']['suppress_description'] = 0;
  /* Field: Content: State corp id (editable) */
  $handler->display->display_options['fields']['field_state_corp_id_editable']['id'] = 'field_state_corp_id_editable';
  $handler->display->display_options['fields']['field_state_corp_id_editable']['table'] = 'field_data_field_state_corp_id';
  $handler->display->display_options['fields']['field_state_corp_id_editable']['field'] = 'field_state_corp_id_editable';
  $handler->display->display_options['fields']['field_state_corp_id_editable']['label'] = 'State corp id';
  $handler->display->display_options['fields']['field_state_corp_id_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_state_corp_id_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_state_corp_id_editable']['suppress_description'] = 0;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_org_address']['id'] = 'field_org_address';
  $handler->display->display_options['fields']['field_org_address']['table'] = 'field_data_field_org_address';
  $handler->display->display_options['fields']['field_org_address']['field'] = 'field_org_address';
  $handler->display->display_options['fields']['field_org_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_org_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['type_custom_false'] = 'not published!';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'gnl_date_type_human_short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'gnl_date_type_human_short';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'gnl_date_type_human_short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'gnl_date_type_human_short';
  $handler->display->display_options['path'] = 'admin/orgs/manage-eins';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage EINs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: csw refinement */
  $handler = $view->new_display('page', 'csw refinement', 'csw');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 25, 50, 75, 100, 125';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_org_tags' => 'field_org_tags',
    'status' => 'status',
    'field_org_address_editable' => 'field_org_address_editable',
    'field_ein_editable' => 'field_ein_editable',
    'field_state_corp_id_editable' => 'field_state_corp_id_editable',
    'field_ntee_editable' => 'field_ntee_editable',
    'body_editable' => 'body_editable',
    'field_major_program_areas_editable' => 'field_major_program_areas_editable',
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
    'field_org_tags' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_org_address_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ein_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_state_corp_id_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ntee_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_program_areas_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_org_tags']['id'] = 'field_org_tags';
  $handler->display->display_options['fields']['field_org_tags']['table'] = 'field_data_field_org_tags';
  $handler->display->display_options['fields']['field_org_tags']['field'] = 'field_org_tags';
  $handler->display->display_options['fields']['field_org_tags']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_org_tags']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Pub';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['type_custom_false'] = 'not published!';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Address (editable) */
  $handler->display->display_options['fields']['field_org_address_editable']['id'] = 'field_org_address_editable';
  $handler->display->display_options['fields']['field_org_address_editable']['table'] = 'field_data_field_org_address';
  $handler->display->display_options['fields']['field_org_address_editable']['field'] = 'field_org_address_editable';
  $handler->display->display_options['fields']['field_org_address_editable']['label'] = 'Address';
  $handler->display->display_options['fields']['field_org_address_editable']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_org_address_editable']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_org_address_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_org_address_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_org_address_editable']['suppress_description'] = 0;
  /* Field: Content: EIN (editable) */
  $handler->display->display_options['fields']['field_ein_editable']['id'] = 'field_ein_editable';
  $handler->display->display_options['fields']['field_ein_editable']['table'] = 'field_data_field_ein';
  $handler->display->display_options['fields']['field_ein_editable']['field'] = 'field_ein_editable';
  $handler->display->display_options['fields']['field_ein_editable']['label'] = 'EIN';
  $handler->display->display_options['fields']['field_ein_editable']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_ein_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_ein_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_ein_editable']['suppress_description'] = 1;
  /* Field: Content: State corp id (editable) */
  $handler->display->display_options['fields']['field_state_corp_id_editable']['id'] = 'field_state_corp_id_editable';
  $handler->display->display_options['fields']['field_state_corp_id_editable']['table'] = 'field_data_field_state_corp_id';
  $handler->display->display_options['fields']['field_state_corp_id_editable']['field'] = 'field_state_corp_id_editable';
  $handler->display->display_options['fields']['field_state_corp_id_editable']['label'] = 'State corp id';
  $handler->display->display_options['fields']['field_state_corp_id_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_state_corp_id_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_state_corp_id_editable']['suppress_description'] = 1;
  /* Field: Content: NTEE (editable) */
  $handler->display->display_options['fields']['field_ntee_editable']['id'] = 'field_ntee_editable';
  $handler->display->display_options['fields']['field_ntee_editable']['table'] = 'field_data_field_ntee';
  $handler->display->display_options['fields']['field_ntee_editable']['field'] = 'field_ntee_editable';
  $handler->display->display_options['fields']['field_ntee_editable']['label'] = 'NTEE';
  $handler->display->display_options['fields']['field_ntee_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ntee_editable']['widget_type'] = 'taxonomy_autocomplete';
  $handler->display->display_options['fields']['field_ntee_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_ntee_editable']['suppress_description'] = 1;
  /* Field: Content: Description (editable) */
  $handler->display->display_options['fields']['body_editable']['id'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_editable']['field'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['label'] = 'Description';
  $handler->display->display_options['fields']['body_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['body_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['body_editable']['suppress_description'] = 1;
  /* Field: Content: Major program areas (editable) */
  $handler->display->display_options['fields']['field_major_program_areas_editable']['id'] = 'field_major_program_areas_editable';
  $handler->display->display_options['fields']['field_major_program_areas_editable']['table'] = 'field_data_field_major_program_areas';
  $handler->display->display_options['fields']['field_major_program_areas_editable']['field'] = 'field_major_program_areas_editable';
  $handler->display->display_options['fields']['field_major_program_areas_editable']['label'] = 'Major program areas';
  $handler->display->display_options['fields']['field_major_program_areas_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_major_program_areas_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_major_program_areas_editable']['suppress_description'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published?';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'org' => 'org',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: EIN (field_ein) */
  $handler->display->display_options['filters']['field_ein_value']['id'] = 'field_ein_value';
  $handler->display->display_options['filters']['field_ein_value']['table'] = 'field_data_field_ein';
  $handler->display->display_options['filters']['field_ein_value']['field'] = 'field_ein_value';
  $handler->display->display_options['filters']['field_ein_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ein_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ein_value']['expose']['operator_id'] = 'field_ein_value_op';
  $handler->display->display_options['filters']['field_ein_value']['expose']['label'] = 'EIN';
  $handler->display->display_options['filters']['field_ein_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_ein_value']['expose']['operator'] = 'field_ein_value_op';
  $handler->display->display_options['filters']['field_ein_value']['expose']['identifier'] = 'field_ein_value';
  $handler->display->display_options['filters']['field_ein_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Address (field_org_address:thoroughfare) */
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['id'] = 'field_org_address_thoroughfare';
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['table'] = 'field_data_field_org_address';
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['field'] = 'field_org_address_thoroughfare';
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['operator'] = 'shorterthan';
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['value'] = '1';
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['expose']['operator_id'] = 'field_org_address_thoroughfare_op';
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['expose']['label'] = 'Street address';
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['expose']['operator'] = 'field_org_address_thoroughfare_op';
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['expose']['identifier'] = 'field_org_address_thoroughfare';
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_org_address_thoroughfare']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Client project (field_client_project) */
  $handler->display->display_options['filters']['field_client_project_tid']['id'] = 'field_client_project_tid';
  $handler->display->display_options['filters']['field_client_project_tid']['table'] = 'field_data_field_client_project';
  $handler->display->display_options['filters']['field_client_project_tid']['field'] = 'field_client_project_tid';
  $handler->display->display_options['filters']['field_client_project_tid']['value'] = array(
    1390 => '1390',
  );
  $handler->display->display_options['filters']['field_client_project_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_project_tid']['expose']['operator_id'] = 'field_client_project_tid_op';
  $handler->display->display_options['filters']['field_client_project_tid']['expose']['label'] = 'Client project';
  $handler->display->display_options['filters']['field_client_project_tid']['expose']['operator'] = 'field_client_project_tid_op';
  $handler->display->display_options['filters']['field_client_project_tid']['expose']['identifier'] = 'field_client_project_tid';
  $handler->display->display_options['filters']['field_client_project_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_client_project_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_client_project_tid']['vocabulary'] = 'client_projects';
  $handler->display->display_options['path'] = 'admin/orgs/csw-detroit-futzing';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'CSW refinement';
  $handler->display->display_options['menu']['weight'] = '30';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['admin_orgs'] = $view;

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

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'grants_csv');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Grant ID';
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
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_recipient_1']['id'] = 'field_recipient_1';
  $handler->display->display_options['fields']['field_recipient_1']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient_1']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient_1']['label'] = 'Recipient ID';
  $handler->display->display_options['fields']['field_recipient_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_recipient_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Funder */
  $handler->display->display_options['fields']['field_funder_1']['id'] = 'field_funder_1';
  $handler->display->display_options['fields']['field_funder_1']['table'] = 'field_data_field_funder';
  $handler->display->display_options['fields']['field_funder_1']['field'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder_1']['label'] = 'Funder ID';
  $handler->display->display_options['fields']['field_funder_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_funder_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = 'Start year';
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'rfc2822',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year_1']['id'] = 'field_year_1';
  $handler->display->display_options['fields']['field_year_1']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year_1']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year_1']['label'] = 'End year';
  $handler->display->display_options['fields']['field_year_1']['settings'] = array(
    'format_type' => 'rfc2822',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_grant_tags']['id'] = 'field_grant_tags';
  $handler->display->display_options['fields']['field_grant_tags']['table'] = 'field_data_field_grant_tags';
  $handler->display->display_options['fields']['field_grant_tags']['field'] = 'field_grant_tags';
  $handler->display->display_options['fields']['field_grant_tags']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'grantscsv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: CSV: grants funded by CSW orgs */
  $handler = $view->new_display('views_data_export', 'CSV: grants funded by CSW orgs', 'views_data_export_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'grants-funded-by-csw-orgs.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_recipient_target_id']['id'] = 'field_recipient_target_id';
  $handler->display->display_options['relationships']['field_recipient_target_id']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['relationships']['field_recipient_target_id']['field'] = 'field_recipient_target_id';
  $handler->display->display_options['relationships']['field_recipient_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_funder_target_id']['id'] = 'field_funder_target_id';
  $handler->display->display_options['relationships']['field_funder_target_id']['table'] = 'field_data_field_funder';
  $handler->display->display_options['relationships']['field_funder_target_id']['field'] = 'field_funder_target_id';
  $handler->display->display_options['relationships']['field_funder_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Grant_id';
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_recipient_1']['id'] = 'field_recipient_1';
  $handler->display->display_options['fields']['field_recipient_1']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient_1']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient_1']['label'] = 'Recipient_id';
  $handler->display->display_options['fields']['field_recipient_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_recipient_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Funder */
  $handler->display->display_options['fields']['field_funder_1']['id'] = 'field_funder_1';
  $handler->display->display_options['fields']['field_funder_1']['table'] = 'field_data_field_funder';
  $handler->display->display_options['fields']['field_funder_1']['field'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder_1']['label'] = 'Funder_id';
  $handler->display->display_options['fields']['field_funder_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_funder_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_recipient']['id'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['label'] = 'To';
  $handler->display->display_options['fields']['field_recipient']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipient']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Funder */
  $handler->display->display_options['fields']['field_funder']['id'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['table'] = 'field_data_field_funder';
  $handler->display->display_options['fields']['field_funder']['field'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['label'] = 'From';
  $handler->display->display_options['fields']['field_funder']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = 'Start_year';
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'rfc2822',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year_1']['id'] = 'field_year_1';
  $handler->display->display_options['fields']['field_year_1']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year_1']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year_1']['label'] = 'End_year';
  $handler->display->display_options['fields']['field_year_1']['settings'] = array(
    'format_type' => 'rfc2822',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_grant_tags']['id'] = 'field_grant_tags';
  $handler->display->display_options['fields']['field_grant_tags']['table'] = 'field_data_field_grant_tags';
  $handler->display->display_options['fields']['field_grant_tags']['field'] = 'field_grant_tags';
  $handler->display->display_options['fields']['field_grant_tags']['delta_offset'] = '0';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Client project (field_client_project) */
  $handler->display->display_options['filters']['field_client_project_tid_1']['id'] = 'field_client_project_tid_1';
  $handler->display->display_options['filters']['field_client_project_tid_1']['table'] = 'field_data_field_client_project';
  $handler->display->display_options['filters']['field_client_project_tid_1']['field'] = 'field_client_project_tid';
  $handler->display->display_options['filters']['field_client_project_tid_1']['relationship'] = 'field_funder_target_id';
  $handler->display->display_options['filters']['field_client_project_tid_1']['value'] = array(
    1390 => '1390',
  );
  $handler->display->display_options['filters']['field_client_project_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_client_project_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_client_project_tid_1']['vocabulary'] = 'client_projects';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'grant' => 'grant',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'grantscsv/csw-detroit/funded';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: CSV: grants received by CSW orgs */
  $handler = $view->new_display('views_data_export', 'CSV: grants received by CSW orgs', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Grants received by CSW orgs';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'grants-received-by-csw-orgs.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_recipient_target_id']['id'] = 'field_recipient_target_id';
  $handler->display->display_options['relationships']['field_recipient_target_id']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['relationships']['field_recipient_target_id']['field'] = 'field_recipient_target_id';
  $handler->display->display_options['relationships']['field_recipient_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_funder_target_id']['id'] = 'field_funder_target_id';
  $handler->display->display_options['relationships']['field_funder_target_id']['table'] = 'field_data_field_funder';
  $handler->display->display_options['relationships']['field_funder_target_id']['field'] = 'field_funder_target_id';
  $handler->display->display_options['relationships']['field_funder_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Grant_id';
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_recipient_1']['id'] = 'field_recipient_1';
  $handler->display->display_options['fields']['field_recipient_1']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient_1']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient_1']['label'] = 'Recipient_id';
  $handler->display->display_options['fields']['field_recipient_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_recipient_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Funder */
  $handler->display->display_options['fields']['field_funder_1']['id'] = 'field_funder_1';
  $handler->display->display_options['fields']['field_funder_1']['table'] = 'field_data_field_funder';
  $handler->display->display_options['fields']['field_funder_1']['field'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder_1']['label'] = 'Funder_id';
  $handler->display->display_options['fields']['field_funder_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_funder_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_recipient']['id'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['table'] = 'field_data_field_recipient';
  $handler->display->display_options['fields']['field_recipient']['field'] = 'field_recipient';
  $handler->display->display_options['fields']['field_recipient']['label'] = 'To';
  $handler->display->display_options['fields']['field_recipient']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipient']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Funder */
  $handler->display->display_options['fields']['field_funder']['id'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['table'] = 'field_data_field_funder';
  $handler->display->display_options['fields']['field_funder']['field'] = 'field_funder';
  $handler->display->display_options['fields']['field_funder']['label'] = 'From';
  $handler->display->display_options['fields']['field_funder']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funded_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = 'Start_year';
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'rfc2822',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year_1']['id'] = 'field_year_1';
  $handler->display->display_options['fields']['field_year_1']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year_1']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year_1']['label'] = 'End_year';
  $handler->display->display_options['fields']['field_year_1']['settings'] = array(
    'format_type' => 'rfc2822',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_grant_tags']['id'] = 'field_grant_tags';
  $handler->display->display_options['fields']['field_grant_tags']['table'] = 'field_data_field_grant_tags';
  $handler->display->display_options['fields']['field_grant_tags']['field'] = 'field_grant_tags';
  $handler->display->display_options['fields']['field_grant_tags']['delta_offset'] = '0';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Client project (field_client_project) */
  $handler->display->display_options['filters']['field_client_project_tid_1']['id'] = 'field_client_project_tid_1';
  $handler->display->display_options['filters']['field_client_project_tid_1']['table'] = 'field_data_field_client_project';
  $handler->display->display_options['filters']['field_client_project_tid_1']['field'] = 'field_client_project_tid';
  $handler->display->display_options['filters']['field_client_project_tid_1']['relationship'] = 'field_recipient_target_id';
  $handler->display->display_options['filters']['field_client_project_tid_1']['value'] = array(
    1390 => '1390',
  );
  $handler->display->display_options['filters']['field_client_project_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_client_project_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_client_project_tid_1']['vocabulary'] = 'client_projects';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'grant' => 'grant',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'grantscsv/csw-detroit/received';
  $handler->display->display_options['sitename_title'] = 0;
  $export['all_grants'] = $view;

  $view = new view();
  $view->name = 'board_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Board terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Active board members';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'search past and future members';
  $handler->display->display_options['link_display'] = 'page_all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_person' => 'field_person',
    'field_term_dates' => 'field_term_dates',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_person' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_term_dates' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No active board terms';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = 'organization nid';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_organization']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'board term nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Person */
  $handler->display->display_options['fields']['field_person']['id'] = 'field_person';
  $handler->display->display_options['fields']['field_person']['table'] = 'field_data_field_person';
  $handler->display->display_options['fields']['field_person']['field'] = 'field_person';
  $handler->display->display_options['fields']['field_person']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person']['alter']['text'] = '[field_person] <a href="/node/[field_person-target_id]/edit?destination=node/[field_board]" title="Edit member\'s contact information">edit</a>';
  $handler->display->display_options['fields']['field_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  /* Field: Content: Term dates */
  $handler->display->display_options['fields']['field_term_dates']['id'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['field'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['label'] = 'Term';
  $handler->display->display_options['fields']['field_term_dates']['settings'] = array(
    'format_type' => 'gnl_date_type_human_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]/edit?destination=node/[field_board]">edit</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Term dates */
  $handler->display->display_options['fields']['field_term_dates_1']['id'] = 'field_term_dates_1';
  $handler->display->display_options['fields']['field_term_dates_1']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['fields']['field_term_dates_1']['field'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates_1']['label'] = 'start date';
  $handler->display->display_options['fields']['field_term_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_dates_1']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_term_dates_1']['settings'] = array(
    'format_type' => 'gnl_date_type_human_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Term dates */
  $handler->display->display_options['fields']['field_term_dates_2']['id'] = 'field_term_dates_2';
  $handler->display->display_options['fields']['field_term_dates_2']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['fields']['field_term_dates_2']['field'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates_2']['label'] = 'end date';
  $handler->display->display_options['fields']['field_term_dates_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_dates_2']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_term_dates_2']['settings'] = array(
    'format_type' => 'gnl_date_type_human_short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Term dates (field_term_dates) */
  $handler->display->display_options['sorts']['field_term_dates_value']['id'] = 'field_term_dates_value';
  $handler->display->display_options['sorts']['field_term_dates_value']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['sorts']['field_term_dates_value']['field'] = 'field_term_dates_value';
  /* Contextual filter: Content: Organization (field_organization) */
  $handler->display->display_options['arguments']['field_organization_target_id']['id'] = 'field_organization_target_id';
  $handler->display->display_options['arguments']['field_organization_target_id']['table'] = 'field_data_field_organization';
  $handler->display->display_options['arguments']['field_organization_target_id']['field'] = 'field_organization_target_id';
  $handler->display->display_options['arguments']['field_organization_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_organization_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_organization_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_organization_target_id']['validate_options']['types'] = array(
    'org' => 'org',
  );
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
    'board_term' => 'board_term',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Active page */
  $handler = $view->new_display('page', 'Active page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Organization (field_organization) */
  $handler->display->display_options['arguments']['field_organization_target_id']['id'] = 'field_organization_target_id';
  $handler->display->display_options['arguments']['field_organization_target_id']['table'] = 'field_data_field_organization';
  $handler->display->display_options['arguments']['field_organization_target_id']['field'] = 'field_organization_target_id';
  $handler->display->display_options['arguments']['field_organization_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_organization_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_organization_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_organization_target_id']['validate_options']['types'] = array(
    'org' => 'org',
  );
  $handler->display->display_options['path'] = 'node/%/terms';

  /* Display: All block */
  $handler = $view->new_display('block', 'All block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All board members';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No board terms';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Organization (field_organization) */
  $handler->display->display_options['arguments']['field_organization_target_id']['id'] = 'field_organization_target_id';
  $handler->display->display_options['arguments']['field_organization_target_id']['table'] = 'field_data_field_organization';
  $handler->display->display_options['arguments']['field_organization_target_id']['field'] = 'field_organization_target_id';
  $handler->display->display_options['arguments']['field_organization_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_organization_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_organization_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_organization_target_id']['validate_options']['types'] = array(
    'org' => 'org',
  );

  /* Display: All page */
  $handler = $view->new_display('page', 'All page', 'page_all');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All board members';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'search past and future members';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_person' => 'field_person',
    'field_term_dates' => 'field_term_dates',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_term_dates';
  $handler->display->display_options['style_options']['info'] = array(
    'field_person' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_term_dates' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No board terms';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Organization (field_organization) */
  $handler->display->display_options['arguments']['field_organization_target_id_1']['id'] = 'field_organization_target_id_1';
  $handler->display->display_options['arguments']['field_organization_target_id_1']['table'] = 'field_data_field_organization';
  $handler->display->display_options['arguments']['field_organization_target_id_1']['field'] = 'field_organization_target_id';
  $handler->display->display_options['arguments']['field_organization_target_id_1']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_organization_target_id_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_organization_target_id_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organization_target_id_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organization_target_id_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_organization_target_id_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_organization_target_id_1']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_organization_target_id_1']['validate_options']['types'] = array(
    'org' => 'org',
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
    'board_term' => 'board_term',
  );
  /* Filter criterion: Content: Term dates (field_term_dates) */
  $handler->display->display_options['filters']['field_term_dates_value']['id'] = 'field_term_dates_value';
  $handler->display->display_options['filters']['field_term_dates_value']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['filters']['field_term_dates_value']['field'] = 'field_term_dates_value';
  $handler->display->display_options['filters']['field_term_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_term_dates_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_term_dates_value']['expose']['operator_id'] = 'field_term_dates_value_op';
  $handler->display->display_options['filters']['field_term_dates_value']['expose']['label'] = 'Start date before';
  $handler->display->display_options['filters']['field_term_dates_value']['expose']['operator'] = 'field_term_dates_value_op';
  $handler->display->display_options['filters']['field_term_dates_value']['expose']['identifier'] = 'field_term_dates_value';
  $handler->display->display_options['filters']['field_term_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Term dates (field_term_dates:value2) */
  $handler->display->display_options['filters']['field_term_dates_value2']['id'] = 'field_term_dates_value2';
  $handler->display->display_options['filters']['field_term_dates_value2']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['filters']['field_term_dates_value2']['field'] = 'field_term_dates_value2';
  $handler->display->display_options['filters']['field_term_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_term_dates_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_term_dates_value2']['expose']['operator_id'] = 'field_term_dates_value2_op';
  $handler->display->display_options['filters']['field_term_dates_value2']['expose']['label'] = 'End date after';
  $handler->display->display_options['filters']['field_term_dates_value2']['expose']['operator'] = 'field_term_dates_value2_op';
  $handler->display->display_options['filters']['field_term_dates_value2']['expose']['identifier'] = 'field_term_dates_value2';
  $handler->display->display_options['filters']['field_term_dates_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_term_dates_value2']['group_info']['label'] = 'Term Dates - end date (field_term_dates:value2)';
  $handler->display->display_options['filters']['field_term_dates_value2']['group_info']['identifier'] = 'field_term_dates_value2';
  $handler->display->display_options['filters']['field_term_dates_value2']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_term_dates_value2']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'node/%/board_terms';

  /* Display: public active block */
  $handler = $view->new_display('block', 'public active block', 'block_2');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'search past and future members';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Person */
  $handler->display->display_options['fields']['field_person']['id'] = 'field_person';
  $handler->display->display_options['fields']['field_person']['table'] = 'field_data_field_person';
  $handler->display->display_options['fields']['field_person']['field'] = 'field_person';
  $handler->display->display_options['fields']['field_person']['alter']['text'] = '[field_person] <a href="/node/[field_person-target_id]/edit?destination=node/[field_organization]" title="Edit member\'s contact information">edit</a>';
  $handler->display->display_options['fields']['field_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  /* Field: Content: Term dates */
  $handler->display->display_options['fields']['field_term_dates']['id'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['field'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['label'] = 'Term';
  $handler->display->display_options['fields']['field_term_dates']['settings'] = array(
    'format_type' => 'gnl_date_type_human_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Term dates */
  $handler->display->display_options['fields']['field_term_dates_1']['id'] = 'field_term_dates_1';
  $handler->display->display_options['fields']['field_term_dates_1']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['fields']['field_term_dates_1']['field'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates_1']['label'] = 'start date';
  $handler->display->display_options['fields']['field_term_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_dates_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Term dates */
  $handler->display->display_options['fields']['field_term_dates_2']['id'] = 'field_term_dates_2';
  $handler->display->display_options['fields']['field_term_dates_2']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['fields']['field_term_dates_2']['field'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates_2']['label'] = 'end date';
  $handler->display->display_options['fields']['field_term_dates_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_dates_2']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Organization (field_organization) */
  $handler->display->display_options['arguments']['field_organization_target_id']['id'] = 'field_organization_target_id';
  $handler->display->display_options['arguments']['field_organization_target_id']['table'] = 'field_data_field_organization';
  $handler->display->display_options['arguments']['field_organization_target_id']['field'] = 'field_organization_target_id';
  $handler->display->display_options['arguments']['field_organization_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_organization_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organization_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_organization_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_organization_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_organization_target_id']['validate_options']['types'] = array(
    'org' => 'org',
  );

  /* Display: Export all */
  $handler = $view->new_display('views_data_export', 'Export all', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Export all board members';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%1-title_%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Person */
  $handler->display->display_options['fields']['field_person']['id'] = 'field_person';
  $handler->display->display_options['fields']['field_person']['table'] = 'field_data_field_person';
  $handler->display->display_options['fields']['field_person']['field'] = 'field_person';
  $handler->display->display_options['fields']['field_person']['alter']['text'] = '[field_person] <a href="/node/[field_person-target_id]/edit?destination=node/[field_organization]" title="Edit member\'s contact information">edit</a>';
  $handler->display->display_options['fields']['field_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  /* Field: Content: Term dates */
  $handler->display->display_options['fields']['field_term_dates']['id'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['field'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['settings'] = array(
    'format_type' => 'gnl_date_type_human_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
    'board_term' => 'board_term',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'node/%/board_terms/csv';
  $handler->display->display_options['displays'] = array(
    'page_all' => 'page_all',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Export active */
  $handler = $view->new_display('views_data_export', 'Export active', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Export active board members';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%1-title_%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Person */
  $handler->display->display_options['fields']['field_person']['id'] = 'field_person';
  $handler->display->display_options['fields']['field_person']['table'] = 'field_data_field_person';
  $handler->display->display_options['fields']['field_person']['field'] = 'field_person';
  $handler->display->display_options['fields']['field_person']['alter']['text'] = '[field_person] <a href="/node/[field_person-target_id]/edit?destination=node/[field_organization]" title="Edit member\'s contact information">edit</a>';
  $handler->display->display_options['fields']['field_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  /* Field: Content: Term dates */
  $handler->display->display_options['fields']['field_term_dates']['id'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['table'] = 'field_data_field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['field'] = 'field_term_dates';
  $handler->display->display_options['fields']['field_term_dates']['settings'] = array(
    'format_type' => 'gnl_date_type_human_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['path'] = 'node/%/board_terms/csv/active_only';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
    'page_all' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['board_terms'] = $view;

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
  $handler->display->display_options['row_options']['link_field'] = 'path';
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['path'] = 'flags/recent-rss';
  $handler->display->display_options['sitename_title'] = 0;
  $export['flags'] = $view;

  $view = new view();
  $view->name = 'grant_tags';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Grant tags';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Grant tags';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit terms in 1';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'grant_tags' => 'grant_tags',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name contains';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/grant-tags';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'List grant tags';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['grant_tags'] = $view;

  $view = new view();
  $view->name = 'moderate_unpublished_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Moderate Unpublished Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Moderate Unpublished Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_funded_amount']['id'] = 'field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['table'] = 'field_data_field_funded_amount';
  $handler->display->display_options['fields']['field_funded_amount']['field'] = 'field_funded_amount';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: EIN */
  $handler->display->display_options['fields']['field_ein']['id'] = 'field_ein';
  $handler->display->display_options['fields']['field_ein']['table'] = 'field_data_field_ein';
  $handler->display->display_options['fields']['field_ein']['field'] = 'field_ein';
  /* Field: Content: Federal Award ID */
  $handler->display->display_options['fields']['field_federal_award_id']['id'] = 'field_federal_award_id';
  $handler->display->display_options['fields']['field_federal_award_id']['table'] = 'field_data_field_federal_award_id';
  $handler->display->display_options['fields']['field_federal_award_id']['field'] = 'field_federal_award_id';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Publish';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
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
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
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
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
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
    'action::node_save_action' => array(
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
    'action::node_unpublish_action' => array(
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
    'action::auto_entitylabel_entity_update_action' => array(
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
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/moderate-unpublished-content';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Moderate Unpublished Content';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $export['moderate_unpublished_content'] = $view;

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
  $view->name = 'org_irsdata';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'org_irsdata';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'org_irsdata';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Irs eins: Ein */
  $handler->display->display_options['relationships']['ein']['id'] = 'ein';
  $handler->display->display_options['relationships']['ein']['table'] = 'irs_eins';
  $handler->display->display_options['relationships']['ein']['field'] = 'ein';
  $handler->display->display_options['relationships']['ein']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: EIN */
  $handler->display->display_options['fields']['field_ein']['id'] = 'field_ein';
  $handler->display->display_options['fields']['field_ein']['table'] = 'field_data_field_ein';
  $handler->display->display_options['fields']['field_ein']['field'] = 'field_ein';
  $handler->display->display_options['fields']['field_ein']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Irs eins: Accounting period */
  $handler->display->display_options['fields']['accounting_period']['id'] = 'accounting_period';
  $handler->display->display_options['fields']['accounting_period']['table'] = 'irs_eins';
  $handler->display->display_options['fields']['accounting_period']['field'] = 'accounting_period';
  $handler->display->display_options['fields']['accounting_period']['relationship'] = 'ein';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/org-irsdata';
  $export['org_irsdata'] = $view;

  $view = new view();
  $view->name = 'org_ntee_codes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Org NTEE codes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Org NTEE codes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: NTEE code */
  $handler->display->display_options['fields']['field_ntee_code']['id'] = 'field_ntee_code';
  $handler->display->display_options['fields']['field_ntee_code']['table'] = 'field_data_field_ntee_code';
  $handler->display->display_options['fields']['field_ntee_code']['field'] = 'field_ntee_code';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ntee' => 'ntee',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'org-ntee-codes';

  /* Display: hier */
  $handler = $view->new_display('page', 'hier', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'tid';
  $handler->display->display_options['style_options']['parent_field'] = 'tid_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'field_ntee_code' => 'field_ntee_code',
    'tid' => 'tid',
    'tid_1' => 'tid_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: NTEE code */
  $handler->display->display_options['fields']['field_ntee_code']['id'] = 'field_ntee_code';
  $handler->display->display_options['fields']['field_ntee_code']['table'] = 'field_data_field_ntee_code';
  $handler->display->display_options['fields']['field_ntee_code']['field'] = 'field_ntee_code';
  $handler->display->display_options['fields']['field_ntee_code']['label'] = '';
  $handler->display->display_options['fields']['field_ntee_code']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['prefix'] = '(';
  $handler->display->display_options['fields']['tid']['suffix'] = ')';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = 'parent Term ID';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'org-ntee-hier';
  $export['org_ntee_codes'] = $view;

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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Id';
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
  $handler->display->display_options['fields']['grants_funded']['label'] = 'Grants_funded';
  /* Field: Content: Grants received */
  $handler->display->display_options['fields']['grants_received']['id'] = 'grants_received';
  $handler->display->display_options['fields']['grants_received']['table'] = 'node';
  $handler->display->display_options['fields']['grants_received']['field'] = 'grants_received';
  $handler->display->display_options['fields']['grants_received']['label'] = 'Grants_received';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_org_address']['id'] = 'field_org_address';
  $handler->display->display_options['fields']['field_org_address']['table'] = 'field_data_field_org_address';
  $handler->display->display_options['fields']['field_org_address']['field'] = 'field_org_address';
  $handler->display->display_options['fields']['field_org_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_org_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: EIN */
  $handler->display->display_options['fields']['field_ein']['id'] = 'field_ein';
  $handler->display->display_options['fields']['field_ein']['table'] = 'field_data_field_ein';
  $handler->display->display_options['fields']['field_ein']['field'] = 'field_ein';
  $handler->display->display_options['fields']['field_ein']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: NTEE */
  $handler->display->display_options['fields']['field_ntee']['id'] = 'field_ntee';
  $handler->display->display_options['fields']['field_ntee']['table'] = 'field_data_field_ntee';
  $handler->display->display_options['fields']['field_ntee']['field'] = 'field_ntee';
  $handler->display->display_options['fields']['field_ntee']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_ntee']['settings'] = array(
    'display' => 'all',
    'link' => 1,
    'wrap' => 'none',
    'separator' => ' » ',
  );
  $handler->display->display_options['fields']['field_ntee']['delta_offset'] = '0';
  /* Field: Content: State corp id */
  $handler->display->display_options['fields']['field_state_corp_id']['id'] = 'field_state_corp_id';
  $handler->display->display_options['fields']['field_state_corp_id']['table'] = 'field_data_field_state_corp_id';
  $handler->display->display_options['fields']['field_state_corp_id']['field'] = 'field_state_corp_id';
  $handler->display->display_options['fields']['field_state_corp_id']['label'] = 'State_id';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description_mission';
  $handler->display->display_options['path'] = 'organizationscsv';

  /* Display: Data export for CSW-Detroit */
  $handler = $view->new_display('views_data_export', 'Data export for CSW-Detroit', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Org_id';
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
  $handler->display->display_options['fields']['grants_funded']['label'] = 'Grants_funded';
  /* Field: Content: Grants received */
  $handler->display->display_options['fields']['grants_received']['id'] = 'grants_received';
  $handler->display->display_options['fields']['grants_received']['table'] = 'node';
  $handler->display->display_options['fields']['grants_received']['field'] = 'grants_received';
  $handler->display->display_options['fields']['grants_received']['label'] = 'Grants_received';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_org_address']['id'] = 'field_org_address';
  $handler->display->display_options['fields']['field_org_address']['table'] = 'field_data_field_org_address';
  $handler->display->display_options['fields']['field_org_address']['field'] = 'field_org_address';
  $handler->display->display_options['fields']['field_org_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_org_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Public funder? */
  $handler->display->display_options['fields']['field_publicfunder']['id'] = 'field_publicfunder';
  $handler->display->display_options['fields']['field_publicfunder']['table'] = 'field_data_field_publicfunder';
  $handler->display->display_options['fields']['field_publicfunder']['field'] = 'field_publicfunder';
  $handler->display->display_options['fields']['field_publicfunder']['label'] = 'Public_funder';
  $handler->display->display_options['fields']['field_publicfunder']['type'] = 'list_key';
  /* Field: Content: EIN */
  $handler->display->display_options['fields']['field_ein']['id'] = 'field_ein';
  $handler->display->display_options['fields']['field_ein']['table'] = 'field_data_field_ein';
  $handler->display->display_options['fields']['field_ein']['field'] = 'field_ein';
  $handler->display->display_options['fields']['field_ein']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: State corp id */
  $handler->display->display_options['fields']['field_state_corp_id']['id'] = 'field_state_corp_id';
  $handler->display->display_options['fields']['field_state_corp_id']['table'] = 'field_data_field_state_corp_id';
  $handler->display->display_options['fields']['field_state_corp_id']['field'] = 'field_state_corp_id';
  $handler->display->display_options['fields']['field_state_corp_id']['label'] = 'State_id';
  /* Field: Content: NTEE */
  $handler->display->display_options['fields']['field_ntee']['id'] = 'field_ntee';
  $handler->display->display_options['fields']['field_ntee']['table'] = 'field_data_field_ntee';
  $handler->display->display_options['fields']['field_ntee']['field'] = 'field_ntee';
  $handler->display->display_options['fields']['field_ntee']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Major program areas */
  $handler->display->display_options['fields']['field_major_program_areas']['id'] = 'field_major_program_areas';
  $handler->display->display_options['fields']['field_major_program_areas']['table'] = 'field_data_field_major_program_areas';
  $handler->display->display_options['fields']['field_major_program_areas']['field'] = 'field_major_program_areas';
  $handler->display->display_options['fields']['field_major_program_areas']['label'] = 'Program_areas';
  /* Field: Content: CSW Location */
  $handler->display->display_options['fields']['field_csw_location']['id'] = 'field_csw_location';
  $handler->display->display_options['fields']['field_csw_location']['table'] = 'field_data_field_csw_location';
  $handler->display->display_options['fields']['field_csw_location']['field'] = 'field_csw_location';
  $handler->display->display_options['fields']['field_csw_location']['label'] = 'CSW_location';
  $handler->display->display_options['fields']['field_csw_location']['delta_offset'] = '0';
  /* Field: Content: CSW Services */
  $handler->display->display_options['fields']['field_csw_services']['id'] = 'field_csw_services';
  $handler->display->display_options['fields']['field_csw_services']['table'] = 'field_data_field_csw_services';
  $handler->display->display_options['fields']['field_csw_services']['field'] = 'field_csw_services';
  $handler->display->display_options['fields']['field_csw_services']['label'] = 'CSW_services';
  $handler->display->display_options['fields']['field_csw_services']['delta_offset'] = '0';
  /* Field: Content: CSW Population */
  $handler->display->display_options['fields']['field_csw_population']['id'] = 'field_csw_population';
  $handler->display->display_options['fields']['field_csw_population']['table'] = 'field_data_field_csw_population';
  $handler->display->display_options['fields']['field_csw_population']['field'] = 'field_csw_population';
  $handler->display->display_options['fields']['field_csw_population']['label'] = 'CSW_population';
  $handler->display->display_options['fields']['field_csw_population']['delta_offset'] = '0';
  /* Field: Content: CSW Type */
  $handler->display->display_options['fields']['field_csw_type']['id'] = 'field_csw_type';
  $handler->display->display_options['fields']['field_csw_type']['table'] = 'field_data_field_csw_type';
  $handler->display->display_options['fields']['field_csw_type']['field'] = 'field_csw_type';
  $handler->display->display_options['fields']['field_csw_type']['label'] = 'CSW_type';
  $handler->display->display_options['fields']['field_csw_type']['delta_offset'] = '0';
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
  /* Filter criterion: Content: Client project (field_client_project) */
  $handler->display->display_options['filters']['field_client_project_tid']['id'] = 'field_client_project_tid';
  $handler->display->display_options['filters']['field_client_project_tid']['table'] = 'field_data_field_client_project';
  $handler->display->display_options['filters']['field_client_project_tid']['field'] = 'field_client_project_tid';
  $handler->display->display_options['filters']['field_client_project_tid']['value'] = array(
    1390 => '1390',
  );
  $handler->display->display_options['filters']['field_client_project_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_client_project_tid']['vocabulary'] = 'client_projects';
  $handler->display->display_options['path'] = 'organizationscsv/csw-detroit';
  $export['orgs'] = $view;

  return $export;
}
