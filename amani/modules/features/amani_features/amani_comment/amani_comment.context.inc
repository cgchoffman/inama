<?php
/**
 * @file
 * amani_comment.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_comment_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'comment-login';
  $context->description = 'Login blocks.';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Login blocks.');
  $export['comment-login'] = $context;

  return $export;
}
