<?php
/**
 * @file
 * amani_about.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_about_user_default_permissions() {
  $permissions = array();

  // Exported permission: create about content.
  $permissions['create about content'] = array(
    'name' => 'create about content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any about content.
  $permissions['delete any about content'] = array(
    'name' => 'delete any about content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own about content.
  $permissions['delete own about content'] = array(
    'name' => 'delete own about content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any about content.
  $permissions['edit any about content'] = array(
    'name' => 'edit any about content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own about content.
  $permissions['edit own about content'] = array(
    'name' => 'edit own about content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
