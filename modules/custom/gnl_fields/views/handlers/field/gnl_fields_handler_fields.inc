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
      setlocale(LC_MONETARY, 'en_US.UTF-8');
      $return = money_format('%.0n', gnl_fields_org_grants_funded($entity));
    }
    return $return;
  }
}

class gnl_fields_handler_field_grants_received extends views_handler_field_entity {
  public function render($values) {
    $return = '';
    if (($entity = $this->get_value($values)) && entity_access('view', $this->entity_type, $entity)) {
      setlocale(LC_MONETARY, 'en_US.UTF-8');
      $return = money_format('%.0n', gnl_fields_org_grants_received($entity));
    }
    return $return;
  }
}

class gnl_fields_handler_field_grants_datestart extends views_handler_field_entity {
  public function render($values) {
    $return = '';
    if (($entity = $this->get_value($values)) && entity_access('view', $this->entity_type, $entity)) {
      setlocale(LC_MONETARY, 'en_US.UTF-8');
      $return = substr(gnl_fields_org_grants_datestart($entity), 0, 4);
    }
    return $return;
  }
}

