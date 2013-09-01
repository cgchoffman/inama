<?php
/**
 * @file
 * amani_resource.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_resource_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource-content-type';
  $context->description = 'When viewing a resource, show contextual information.';
  $context->tag = 'Content types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'resources',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  t('When viewing a resource, show contextual information.');
  $export['resource-content-type'] = $context;

  return $export;
}
