<?php
/**
 * @file
 * camp_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function camp_features_node_info() {
  $items = array(
    'camp_features' => array(
      'name' => t('camp features'),
      'base' => 'node_content',
      'description' => t('camp features demo'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
