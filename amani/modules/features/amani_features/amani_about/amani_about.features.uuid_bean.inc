<?php
/**
 * @file
 * amani_about.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function amani_about_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Donate',
    'description' => NULL,
    'title' => '',
    'type' => 'static_content',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'donate',
    'view_mode' => 'default',
    'created' => '1374819466',
    'log' => '',
    'uid' => '22',
    'default_revision' => '1',
    'revisions' => array(),
    'uuid' => '82e67cd3-daf1-48b3-b352-eab33699f5b3',
    'field_bean_body' => array(
      'und' => array(
        0 => array(
          'value' => '<a href="#"><?php echo t("Donate"); ?></a>',
          'format' => 'php_code',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $beans[] = array(
    'label' => 'Become a Pilot Project',
    'description' => NULL,
    'title' => '',
    'type' => 'static_content',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'become-a-pilot-project',
    'view_mode' => 'default',
    'created' => '1374819541',
    'log' => '',
    'uid' => '22',
    'default_revision' => '1',
    'revisions' => array(),
    'uuid' => 'e20f355f-afc3-4ece-a87b-65372e44faf1',
    'field_bean_body' => array(
      'und' => array(
        0 => array(
          'value' => '<a href="#">become a <span>pilot project</span></a>',
          'format' => 'php_code',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $beans;
}
