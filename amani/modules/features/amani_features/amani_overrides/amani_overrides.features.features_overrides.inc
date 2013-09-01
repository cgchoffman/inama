<?php
/**
 * @file
 * amani_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function amani_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.article-content-type.reactions|block|blocks|views-article-block_1|weight"] = '0';
  $overrides["context.article-content-type.reactions|block|blocks|views-article-block_2|weight"] = '1';
  $overrides["context.article-content-type.reactions|breadcrumb"] = 'news-and-events';
  $overrides["context.article-content-type.reactions|menu"] = 'news-and-events';
  $overrides["context.event-content-type.reactions|block"]["DELETED"] = TRUE;
  $overrides["context.event-content-type.reactions|breadcrumb"] = 'news-and-events';
  $overrides["context.event-content-type.reactions|menu"] = 'news-and-events';

  // Exported overrides for: field
  $overrides["field.file-application-field_tags.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-application-media_description.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-audio-field_tags.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-audio-field_tags.field_instance|display|media_gallery_block_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-audio-field_tags.field_instance|display|media_gallery_collection_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-audio-field_tags.field_instance|display|media_gallery_detail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-audio-field_tags.field_instance|display|media_gallery_lightbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-audio-field_tags.field_instance|display|media_gallery_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-audio-media_description.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-audio-media_description.field_instance|display|media_gallery_block_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-audio-media_description.field_instance|display|media_gallery_collection_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-default-field_tags.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-default-media_description.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-image-field_tags.field_instance|display|default|module"]["DELETED"] = TRUE;
  $overrides["field.file-image-field_tags.field_instance|display|default|type"] = 'hidden';
  $overrides["field.file-image-field_tags.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-image-field_tags.field_instance|display|media_gallery_block_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-image-field_tags.field_instance|display|media_gallery_collection_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-image-field_tags.field_instance|display|media_gallery_detail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-image-field_tags.field_instance|display|media_gallery_lightbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-image-field_tags.field_instance|display|media_gallery_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-image-media_description.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-image-media_description.field_instance|display|media_gallery_block_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-image-media_description.field_instance|display|media_gallery_collection_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-text-field_tags.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-text-media_description.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-video-field_tags.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-video-field_tags.field_instance|display|media_gallery_block_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-video-field_tags.field_instance|display|media_gallery_collection_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-video-field_tags.field_instance|display|media_gallery_detail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-video-field_tags.field_instance|display|media_gallery_lightbox"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-video-field_tags.field_instance|display|media_gallery_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-video-media_description.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-video-media_description.field_instance|display|media_gallery_block_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.file-video-media_description.field_instance|display|media_gallery_collection_thumbnail"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-article-body.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-article-body.field_instance|widget|weight"] = '3';
  $overrides["field.node-article-field_content_image.node-article-field_content_image"]["DELETED"] = TRUE;
  $overrides["field.node-article-field_tags.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.node-article-field_tags.field_instance|widget|weight"] = '2';
  $overrides["field.redhen_contact-general-field_additional_info.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_contact-general-field_address.field_config|settings|profile2_private"] = FALSE;
  $overrides["field.redhen_contact-general-field_address.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_contact-general-field_contact_type.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_contact-general-redhen_contact_email.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_org-general-field_additional_info.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_org-general-field_address.field_config|settings|profile2_private"] = FALSE;
  $overrides["field.redhen_org-general-field_address.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_org-general-field_org_type.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.redhen_org-general-field_website.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.relation-redhen_affiliation-endpoints.field_instance|display|default|settings|view_modes"] = array(
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
  );
  $overrides["field.relation-redhen_affiliation-endpoints.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|0"] = 'Advisor';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|1"] = 'Board Member';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|2"] = 'Executive';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|3"] = 'Founder';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|4"] = 'Manager';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|5"] = 'Other';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|6"] = 'Staff';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_config|settings|allowed_values|7"] = 'Volunteer';
  $overrides["field.relation-redhen_affiliation-redhen_relation_roles.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.relation-redhen_affiliation-redhen_relation_status.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.relation-redhen_connection-endpoints.field_instance|display|default|settings|view_modes"] = array(
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
  );
  $overrides["field.relation-redhen_connection-endpoints.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field.relation-redhen_connection-redhen_relation_status.field_instance|display|ical"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: variable
  $overrides["variable.node_options_article.value|1"]["DELETED"] = TRUE;
  $overrides["variable.pathauto_node_article_pattern.value"] = 'news/[node:title]';

  // Exported overrides for: views_view
  $overrides["views_view.article.display|block_1|display_options|defaults|hide_admin_links"] = FALSE;
  $overrides["views_view.article.display|block_2|display_options|arguments|uid|break_phrase"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|block_2|display_options|arguments|uid|default_argument_skip_url"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|block_2|display_options|arguments|uid|not"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|block_2|display_options|defaults|hide_admin_links"] = FALSE;
  $overrides["views_view.article.display|default|display_options|arguments|nid|break_phrase"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|default|display_options|arguments|nid|not"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|default|display_options|fields|title|alter"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|default|display_options|fields|title|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|default|display_options|fields|title|element_label_colon"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|default|display_options|fields|title|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|default|display_options|fields|title|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|default|display_options|pager|options|expose"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.article.display|feed_1|display_options|arguments|nid|break_phrase"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|feed_1|display_options|arguments|nid|not"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|feed_1|display_options|defaults|hide_admin_links"] = FALSE;
  $overrides["views_view.article.display|page_1|display_options|defaults|hide_admin_links"] = FALSE;
  $overrides["views_view.article.display|page_1|display_options|fields|body|alter"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|body|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|body|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|body|field_api_classes"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|body|hide_alter_empty"] = FALSE;
  $overrides["views_view.article.display|page_1|display_options|fields|body|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|created|alter"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|created|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|created|element_label_colon"] = FALSE;
  $overrides["views_view.article.display|page_1|display_options|fields|created|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|created|hide_alter_empty"] = FALSE;
  $overrides["views_view.article.display|page_1|display_options|fields|created|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|field_content_image|alter"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|field_content_image|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|field_content_image|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|field_content_image|field_api_classes"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|field_content_image|hide_alter_empty"] = FALSE;
  $overrides["views_view.article.display|page_1|display_options|fields|field_content_image|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|title|alter"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|title|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|title|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|title|hide_alter_empty"] = FALSE;
  $overrides["views_view.article.display|page_1|display_options|fields|title|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|view_node|alter"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|view_node|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|view_node|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|fields|view_node|hide_alter_empty"] = FALSE;
  $overrides["views_view.article.display|page_1|display_options|fields|view_node|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.article.display|page_1|display_options|pager|options|expose"]["DELETED"] = TRUE;

 return $overrides;
}
