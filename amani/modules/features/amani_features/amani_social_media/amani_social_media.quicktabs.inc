<?php
/**
 * @file
 * amani_social_media.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function amani_social_media_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'social_media_feeds';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Social Media Feeds';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_tweets-block_1',
      'hide_title' => 1,
      'title' => 'twitter',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'fb_likebox_delta_0',
      'hide_title' => 1,
      'title' => 'facebook',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Social Media Feeds');
  t('facebook');
  t('twitter');

  $export['social_media_feeds'] = $quicktabs;

  return $export;
}
