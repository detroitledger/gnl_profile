<?php
/**
 * @file
 * gnl_schema.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function gnl_schema_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Transparency',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'About the Detroit Ledger',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:node/3
  $menu_links['main-menu:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Our Methods',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: main-menu:orgs
  $menu_links['main-menu:orgs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'orgs',
    'router_path' => 'orgs',
    'link_title' => 'Organizations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About the Detroit Ledger');
  t('Organizations');
  t('Our Methods');
  t('Transparency');


  return $menu_links;
}
