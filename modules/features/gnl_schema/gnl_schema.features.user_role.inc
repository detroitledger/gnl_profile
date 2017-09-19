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

  // Exported role: CSW-Detroit.
  $roles['CSW-Detroit'] = array(
    'name' => 'CSW-Detroit',
    'weight' => 4,
  );

  // Exported role: CSW-Detroit-edit.
  $roles['CSW-Detroit-edit'] = array(
    'name' => 'CSW-Detroit-edit',
    'weight' => 5,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: grantentry.
  $roles['grantentry'] = array(
    'name' => 'grantentry',
    'weight' => 6,
  );

  return $roles;
}
