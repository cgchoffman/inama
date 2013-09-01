<?php
/**
 * @file
 * amani_media_gallery.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_media_gallery_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gallery-content-type';
  $context->description = 'When viewing a gallery, show contextual information.';
  $context->tag = 'Content types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'media_gallery' => 'media_gallery',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'gallery',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  t('When viewing a gallery, show contextual information.');
  $export['gallery-content-type'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gallery_page';
  $context->description = '';
  $context->tag = 'gallery';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'gallery' => 'gallery',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'about',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('gallery');
  $export['gallery_page'] = $context;

  return $export;
}
