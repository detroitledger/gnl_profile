<?php

/**
 * @file
 * Contains:
 *   Drupal\gnl_api\Utils
 *
 */

namespace Drupal\gnl_api;

module_load_include('module', 'date_api');

class Utils {
  /**
   * Converts vocabulary machine name to its vid.
   */
  public function getVidByMachineName($vocabulary_name) {
    $vocabs = taxonomy_get_vocabularies(NULL);
    foreach ($vocabs as $vocab_object) {
      if ($vocab_object->machine_name == $vocabulary_name) {
        return $vocab_object->vid;
      }
    }
    return null;
  }

  /**
   * Returns taxonomy tree based on machine name.
   */
  public function getTreeByMachineName($machine_name) {
    return taxonomy_get_tree($this->getVidByMachineName($machine_name), 0, NULL, TRUE);
  }

  /**
   * Unsets Drupally things from nodes.
   *
   * @param object $node
   *
   * @return $node
   */
  public static function cleanNode($node) {
    // first, unset things
    $unwanted_properties = array(
      'data',
      'language',
      'picture',
      'promote',
      'sticky',
    );

    foreach ($unwanted_properties as $prop) {
      unset($node->{$prop});
    }

    // set framework-friendly ID
    $node->id = $node->nid;
    //unset($node->nid);

    // then, remove language from things that just don't need it
    foreach ($node as $key => $val) {
      if (is_array($val)) {
        // change empty arrays to NULL
        if (count($val) === 0) {
          $node->{$key} = NULL;
        }
        // remove translations
        // @todo change this in future l10n work
        if (strpos($key, 'field_') === 0 && array_key_exists('und', $val) && array_key_exists(0, $val['und'])) {
          $node->{$key} = $val['und'][0];
        }
      }
    }

    $ints = array(
      'changed',
      'comment',
      'created',
      'id',
      'revision_timestamp',
      'revision_uid',
      'status',
      'tnid',
      'translate',
      'uid',
      'vid'
    );

    if ($node->type == 'org') {
      $node->field_ein = $node->field_ein['value'];
      array_push($ints, 'field_ein');
      $node->field_duns = $node->field_duns['value'];
      array_push($ints, 'field_duns');
    }

    if ($node->type == 'grant') {
      $node->field_funded_amount = $node->field_funded_amount['value'];
      array_push($ints, 'field_funded_amount');
    }

    foreach ($ints as $prop) {
      $node->{$prop} = (int) $node->{$prop};
    }

    // remove safe_values from some properties
    $simplify_props = array();

    if ($node->type == 'grant') {
      array_push($simplify_props, 'field_source');
      array_push($simplify_props, 'field_internal_notes');

      $has_notes = (isset($node->body) && isset($node->body['und']) && isset($node->body['und'][0]) && isset($node->body['und'][0]['safe_value']));
      if ($has_notes) {
        $node->notes = $node->body['und'][0]['safe_value'];
      } else {
        $node->notes = null;
      }
    }

    if ($node->type == 'page') {
      $node->body = $node->body['und'][0]['value'];
    }

    foreach ($simplify_props as $prop) {
      if ($node->{$prop}['value']) {
        $node->{$prop} = $node->{$prop}['value'];
      }
    }

    // add grantor/grantee names to grants
    if ($node->type == 'grant') {
      $funder = node_load($node->field_funder['target_id']);
      $node->field_funder['name'] = $funder->title;
      $recipient = node_load($node->field_recipient['target_id']);
      $node->field_recipient['name'] = $recipient->title;
    }

    // make dates js-friendly
    if ($node->type == 'grant') {
      $start_date = new \DateObject($node->field_year['value'], $node->field_year['timezone']);
      $node->field_start_date = date_format_date($start_date, 'custom', 'r');
      $end_date = new \DateObject($node->field_year['value2'], $node->field_year['timezone']);
      $node->field_end_date = date_format_date($end_date, 'custom', 'r');
    }

    return $node;
  }
}
