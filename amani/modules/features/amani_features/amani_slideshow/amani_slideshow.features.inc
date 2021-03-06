<?php
/**
 * @file
 * amani_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amani_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amani_slideshow_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function amani_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: front_page_slideshow.
  $styles['front_page_slideshow'] = array(
    'name' => 'front_page_slideshow',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '1000',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
      2 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '1000',
          'height' => '500',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function amani_slideshow_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow slide'),
      'base' => 'node_content',
      'description' => t('An image and link for the front page rotating slideshow'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
