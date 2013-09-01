<?php
/**
 * @file
 * amani_block_and_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_block_and_views_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_block_and_views_views_api() {
  return array("version" => "3.0");
}
