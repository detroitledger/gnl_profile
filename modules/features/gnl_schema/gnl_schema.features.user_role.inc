<?php
/**
 * @file
 * gnl_schema.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gnl_schema_user_default_roles() {
  $roles = array();

  // Exported role: grantentry.
  $roles['grantentry'] = array(
    'name' => 'grantentry',
    'weight' => 6,
  );

  return $roles;
}
