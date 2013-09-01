<?php
/**
 * @file
 * amani_about.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_about_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-page';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-about_page-block_1' => array(
          'module' => 'views',
          'delta' => 'about_page-block_1',
          'region' => 'home_content_top_rotator',
          'weight' => '-10',
        ),
        'bean-donate' => array(
          'module' => 'bean',
          'delta' => 'donate',
          'region' => 'home_content_top_callout_right',
          'weight' => '-8',
        ),
        'bean-become-a-pilot-project' => array(
          'module' => 'bean',
          'delta' => 'become-a-pilot-project',
          'region' => 'home_content_top_callout_right',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['about-page'] = $context;

  return $export;
}
