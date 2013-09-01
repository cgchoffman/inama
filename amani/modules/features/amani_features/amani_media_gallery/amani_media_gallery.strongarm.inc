<?php
/**
 * @file
 * amani_media_gallery.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function amani_media_gallery_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_media_gallery_pattern';
  $strongarm->value = '[node:media_gallery_collection]/[node:title]';
  $export['pathauto_node_media_gallery_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_gallery_collections_pattern';
  $strongarm->value = '[term:name]';
  $export['pathauto_taxonomy_term_gallery_collections_pattern'] = $strongarm;

  return $export;
}
