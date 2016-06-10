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
    'client_projects' => array(
      'name' => 'Client projects',
      'machine_name' => 'client_projects',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'csw_detroit_location' => array(
      'name' => 'CSW-Detroit Location',
      'machine_name' => 'csw_detroit_location',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'csw_detroit_population' => array(
      'name' => 'CSW-Detroit Population',
      'machine_name' => 'csw_detroit_population',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'csw_detroit_services' => array(
      'name' => 'CSW-Detroit Services',
      'machine_name' => 'csw_detroit_services',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'csw_detroit_type' => array(
      'name' => 'CSW-Detroit Type',
      'machine_name' => 'csw_detroit_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
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
    'regions' => array(
      'name' => 'Regions',
      'machine_name' => 'regions',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
