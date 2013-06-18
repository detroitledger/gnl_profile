<?php
/**
 * @file
 * gnl_schema.features.inc
 */

/**
 * Implements hook_views_api().
 */
function gnl_schema_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gnl_schema_node_info() {
  $items = array(
    'grant' => array(
      'name' => t('Grant'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'org' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
