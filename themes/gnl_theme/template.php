<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * detroitledger.org omega subtheme theme.
 */

function gnl_theme_breadcrumb($vars) {
  $crumb = $vars['breadcrumb'];
  if (count($crumb) == 1) {
    return;
  }
}

/**
 * Implements template_preprocess().
 */
function gnl_theme_preprocess(&$variables, $hook) {
  if ($hook == 'views_more') {
    $view = $variables['view'];
    if ($view->name == 'board_terms' && $view->current_display == 'block_1' && count($view->args)) {
      $node = node_load($view->args[0]);

      if (gnl_schema_show_management_links($node, 'full')) {
        $links = gnl_schema_management_links($node);
        $variables['management_links'] = theme_links(array(
          'links' => $links,
          'attributes' => array(
            'class' => 'gnl-management-links',
          ),
        ));
      }
    }
  }
}

