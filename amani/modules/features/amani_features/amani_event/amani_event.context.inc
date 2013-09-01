<?php
/**
 * @file
 * amani_event.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_event_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event-content-type';
  $context->description = 'When viewing an event, display upcoming event block.';
  $context->tag = 'Content types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'news-and-events',
    'menu' => 'news-and-events',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  t('When viewing an event, display upcoming event block.');
  $export['event-content-type'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_pages';
  $context->description = '';
  $context->tag = 'events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-calendar_of_events-list' => array(
          'module' => 'views',
          'delta' => 'calendar_of_events-list',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-calendar_of_events-calendar' => array(
          'module' => 'views',
          'delta' => 'calendar_of_events-calendar',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('events');
  $export['event_pages'] = $context;

  return $export;
}
