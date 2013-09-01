<?php
/**
 * @file
 * amani_programs_campaigns.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function amani_programs_campaigns_taxonomy_default_vocabularies() {
  return array(
    'project_location' => array(
      'name' => 'Project Location',
      'machine_name' => 'project_location',
      'description' => 'Where this program or campaign is taking place',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
