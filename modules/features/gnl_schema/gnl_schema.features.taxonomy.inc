<?php
/**
 * @file
 * gnl_schema.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gnl_schema_taxonomy_default_vocabularies() {
  return array(
    'grant_types' => array(
      'name' => 'Grant types',
      'machine_name' => 'grant_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
