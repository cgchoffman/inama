<?php
/**
 * @file
 * amani_get_involved.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_get_involved_user_default_permissions() {
  $permissions = array();

  // Exported permission: create get_involved content.
  $permissions['create get_involved content'] = array(
    'name' => 'create get_involved content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any get_involved content.
  $permissions['delete any get_involved content'] = array(
    'name' => 'delete any get_involved content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own get_involved content.
  $permissions['delete own get_involved content'] = array(
    'name' => 'delete own get_involved content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any get_involved content.
  $permissions['edit any get_involved content'] = array(
    'name' => 'edit any get_involved content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own get_involved content.
  $permissions['edit own get_involved content'] = array(
    'name' => 'edit own get_involved content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
