<?php

/**
 * Implements hook install tasks.
 *
 */
function amani_install_tasks() {
  $tasks['revert_amani_features_task'] = array(
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'revert_amani_features',
  );

  $tasks['enable_image_file_display_task'] = array(
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'enable_image_file_display',
  );
  return $tasks;
}

/**
 * Revert all features.
 */
function revert_amani_features() {
  features_revert();
}


