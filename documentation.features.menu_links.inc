<?php
/**
 * @file
 * documentation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function documentation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_documentation:documentation.
  $menu_links['navigation_documentation:documentation'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'documentation',
    'router_path' => 'documentation',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_documentation:documentation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Documentation');

  return $menu_links;
}
