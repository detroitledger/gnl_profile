<?php
/**
 * @file
 * gnl_schema.box.inc
 */

/**
 * Implements hook_default_box().
 */
function gnl_schema_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'gnl_about';
  $box->plugin_key = 'simple';
  $box->title = 'What is this?';
  $box->description = 'subpage about';
  $box->options = array(
    'body' => array(
      'value' => 'Detroit Ledger is a database of grants and loans given to organizations in the City of Detroit.

<a href="http://detroitledger.org">Read more about the project.</a>

<a href="mailto:hello@detroitledger.org">Contact us.</a>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['gnl_about'] = $box;

  return $export;
}
