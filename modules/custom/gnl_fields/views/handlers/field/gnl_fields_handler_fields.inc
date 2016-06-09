<?php

/**
 * @file
 *
 * Provides handlers for org_grants fields
 */

class gnl_fields_handler_field_grants_funded extends views_handler_field_entity {
  public function render($values) {
    $return = '';
    // node row handler?
    if (($entity = $this->get_value($values)) && entity_access('view', $this->entity_type, $entity)) {
      $return = gnl_fields_org_grants_funded($entity);
    }
    // fields row handler?
    elseif ($values->nid /* add node_load-less access check for field here... */) {
      $return = gnl_fields_org_grants_funded($values->nid);
    }
    return $return;
  }
}

class gnl_fields_handler_field_grants_received extends views_handler_field_entity {
  public function render($values) {
    $return = '';
    // node row handler?
    if (($entity = $this->get_value($values)) && entity_access('view', $this->entity_type, $entity)) {
      $return = gnl_fields_org_grants_received($entity);
    }
    // fields row handler?
    elseif ($values->nid /* add node_load-less access check for field here... */) {
      $return = gnl_fields_org_grants_received($values->nid);
    }
    return $return;
  }
}

class gnl_fields_handler_field_grants_datestart extends views_handler_field_entity {
  public function render($values) {
    $return = '';
    // node row handler?
    if (($entity = $this->get_value($values)) && entity_access('view', $this->entity_type, $entity)) {
      $return = substr(gnl_fields_org_grants_datestart($entity), 0, 4);
    }
    // fields row handler?
    elseif ($values->nid /* add node_load-less access check for field here... */) {
      $return = gnl_fields_org_grants_datestart($values->nid);
    }
    return $return;
  }
}

class gnl_fields_handler_field_grants_dateend extends views_handler_field_entity {
  public function render($values) {
    $return = '';
    // node row handler?
    if (($entity = $this->get_value($values)) && entity_access('view', $this->entity_type, $entity)) {
      $return = substr(gnl_fields_org_grants_dateend($entity), 0, 4);
    }
    // fields row handler?
    elseif ($values->nid /* add node_load-less access check for field here... */) {
      $return = gnl_fields_org_grants_dateend($values->nid);
    }
    return $return;
  }
}

