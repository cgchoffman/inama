<?php
/**
 * @file
 * amani_event.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function amani_event_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-event-body.field_instance|widget|weight"] = '10';
  $overrides["field.node-event-field_content_image.node-event-field_content_image"]["DELETED"] = TRUE;
  $overrides["field.node-event-field_event_type.field_instance|widget|weight"] = '15';
  $overrides["field.node-event-field_tags.field_instance|widget|weight"] = '17';

  // Exported overrides for: taxonomy
  $overrides["taxonomy.event_type.metatags"]["DELETED"] = TRUE;

 return $overrides;
}
