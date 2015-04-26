<?php

/**
 * @file
 * Contains:
 *   Drupal\gnl_api\Serializers\OrgSerializer
 *
 */

namespace Drupal\gnl_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class OrgSerializer extends SerializerAbstract {
  protected $type = 'orgs';

  protected function attributes($org) {
    return $org;
  }

  protected function getId($org) {
    return $org->nid;
  }
}

