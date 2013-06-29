<?php
/**
 * @file
 * gnl_schema.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gnl_schema_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'org_context';
  $context->description = 'Show grants on Organization nodes';
  $context->tag = 'org';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'org' => 'org',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ad97a1443bc64471623609036389167c' => array(
          'module' => 'views',
          'delta' => 'ad97a1443bc64471623609036389167c',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Show grants on Organization nodes');
  t('org');
  $export['org_context'] = $context;

  return $export;
}
