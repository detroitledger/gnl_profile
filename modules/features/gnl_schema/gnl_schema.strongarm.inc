<?php
/**
 * @file
 * gnl_schema.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gnl_schema_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_grant';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_grant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_org';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_org'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_grant';
  $strongarm->value = '1';
  $export['node_preview_grant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_org';
  $strongarm->value = '1';
  $export['node_preview_org'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_grant';
  $strongarm->value = 0;
  $export['node_submitted_grant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_org';
  $strongarm->value = 1;
  $export['node_submitted_org'] = $strongarm;

  return $export;
}
