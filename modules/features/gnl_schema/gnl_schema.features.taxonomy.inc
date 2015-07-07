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
    'grant_tags' => array(
      'name' => 'Grant tags',
      'machine_name' => 'grant_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'grant_types' => array(
      'name' => 'NTEE Grant types',
      'machine_name' => 'grant_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ntee' => array(
      'name' => 'NTEE (nonprofit type)',
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
