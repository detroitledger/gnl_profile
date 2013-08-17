<?php

/**
 * Implements hook_preprocess_username().
 */
function gnl_theme_preprocess_username(&$vars) {
  // don't trim username
  $vars['name'] = check_plain($vars['name_raw']);
}

