<?php

/**
 * Implements hook_preprocess_page().
 */
function gnl_theme_preprocess_page(&$vars) {
  // Hide title on grants
  if ($vars['node']->type == 'grant') {
    $vars['title'] = '';
  }
}

