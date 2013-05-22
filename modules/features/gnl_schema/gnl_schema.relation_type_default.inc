<?php
/**
 * @file
 * gnl_schema.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function gnl_schema_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'funds';
  $relation_type->label = 'funded';
  $relation_type->reverse_label = 'was funded by';
  $relation_type->directional = 1;
  $relation_type->transitive = 1;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:org',
  );
  $relation_type->target_bundles = array(
    0 => 'node:org',
  );
  $export['funds'] = $relation_type;

  return $export;
}
