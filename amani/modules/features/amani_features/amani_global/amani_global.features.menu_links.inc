<?php
/**
 * @file
 * amani_global.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function amani_global_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-amani-main-menu:about
  $menu_links['menu-amani-main-menu:about'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-amani-main-menu:blog
  $menu_links['menu-amani-main-menu:blog'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'news-and-events',
  );
  // Exported menu link: menu-amani-main-menu:contact
  $menu_links['menu-amani-main-menu:contact'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-amani-main-menu:gallery
  $menu_links['menu-amani-main-menu:gallery'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Image Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'about',
  );
  // Exported menu link: menu-amani-main-menu:get-involved
  $menu_links['menu-amani-main-menu:get-involved'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'get-involved',
    'router_path' => 'get-involved',
    'link_title' => 'Get Involved',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-amani-main-menu:incident-reports
  $menu_links['menu-amani-main-menu:incident-reports'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'incident-reports',
    'router_path' => 'incident-reports',
    'link_title' => 'Map',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'resources',
  );
  // Exported menu link: menu-amani-main-menu:news-and-events
  $menu_links['menu-amani-main-menu:news-and-events'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'news-and-events',
    'router_path' => 'news-and-events',
    'link_title' => 'News & Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-amani-main-menu:programs
  $menu_links['menu-amani-main-menu:programs'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'programs',
    'router_path' => 'programs',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-amani-main-menu:resources
  $menu_links['menu-amani-main-menu:resources'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-amani-main-menu:team
  $menu_links['menu-amani-main-menu:team'] = array(
    'menu_name' => 'menu-amani-main-menu',
    'link_path' => 'team',
    'router_path' => 'team',
    'link_title' => 'Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'about',
  );
  // Exported menu link: menu-meta:<front>
  $menu_links['menu-meta:<front>'] = array(
    'menu_name' => 'menu-meta',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
  );
  // Exported menu link: menu-meta:amani/content-admin
  $menu_links['menu-meta:amani/content-admin'] = array(
    'menu_name' => 'menu-meta',
    'link_path' => 'amani/content-admin',
    'router_path' => 'amani/content-admin',
    'link_title' => 'admin',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-meta:user/login
  $menu_links['menu-meta:user/login'] = array(
    'menu_name' => 'menu-meta',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'login ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
  );
  // Exported menu link: menu-meta:user/logout
  $menu_links['menu-meta:user/logout'] = array(
    'menu_name' => 'menu-meta',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
  );
  // Exported menu link: menu-social-media:http://facebook.com
  $menu_links['menu-social-media:http://facebook.com'] = array(
    'menu_name' => 'menu-social-media',
    'link_path' => 'http://facebook.com',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-social-media:http://twitter.com
  $menu_links['menu-social-media:http://twitter.com'] = array(
    'menu_name' => 'menu-social-media',
    'link_path' => 'http://twitter.com',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-social-media:http://www.google.com/peacegeeks
  $menu_links['menu-social-media:http://www.google.com/peacegeeks'] = array(
    'menu_name' => 'menu-social-media',
    'link_path' => 'http://www.google.com/peacegeeks',
    'router_path' => '',
    'link_title' => 'Google+',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-social-media:http://www.linkedin.com/peacegeeks
  $menu_links['menu-social-media:http://www.linkedin.com/peacegeeks'] = array(
    'menu_name' => 'menu-social-media',
    'link_path' => 'http://www.linkedin.com/peacegeeks',
    'router_path' => '',
    'link_title' => 'LinkedIn',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-social-media:http://www.youtube.com/peacegeeks
  $menu_links['menu-social-media:http://www.youtube.com/peacegeeks'] = array(
    'menu_name' => 'menu-social-media',
    'link_path' => 'http://www.youtube.com/peacegeeks',
    'router_path' => '',
    'link_title' => 'YouTube',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Blog');
  t('Contact');
  t('Facebook');
  t('Get Involved');
  t('Google+');
  t('Image Gallery');
  t('LinkedIn');
  t('Map');
  t('News & Events');
  t('Projects');
  t('Resources');
  t('Team');
  t('Twitter');
  t('YouTube');
  t('admin');
  t('home');
  t('login ');
  t('logout');


  return $menu_links;
}
