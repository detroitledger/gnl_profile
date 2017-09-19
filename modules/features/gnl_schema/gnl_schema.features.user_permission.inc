<?php
/**
 * @file
 * gnl_schema.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gnl_schema_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create board_term content'.
  $permissions['create board_term content'] = array(
    'name' => 'create board_term content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create grant content'.
  $permissions['create grant content'] = array(
    'name' => 'create grant content',
    'roles' => array(
      'administrator' => 'administrator',
      'grantentry' => 'grantentry',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create org content'.
  $permissions['create org content'] = array(
    'name' => 'create org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any board_term content'.
  $permissions['delete any board_term content'] = array(
    'name' => 'delete any board_term content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any grant content'.
  $permissions['delete any grant content'] = array(
    'name' => 'delete any grant content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any org content'.
  $permissions['delete any org content'] = array(
    'name' => 'delete any org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any person content'.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own board_term content'.
  $permissions['delete own board_term content'] = array(
    'name' => 'delete own board_term content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own grant content'.
  $permissions['delete own grant content'] = array(
    'name' => 'delete own grant content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own org content'.
  $permissions['delete own org content'] = array(
    'name' => 'delete own org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own person content'.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any board_term content'.
  $permissions['edit any board_term content'] = array(
    'name' => 'edit any board_term content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any grant content'.
  $permissions['edit any grant content'] = array(
    'name' => 'edit any grant content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any org content'.
  $permissions['edit any org content'] = array(
    'name' => 'edit any org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own board_term content'.
  $permissions['edit own board_term content'] = array(
    'name' => 'edit own board_term content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own grant content'.
  $permissions['edit own grant content'] = array(
    'name' => 'edit own grant content',
    'roles' => array(
      'administrator' => 'administrator',
      'grantentry' => 'grantentry',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own org content'.
  $permissions['edit own org content'] = array(
    'name' => 'edit own org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'user pdf create'.
  $permissions['user pdf create'] = array(
    'name' => 'user pdf create',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gnl_dash',
  );

  // Exported permission: 'user pdf delete any user pdf'.
  $permissions['user pdf delete any user pdf'] = array(
    'name' => 'user pdf delete any user pdf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gnl_dash',
  );

  // Exported permission: 'user pdf delete own user pdfs'.
  $permissions['user pdf delete own user pdfs'] = array(
    'name' => 'user pdf delete own user pdfs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gnl_dash',
  );

  // Exported permission: 'user pdf edit any user pdf'.
  $permissions['user pdf edit any user pdf'] = array(
    'name' => 'user pdf edit any user pdf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gnl_dash',
  );

  // Exported permission: 'user pdf edit own user pdfs'.
  $permissions['user pdf edit own user pdfs'] = array(
    'name' => 'user pdf edit own user pdfs',
    'roles' => array(
      'administrator' => 'administrator',
      'grantentry' => 'grantentry',
    ),
    'module' => 'gnl_dash',
  );

  // Exported permission: 'user pdf view any user pdf'.
  $permissions['user pdf view any user pdf'] = array(
    'name' => 'user pdf view any user pdf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gnl_dash',
  );

  // Exported permission: 'user pdf view own user pdfs'.
  $permissions['user pdf view own user pdfs'] = array(
    'name' => 'user pdf view own user pdfs',
    'roles' => array(
      'administrator' => 'administrator',
      'grantentry' => 'grantentry',
    ),
    'module' => 'gnl_dash',
  );

  return $permissions;
}
