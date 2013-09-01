<?php
/**
 * @file
 * amani_incident_report.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_incident_report_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_incident_report_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amani_incident_report_node_info() {
  $items = array(
    'incident_report' => array(
      'name' => t('Map Record'),
      'base' => 'node_content',
      'description' => t('An incident including the time and date, pictures, videos, notes and the location for placing on a map.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
