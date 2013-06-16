<?php

// The name of the site, taken from the URL.
define('GNL_SITE_NAME', $_SERVER['SERVER_NAME']);

/**
 * Implements hook_form_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function gnl_profile_form_install_configure_form_alter(&$form, $form_state) {
  // Set a default site name and email address.
  $form['site_information']['site_name']['#default_value'] = GNL_SITE_NAME;
  $form['site_information']['site_mail']['#default_value'] = 'bc@thermitic.net';

  // Set a default username and email address.
  $form['admin_account']['account']['name']['#default_value'] = 'Benjamin Chodoroff';
  $form['admin_account']['account']['mail']['#default_value'] = 'bc@thermitic.net';

  // Set a default country and timezone.
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Detroit';

  // Disable the 'receive email notifications' checkbox.
  $form['update_notifications']['update_status_module']['#default_value'][1] = 0;
}
