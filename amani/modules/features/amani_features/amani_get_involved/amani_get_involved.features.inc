<?php
/**
 * @file
 * amani_get_involved.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_get_involved_ctools_plugin_api() {
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
function amani_get_involved_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_get_involved_node_info() {
  $items = array(
    'get_involved' => array(
      'name' => t('Get involved'),
      'base' => 'node_content',
      'description' => t('An action item to show in Get Involved sections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
