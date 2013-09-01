<?php
/**
 * @file
 * amani_overrides.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function amani_overrides_context_default_contexts_alter(&$data) {
  if (isset($data['article-content-type'])) {
    $data['article-content-type']->reactions['block']['blocks']['views-article-block_1']['weight'] = '0'; /* WAS: 0 */
    $data['article-content-type']->reactions['block']['blocks']['views-article-block_2']['weight'] = '1'; /* WAS: 1 */
    $data['article-content-type']->reactions['breadcrumb'] = 'news-and-events'; /* WAS: 'article' */
    $data['article-content-type']->reactions['menu'] = 'news-and-events'; /* WAS: 'article' */
  }
  if (isset($data['event-content-type'])) {
    $data['event-content-type']->reactions['breadcrumb'] = 'news-and-events'; /* WAS: 'event' */
    $data['event-content-type']->reactions['menu'] = 'news-and-events'; /* WAS: 'event' */
    unset($data['event-content-type']->reactions['block']);
  }
}

/**
 * Implements hook_field_default_fields_alter().
 */
function amani_overrides_field_default_fields_alter(&$data) {
  if (isset($data['file-application-field_tags'])) {
    $data['file-application-field_tags']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-application-media_description'])) {
    $data['file-application-media_description']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-audio-field_tags'])) {
    $data['file-audio-field_tags']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-audio-field_tags']['field_instance']['display']['media_gallery_block_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-audio-field_tags']['field_instance']['display']['media_gallery_collection_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-audio-field_tags']['field_instance']['display']['media_gallery_detail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-audio-field_tags']['field_instance']['display']['media_gallery_lightbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-audio-field_tags']['field_instance']['display']['media_gallery_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-audio-media_description'])) {
    $data['file-audio-media_description']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-audio-media_description']['field_instance']['display']['media_gallery_block_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-audio-media_description']['field_instance']['display']['media_gallery_collection_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-default-field_tags'])) {
    $data['file-default-field_tags']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-default-media_description'])) {
    $data['file-default-media_description']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-image-field_tags'])) {
    $data['file-image-field_tags']['field_instance']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['file-image-field_tags']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-image-field_tags']['field_instance']['display']['media_gallery_block_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-image-field_tags']['field_instance']['display']['media_gallery_collection_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-image-field_tags']['field_instance']['display']['media_gallery_detail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-image-field_tags']['field_instance']['display']['media_gallery_lightbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-image-field_tags']['field_instance']['display']['media_gallery_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    unset($data['file-image-field_tags']['field_instance']['display']['default']['module']);
  }
  if (isset($data['file-image-media_description'])) {
    $data['file-image-media_description']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-image-media_description']['field_instance']['display']['media_gallery_block_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-image-media_description']['field_instance']['display']['media_gallery_collection_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-text-field_tags'])) {
    $data['file-text-field_tags']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-text-media_description'])) {
    $data['file-text-media_description']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-video-field_tags'])) {
    $data['file-video-field_tags']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-video-field_tags']['field_instance']['display']['media_gallery_block_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-video-field_tags']['field_instance']['display']['media_gallery_collection_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-video-field_tags']['field_instance']['display']['media_gallery_detail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-video-field_tags']['field_instance']['display']['media_gallery_lightbox'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-video-field_tags']['field_instance']['display']['media_gallery_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['file-video-media_description'])) {
    $data['file-video-media_description']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-video-media_description']['field_instance']['display']['media_gallery_block_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['file-video-media_description']['field_instance']['display']['media_gallery_collection_thumbnail'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-article-body'])) {
    $data['node-article-body']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-article-body']['field_instance']['widget']['weight'] = '3'; /* WAS: '4' */
  }
  if (isset($data['node-article-field_content_image'])) {
    unset($data['node-article-field_content_image']);
  }
  if (isset($data['node-article-field_tags'])) {
    $data['node-article-field_tags']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-article-field_tags']['field_instance']['widget']['weight'] = '2'; /* WAS: '3' */
  }
  if (isset($data['redhen_contact-general-field_additional_info'])) {
    $data['redhen_contact-general-field_additional_info']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_contact-general-field_address'])) {
    $data['redhen_contact-general-field_address']['field_config']['settings']['profile2_private'] = FALSE; /* WAS: '' */
    $data['redhen_contact-general-field_address']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_contact-general-field_contact_type'])) {
    $data['redhen_contact-general-field_contact_type']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_contact-general-redhen_contact_email'])) {
    $data['redhen_contact-general-redhen_contact_email']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_org-general-field_additional_info'])) {
    $data['redhen_org-general-field_additional_info']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_org-general-field_address'])) {
    $data['redhen_org-general-field_address']['field_config']['settings']['profile2_private'] = FALSE; /* WAS: '' */
    $data['redhen_org-general-field_address']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_org-general-field_org_type'])) {
    $data['redhen_org-general-field_org_type']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['redhen_org-general-field_website'])) {
    $data['redhen_org-general-field_website']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['relation-redhen_affiliation-endpoints'])) {
    $data['relation-redhen_affiliation-endpoints']['field_instance']['display']['default']['settings']['view_modes'] = array(
      'comment' => 'default',
      'file' => 'default',
      'message' => 'default',
      'message_type' => 'default',
      'message_type_category' => 'default',
      'node' => 'default',
      'profile2' => 'default',
      'profile2_type' => 'default',
      'redhen_contact' => 'default',
      'redhen_contact_type' => 'default',
      'redhen_engagement' => 'default',
      'redhen_engagement_score' => 'default',
      'redhen_membership' => 'default',
      'redhen_membership_type' => 'default',
      'redhen_note' => 'default',
      'redhen_org' => 'default',
      'redhen_org_type' => 'default',
      'relation' => 'default',
      'taxonomy_term' => 'default',
      'taxonomy_vocabulary' => 'default',
      'user' => 'default',
      'wysiwyg_profile' => 'default',
    ); /* WAS: '' */
    $data['relation-redhen_affiliation-endpoints']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['relation-redhen_affiliation-redhen_relation_roles'])) {
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['0'] = 'Advisor'; /* WAS: 'Admin' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['1'] = 'Board Member'; /* WAS: 'Member' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['2'] = 'Executive'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['3'] = 'Founder'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['4'] = 'Manager'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['5'] = 'Other'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['6'] = 'Staff'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_config']['settings']['allowed_values']['7'] = 'Volunteer'; /* WAS: '' */
    $data['relation-redhen_affiliation-redhen_relation_roles']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['relation-redhen_affiliation-redhen_relation_status'])) {
    $data['relation-redhen_affiliation-redhen_relation_status']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['relation-redhen_connection-endpoints'])) {
    $data['relation-redhen_connection-endpoints']['field_instance']['display']['default']['settings']['view_modes'] = array(
      'comment' => 'default',
      'file' => 'default',
      'message' => 'default',
      'message_type' => 'default',
      'message_type_category' => 'default',
      'node' => 'default',
      'profile2' => 'default',
      'profile2_type' => 'default',
      'redhen_contact' => 'default',
      'redhen_contact_type' => 'default',
      'redhen_engagement' => 'default',
      'redhen_engagement_score' => 'default',
      'redhen_membership' => 'default',
      'redhen_membership_type' => 'default',
      'redhen_note' => 'default',
      'redhen_org' => 'default',
      'redhen_org_type' => 'default',
      'relation' => 'default',
      'taxonomy_term' => 'default',
      'taxonomy_vocabulary' => 'default',
      'user' => 'default',
      'wysiwyg_profile' => 'default',
    ); /* WAS: '' */
    $data['relation-redhen_connection-endpoints']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['relation-redhen_connection-redhen_relation_status'])) {
    $data['relation-redhen_connection-redhen_relation_status']['field_instance']['display']['ical'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function amani_overrides_strongarm_alter(&$data) {
  if (isset($data['node_options_article'])) {
    unset($data['node_options_article']->value['1']);
  }
  if (isset($data['pathauto_node_article_pattern'])) {
    $data['pathauto_node_article_pattern']->value = 'news/[node:title]'; /* WAS: 'article/[node:title]' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function amani_overrides_views_default_views_alter(&$data) {
  if (isset($data['article'])) {
    $data['article']->display['block_1']->display_options['defaults']['hide_admin_links'] = FALSE; /* WAS: '' */
    $data['article']->display['block_2']->display_options['defaults']['hide_admin_links'] = FALSE; /* WAS: '' */
    $data['article']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['article']->display['feed_1']->display_options['defaults']['hide_admin_links'] = FALSE; /* WAS: '' */
    $data['article']->display['page_1']->display_options['defaults']['hide_admin_links'] = FALSE; /* WAS: '' */
    $data['article']->display['page_1']->display_options['fields']['body']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['article']->display['page_1']->display_options['fields']['created']['element_label_colon'] = FALSE; /* WAS: 0 */
    $data['article']->display['page_1']->display_options['fields']['created']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['article']->display['page_1']->display_options['fields']['field_content_image']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['article']->display['page_1']->display_options['fields']['title']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['article']->display['page_1']->display_options['fields']['view_node']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    unset($data['article']->display['block_2']->display_options['arguments']['uid']['break_phrase']);
    unset($data['article']->display['block_2']->display_options['arguments']['uid']['default_argument_skip_url']);
    unset($data['article']->display['block_2']->display_options['arguments']['uid']['not']);
    unset($data['article']->display['default']->display_options['arguments']['nid']['break_phrase']);
    unset($data['article']->display['default']->display_options['arguments']['nid']['not']);
    unset($data['article']->display['default']->display_options['fields']['title']['alter']);
    unset($data['article']->display['default']->display_options['fields']['title']['element_default_classes']);
    unset($data['article']->display['default']->display_options['fields']['title']['element_label_colon']);
    unset($data['article']->display['default']->display_options['fields']['title']['empty_zero']);
    unset($data['article']->display['default']->display_options['fields']['title']['hide_empty']);
    unset($data['article']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['article']->display['default']->display_options['pager']['options']['expose']);
    unset($data['article']->display['feed_1']->display_options['arguments']['nid']['break_phrase']);
    unset($data['article']->display['feed_1']->display_options['arguments']['nid']['not']);
    unset($data['article']->display['page_1']->display_options['fields']['body']['alter']);
    unset($data['article']->display['page_1']->display_options['fields']['body']['element_default_classes']);
    unset($data['article']->display['page_1']->display_options['fields']['body']['empty_zero']);
    unset($data['article']->display['page_1']->display_options['fields']['body']['field_api_classes']);
    unset($data['article']->display['page_1']->display_options['fields']['body']['hide_empty']);
    unset($data['article']->display['page_1']->display_options['fields']['created']['alter']);
    unset($data['article']->display['page_1']->display_options['fields']['created']['element_default_classes']);
    unset($data['article']->display['page_1']->display_options['fields']['created']['empty_zero']);
    unset($data['article']->display['page_1']->display_options['fields']['created']['hide_empty']);
    unset($data['article']->display['page_1']->display_options['fields']['field_content_image']['alter']);
    unset($data['article']->display['page_1']->display_options['fields']['field_content_image']['element_default_classes']);
    unset($data['article']->display['page_1']->display_options['fields']['field_content_image']['empty_zero']);
    unset($data['article']->display['page_1']->display_options['fields']['field_content_image']['field_api_classes']);
    unset($data['article']->display['page_1']->display_options['fields']['field_content_image']['hide_empty']);
    unset($data['article']->display['page_1']->display_options['fields']['title']['alter']);
    unset($data['article']->display['page_1']->display_options['fields']['title']['element_default_classes']);
    unset($data['article']->display['page_1']->display_options['fields']['title']['empty_zero']);
    unset($data['article']->display['page_1']->display_options['fields']['title']['hide_empty']);
    unset($data['article']->display['page_1']->display_options['fields']['title']['link_to_node']);
    unset($data['article']->display['page_1']->display_options['fields']['view_node']['alter']);
    unset($data['article']->display['page_1']->display_options['fields']['view_node']['element_default_classes']);
    unset($data['article']->display['page_1']->display_options['fields']['view_node']['empty_zero']);
    unset($data['article']->display['page_1']->display_options['fields']['view_node']['hide_empty']);
    unset($data['article']->display['page_1']->display_options['pager']['options']['expose']);
  }
}
