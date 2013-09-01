<?php
/**
 * @file
 * amani_blog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function amani_blog_user_default_roles() {
  $roles = array();

  // Exported role: blogger.
  $roles['blogger'] = array(
    'name' => 'blogger',
    'weight' => '5',
  );

  return $roles;
}
