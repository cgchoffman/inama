<?php
/**
 * @file
 * amani_global.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function amani_global_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-amani-main-menu.
  $menus['menu-amani-main-menu'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'title' => 'Amani main menu',
    'description' => 'The main menu for Amani - displayed in the header and the footer',
  );
  // Exported menu: menu-meta.
  $menus['menu-meta'] = array(
    'menu_name' => 'menu-meta',
    'title' => 'meta',
    'description' => 'The three item menu that appears in the header as well as the footer',
  );
  // Exported menu: menu-social-media.
  $menus['menu-social-media'] = array(
    'menu_name' => 'menu-social-media',
    'title' => 'Social media',
    'description' => 'Social media widgets for the header',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Amani main menu');
  t('Social media');
  t('Social media widgets for the header');
  t('The main menu for Amani - displayed in the header and the footer');
  t('The three item menu that appears in the header as well as the footer');
  t('meta');


  return $menus;
}
