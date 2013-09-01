<?php
/**
 * @file
 * amani_global.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function amani_global_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'static_content';
  $bean_type->label = 'Static Content';
  $bean_type->options = '';
  $bean_type->description = 'A basic block in bean form.';
  $export['static_content'] = $bean_type;

  return $export;
}
