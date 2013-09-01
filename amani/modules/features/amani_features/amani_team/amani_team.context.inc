<?php
/**
 * @file
 * amani_team.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_team_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'team-content-type';
  $context->description = 'When viewing a team page, show contextual information.';
  $context->tag = 'Content types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'team' => 'team',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'team',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  t('When viewing a team page, show contextual information.');
  $export['team-content-type'] = $context;

  return $export;
}
