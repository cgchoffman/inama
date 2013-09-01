<?php
/**
 * @file
 * amani_front_page.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function amani_front_page_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Front page second sidebar bottom',
    'description' => NULL,
    'title' => '',
    'type' => 'static_content',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'front-page-second-sidebar-bottom',
    'view_mode' => 'default',
    'created' => '1374820014',
    'log' => '',
    'uid' => '22',
    'default_revision' => '1',
    'revisions' => array(),
    'uuid' => 'df136016-8ba9-42c2-aaad-a9ed1eb57b86',
    'field_bean_body' => array(
      'und' => array(
        0 => array(
          'value' => '<?php echo l(t(\'Newsletter\'), \'http://peacegeeks.us2.list-manage.com/subscribe?u=951e6313af8a044ad05fdc097&id=638c8b529c&orig-lang=1\', array(\'attributes\' => array(\'class\' => \'button\', \'target\' => \'_blank\'))); ?>',
          'format' => 'php_code',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $beans;
}
