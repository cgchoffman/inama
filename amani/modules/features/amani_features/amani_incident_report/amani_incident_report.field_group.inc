<?php
/**
 * @file
 * amani_incident_report.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function amani_incident_report_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|incident_report|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'incident_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_incident_location',
      1 => 'group_incident_main',
      2 => 'group_incident_media',
      3 => 'group_incident_submitter',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'label' => 'Content Group',
      'instance_settings' => array(
        'classes' => '',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $export['group_content|node|incident_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_incident_location|node|incident_report|form';
  $field_group->group_name = 'group_incident_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'incident_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(
      0 => 'field_incident_address',
      1 => 'field_incident_geolocation',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_incident_location|node|incident_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_incident_main|node|incident_report|form';
  $field_group->group_name = 'group_incident_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'incident_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Incident',
    'weight' => '1',
    'children' => array(
      0 => 'field_description',
      1 => 'field_incident_date',
      2 => 'field_incident_report_type',
      3 => 'field_incident_severity',
      4 => 'title',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Incident',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_incident_main|node|incident_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_incident_media|node|incident_report|form';
  $field_group->group_name = 'group_incident_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'incident_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '2',
    'children' => array(
      0 => 'field_links',
      1 => 'field_incident_media',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_incident_media|node|incident_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_incident_submitter|node|incident_report|form';
  $field_group->group_name = 'group_incident_submitter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'incident_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Submitter',
    'weight' => '4',
    'children' => array(
      0 => 'field_email',
      1 => 'field_name',
      2 => 'field_phone',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_incident_submitter|node|incident_report|form'] = $field_group;

  return $export;
}
