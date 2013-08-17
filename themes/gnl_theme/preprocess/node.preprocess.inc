<?php

/**
 * Implements hook_preprocess_node().
 */
function gnl_theme_preprocess_node(&$vars) {
  $vars['submitted'] = t('Submitted by !user. Last updated !date.', array('!user' => $vars['name'], '!date' => format_date($vars['changed'], 'short')));
}

