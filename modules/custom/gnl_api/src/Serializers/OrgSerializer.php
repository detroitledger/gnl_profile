<?php

/**
 * @file
 * Contains:
 *   Drupal\gnl_api\Serializers\OrgSerializer
 *
 */

namespace Drupal\gnl_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;
use Drupal\gnl_api\Utils;

class OrgSerializer extends SerializerAbstract {
  protected $type = 'orgs';

  protected function attributes($org) {
    return \Drupal\gnl_api\Utils::cleanNode($org);
  }

  protected function getId($org) {
    return $org->nid;
  }
}

