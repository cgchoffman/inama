<?php
/**
 * @file
 * amani_incident_report.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amani_incident_report_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'incident_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Incident reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest incidents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date of incident */
  $handler->display->display_options['fields']['field_incident_date']['id'] = 'field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['table'] = 'field_data_field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['field'] = 'field_incident_date';
  $handler->display->display_options['fields']['field_incident_date']['label'] = '';
  $handler->display->display_options['fields']['field_incident_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incident_date']['settings'] = array(
    'format_type' => 'event_day',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_incident_address']['id'] = 'field_incident_address';
  $handler->display->display_options['fields']['field_incident_address']['table'] = 'field_data_field_incident_address';
  $handler->display->display_options['fields']['field_incident_address']['field'] = 'field_incident_address';
  $handler->display->display_options['fields']['field_incident_address']['label'] = '';
  $handler->display->display_options['fields']['field_incident_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incident_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_incident_address']['type'] = 'amani_address_city';
  $handler->display->display_options['fields']['field_incident_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'incident_report' => 'incident_report',
  );

  /* Display: Latest incidents */
  $handler = $view->new_display('block', 'Latest incidents', 'latest');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['incident_reports'] = array(
    t('Master'),
    t('Latest incidents'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
  );
  $export['incident_reports'] = $view;

  return $export;
}
