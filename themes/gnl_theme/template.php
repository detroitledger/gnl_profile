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
