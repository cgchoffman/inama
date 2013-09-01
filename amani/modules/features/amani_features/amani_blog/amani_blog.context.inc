<?php
/**
 * @file
 * amani_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog-content-type';
  $context->description = 'When viewing a blog entry, show contextual information.';
  $context->tag = 'Content types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'blog',
    'menu' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  t('When viewing a blog entry, show contextual information.');
  $export['blog-content-type'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_page';
  $context->description = '';
  $context->tag = 'blog';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-social_media_feeds' => array(
          'module' => 'quicktabs',
          'delta' => 'social_media_feeds',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  $export['blog_page'] = $context;

  return $export;
}
