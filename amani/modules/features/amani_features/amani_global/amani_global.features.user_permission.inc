<?php
/**
 * @file
 * amani_global.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_global_user_default_permissions() {
  $permissions = array();

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'contact',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'blogger',
      4 => 'contributor',
      5 => 'crm manager',
      6 => 'crm viewer',
      7 => 'editor',
      8 => 'member',
    ),
    'module' => 'search',
  );

  // Exported permission: view any static_content bean.
  $permissions['view any static_content bean'] = array(
    'name' => 'view any static_content bean',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
