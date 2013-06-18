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
    'ntee' => array(
      'name' => 'Nonprofit type',
      'machine_name' => 'ntee',
      'description' => 'National Taxonomy for Exempt Entities',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'org_tags' => array(
      'name' => 'Organization tags',
      'machine_name' => 'org_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
