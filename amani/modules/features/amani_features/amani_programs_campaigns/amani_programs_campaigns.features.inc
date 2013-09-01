<?php
/**
 * @file
 * amani_programs_campaigns.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_programs_campaigns_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_programs_campaigns_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_programs_campaigns_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Program/Campaign'),
      'base' => 'node_content',
      'description' => t('A program or campaign by your organization'),
      'has_title' => '1',
      'title_label' => t('Program Title'),
      'help' => '',
    ),
  );
  return $items;
}
