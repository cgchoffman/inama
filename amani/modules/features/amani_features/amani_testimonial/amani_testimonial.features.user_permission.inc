<?php
/**
 * @file
 * amani_testimonial.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_testimonial_user_default_permissions() {
  $permissions = array();

  // Exported permission: create testimonial content.
  $permissions['create testimonial content'] = array(
    'name' => 'create testimonial content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any testimonial content.
  $permissions['delete any testimonial content'] = array(
    'name' => 'delete any testimonial content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own testimonial content.
  $permissions['delete own testimonial content'] = array(
    'name' => 'delete own testimonial content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any testimonial content.
  $permissions['edit any testimonial content'] = array(
    'name' => 'edit any testimonial content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own testimonial content.
  $permissions['edit own testimonial content'] = array(
    'name' => 'edit own testimonial content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
