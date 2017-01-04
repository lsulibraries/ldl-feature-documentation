<?php
/**
 * @file
 * documentation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function documentation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer access of any book'.
  $permissions['administer access of any book'] = array(
    'name' => 'administer access of any book',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book_access',
  );

  // Exported permission: 'administer access of own books'.
  $permissions['administer access of own books'] = array(
    'name' => 'administer access of own books',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book_access',
  );

  // Exported permission: 'administer book access'.
  $permissions['administer book access'] = array(
    'name' => 'administer book access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book_access',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  return $permissions;
}
