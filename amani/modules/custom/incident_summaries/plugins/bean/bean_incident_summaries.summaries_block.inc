<?php
/**
 * @file
 * Tweet block bean plugin.
 */
class IncidentSummariesBean extends BeanPlugin {

	/*
	 * Default values for our block
	 */
	public function values() {
		$values = array (
			'settings' => array (
				'month' => '',
        'incident_label' => '',
				'options' => '',
				'all' => array('checked' => TRUE),
        'incident_report_type' => '',
				'incident_severity' => '',
			),
		);
		return array_merge(parent::values(), $values);
	}

	 /* Builds extra settings for the block edit form.
	  *
	  */
	public function form($bean, $form, &$form_state) {
		$form = array();
		$vocabulary_options = array();
		$vocabulary_names = array();
		$vocabulary_objects = array();
		$taxonomy_terms = array();
		$taxonomy_terms_names = array();
		$field = incident_map_get_field_info('node', 'incident_report', array('taxonomy_term_reference'));

		foreach($field as $key => $value){
			$vocabulary_options[$field[$key]['label']] = $field[$key]['label'];
			$vocabulary_names[$key] = $field[$key]['settings']['allowed_values']['0']['vocabulary'];
		}
		foreach($vocabulary_names as $value) {
			$vocabulary_objects[$value] = taxonomy_get_tree(taxonomy_vocabulary_machine_name_load($value)->vid,
									$parent = 0, $max_depth = NULL, $load_entities = FALSE);


		}

		foreach($vocabulary_objects as $key => $value) {
			foreach($value as $object){
				$taxonomy_terms_names[$object->name] = $object->name;
			}
			$taxonomy_terms[$key] = $taxonomy_terms_names;
			unset($taxonomy_terms_names);
		}

		$form['settings'] = array(
			'#type' => 'fieldset',
			'#title' => t('Output'),
			'#tree' => 1,
		);

    $form['settings']['month'] = array (
			'#type' => 'select',
			'#title' => t('Incidents from the last:'),
			'#options' => array(
        'all_dates' => t('All dates'),
        1 => t('Month'),
				3 => t('3 months'),
				6 => t('6 months'),
				12 => t('12 months'),
			),
			'#required' => TRUE,
      '#default_value' => $bean->settings['month'],

		);

    $form['settings']['incident_label'] = array (
      '#type' => 'textfield',
      '#title' => t('Of type:'),
      '#required' => TRUE,
      '#default_value' => $bean->settings['incident_label'],
    );

    $form['settings']['all'] = array (
			'#type' => 'checkbox',
			'#title' => t('All incidents'),
			'#default_value' => $bean->settings['all'],
		);

		$form['settings']['options'] = array (
			'#type' => 'select',
			'#title' => t('Vocabulary: '),
			'#options' => $vocabulary_options,
			'#states' => array(
				'visible' => array(
					':input[name="settings[all]"]' => array('checked' => FALSE),
				),
			),
			'#default_value' => $bean->settings['options'],
		);

		$form['settings']['incident_report_type'] = array (
			'#type' => 'select',
			'#title' => t('Incident Report Type:'),
			'#options' => $taxonomy_terms['report_type'],
			'#states' => array(
				'visible' => array(
					':input[name="settings[options]"]' => array('value' => 'Incident report type'),
					':input[name="settings[all]"]' => array('checked' => FALSE),
				),
			),
			'#default_value' => $bean->settings['incident_report_type'],
		);

    $form['settings']['incident_severity'] = array (
			'#type' => 'select',
			'#title' => t('Incident Severity'),
			'#options' => $taxonomy_terms['incident_severity'],
			'#states' => array(
				'visible' => array(
					':input[name="settings[options]"]' => array('value' => 'Incident severity'),
					':input[name="settings[all]"]' => array('checked' => FALSE),
				),
			),
			'#default_value' => $bean->settings['incident_severity'],
		);

		return $form;
	}

	/**
	 * Displays the bean.
	 */
	public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
		$content = array();
		$tid_array = array();
		$term_name = '';
		$taxonomy_term_field = '';
		$tid = '';
		$month = strtotime("-{$bean->settings['month']} months", strtotime("now"));
		$month_number = $bean->settings['month'];
		$vocabulary = $bean->settings['options'];
		$heading_one = 'All dates';

    if(strcmp($vocabulary,'Incident report type') == 0){
			unset($tid_array);
      $taxonomy_term_field = 'field_incident_report_type';
			$term_name = $bean->settings['incident_report_type'];
			$tid_array = taxonomy_get_term_by_name($bean->settings['incident_report_type']);
			foreach($tid_array as $object) {
				$tid = $object->tid;
			}

		}

    else{
			unset($tid_array);
			$taxonomy_term_field = 'field_incident_severity';
			$term_name = $bean->settings['incident_severity'];
			$tid_array = taxonomy_get_term_by_name($bean->settings['incident_severity']);
			foreach($tid_array as $object) {
				$tid = $object->tid;
			}
		}

    $query = new EntityFieldQuery();
    $query
				->entityCondition('entity_type', 'node')
				->entityCondition('bundle', 'incident_report');

    if (strcmp($bean->settings['month'], 'all_dates') !== 0) {
      $query
        ->propertyCondition('created', $month, '>');
      $heading_one = 'Incidents in the last '.$month_number.' months';

    }

    if (!$bean->settings['all']) {
      $query
        ->fieldCondition($taxonomy_term_field, 'tid', $tid, '=');
		  $vocabulary = '';
		  $term_name = '';
		}
    $result = $query
      ->execute();
		$count = 0;

    if (count($result) != 0) {
			$count = count($result['node']);
		}

    $variables = array (
			'header' => array(
			//	t(':heading',array(':heading'=>$heading_one)),
			),
			'rows' => array(array(
					"<span style=\"font-size:40px\">$count </span>{$bean->settings['incident_label']}" ,
					),
				),
			);
		$content[] = array('#markup' => theme('table', $variables));

    return $content;
	}
}
