<?php
/**
 * @file
 * camp_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function camp_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create camp_features content'.
  $permissions['create camp_features content'] = array(
    'name' => 'create camp_features content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any camp_features content'.
  $permissions['delete any camp_features content'] = array(
    'name' => 'delete any camp_features content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own camp_features content'.
  $permissions['delete own camp_features content'] = array(
    'name' => 'delete own camp_features content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any camp_features content'.
  $permissions['edit any camp_features content'] = array(
    'name' => 'edit any camp_features content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own camp_features content'.
  $permissions['edit own camp_features content'] = array(
    'name' => 'edit own camp_features content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
