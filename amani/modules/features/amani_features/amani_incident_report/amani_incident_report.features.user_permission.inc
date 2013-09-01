<?php
/**
 * @file
 * amani_incident_report.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_incident_report_user_default_permissions() {
  $permissions = array();

  // Exported permission: create incident_report content.
  $permissions['create incident_report content'] = array(
    'name' => 'create incident_report content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any incident_report content.
  $permissions['delete any incident_report content'] = array(
    'name' => 'delete any incident_report content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own incident_report content.
  $permissions['delete own incident_report content'] = array(
    'name' => 'delete own incident_report content',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any incident_report content.
  $permissions['edit any incident_report content'] = array(
    'name' => 'edit any incident_report content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own incident_report content.
  $permissions['edit own incident_report content'] = array(
    'name' => 'edit own incident_report content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
