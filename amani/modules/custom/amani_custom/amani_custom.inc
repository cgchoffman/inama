<?php

/**
 * Enable admin/structure/file-types/manage/image/file-display Image checkbox
 * If file display does not exist it is created.
 */
function enable_image_file_display() {
  $file_type = 'image';
  $view_mode = 'default';
  $formatter_name = 'file_image';
  $displays_original = file_displays_load($file_type, $view_mode, TRUE);
  $display_original = isset($displays_original[$formatter_name]) ? $displays_original[$formatter_name] : file_display_new($file_type, $view_mode, $formatter_name);

  $display = array(
      'status' => 1,
      'weight' => 0,
      'settings' => array(
        'image_style' => 'medium',
        'alt' => '[file:field_file_image_alt_text]',
        'title' => '[file:field_file_image_title_text]',
        ),
      );
  $display += (array)$display_original;

  file_display_save((object)$display);
}
