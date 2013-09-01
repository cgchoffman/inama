<?php
/**
 * @file
 * amani_get_involved.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_get_involved_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'get_involved';
  $context->description = 'Blocks for get-involved page';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'get_involved:page' => 'get_involved:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-get_involved-block_1' => array(
          'module' => 'views',
          'delta' => 'get_involved-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for get-involved page');
  $export['get_involved'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'programs';
  $context->description = 'programs listing page';
  $context->tag = 'programs';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'programs_campaigns:page' => 'programs_campaigns:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-get_involved-block_2' => array(
          'module' => 'views',
          'delta' => 'get_involved-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('programs');
  t('programs listing page');
  $export['programs'] = $context;

  return $export;
}
