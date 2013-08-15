<?php

/**
 * @file
 *
 * Provides handlers for org_grants fields
 */

class gnl_fields_handler_field_grants_funded extends views_handler_field_entity {
  public function render($values) {
    $return = '';
    if (($entity = $this->get_value($values)) && entity_access('view', $this->entity_type, $entity)) {
      $return = call_user_func_array($this->definition['callback'], array('node' => $entity));
    }
    return $return;
  }
}

