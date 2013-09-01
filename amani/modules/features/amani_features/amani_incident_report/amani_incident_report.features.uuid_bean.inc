<?php
/**
 * @file
 * amani_incident_report.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function amani_incident_report_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Amani: Add Map Record',
    'description' => NULL,
    'title' => '',
    'type' => 'static_content',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'amani-add-map-record',
    'view_mode' => 'default',
    'created' => '1374820482',
    'log' => '',
    'uid' => '22',
    'default_revision' => '1',
    'revisions' => array(),
    'uuid' => 'f2b3f616-05ba-41f2-b726-b095f7d8da04',
    'field_bean_body' => array(
      'und' => array(
        0 => array(
          'value' => '<?php echo l(t(\'Add record\'), \'node/add/incident-report\', array(\'attributes\' => array(\'class\' => \'button\'))); ?>',
          'format' => 'php_code',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $beans;
}
