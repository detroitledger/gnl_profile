<?php

/**
 * @file
 * This file tells the views module about gnl_fields pseudofields.
 */

/**
 * Implements hook_views_data().
 */
function gnl_fields_views_data() {
  $data = array();

  $data['node']['grants_funded'] = array(
    'title' => t('Grants funded'),
    'help' => t('Grants funded by an organization'),
    'field' => array(
      'handler' => 'gnl_fields_handler_field_grants_funded',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
      'name_field' => 'title',
      'string' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      'help' => t('Filter results by amount funded.'),
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['node']['grants_received'] = array(
    'title' => t('Grants received'),
    'help' => t('Grants received by an organization'),
    'field' => array(
      'handler' => 'gnl_fields_handler_field_grants_received',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
      'name_field' => 'title',
      'string' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      'help' => t('Filter results by amount received.'),
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['node']['grants_datestart'] = array(
    'title' => t('Data from'),
    'help' => t('Data includes grants since this year'),
    'field' => array(
      'handler' => 'gnl_fields_handler_field_grants_datestart',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
      'name_field' => 'title',
      'string' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      'help' => t('Filter results by amount datestart.'),
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}
