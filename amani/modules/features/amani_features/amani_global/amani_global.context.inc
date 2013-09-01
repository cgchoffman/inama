<?php
/**
 * @file
 * amani_global.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amani_global_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_admin';
  $context->description = '';
  $context->tag = 'admin';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'amani/content-admin' => 'amani/content-admin',
        'user/*/my-content' => 'user/*/my-content',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'amani_global-add_content_links' => array(
          'module' => 'amani_global',
          'delta' => 'add_content_links',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('admin');
  $export['content_admin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer';
  $context->description = 'sitewide footer blocks';
  $context->tag = 'global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-amani-powered-by' => array(
          'module' => 'bean',
          'delta' => 'amani-powered-by',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu-menu-amani-main-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-amani-main-menu',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'menu-menu-meta' => array(
          'module' => 'menu',
          'delta' => 'menu-meta',
          'region' => 'footer',
          'weight' => '-7',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'footer',
          'weight' => '-6',
        ),
        'bean-amani-special-thanks' => array(
          'module' => 'bean',
          'delta' => 'amani-special-thanks',
          'region' => 'footer',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  t('sitewide footer blocks');
  $export['footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = 'front page ';
  $context->tag = 'front';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-front_page_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'front_page_slideshow-block',
          'region' => 'home_content_top_rotator',
          'weight' => '-10',
        ),
        'views-front_page_blocks-block' => array(
          'module' => 'views',
          'delta' => 'front_page_blocks-block',
          'region' => 'home_content_top_static_region',
          'weight' => '-10',
        ),
        'views-front_page_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_blocks-block_1',
          'region' => 'home_content_top_static_region',
          'weight' => '-9',
        ),
        'views-front_page_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'front_page_blocks-block_2',
          'region' => 'home_content_top_static_region',
          'weight' => '-8',
        ),
        'views-news_and_events-block_1' => array(
          'module' => 'views',
          'delta' => 'news_and_events-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'bean-front-page-second-sidebar-bottom' => array(
          'module' => 'bean',
          'delta' => 'front-page-second-sidebar-bottom',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'quicktabs-social_media_feeds' => array(
          'module' => 'quicktabs',
          'delta' => 'social_media_feeds',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('front');
  t('front page ');
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header';
  $context->description = 'sitewide header blocks';
  $context->tag = 'global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header',
          'weight' => '-37',
        ),
        'menu-menu-meta' => array(
          'module' => 'menu',
          'delta' => 'menu-meta',
          'region' => 'header',
          'weight' => '-36',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-35',
        ),
        'menu-menu-social-media' => array(
          'module' => 'menu',
          'delta' => 'menu-social-media',
          'region' => 'header',
          'weight' => '-34',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-33',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  t('sitewide header blocks');
  $export['header'] = $context;

  return $export;
}
