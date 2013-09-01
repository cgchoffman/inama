<?php
/**
 * @file
 * amani_team.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_team_user_default_permissions() {
  $permissions = array();

  // Exported permission: create team content.
  $permissions['create team content'] = array(
    'name' => 'create team content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any team content.
  $permissions['delete any team content'] = array(
    'name' => 'delete any team content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own team content.
  $permissions['delete own team content'] = array(
    'name' => 'delete own team content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any team content.
  $permissions['edit any team content'] = array(
    'name' => 'edit any team content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own team content.
  $permissions['edit own team content'] = array(
    'name' => 'edit own team content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
