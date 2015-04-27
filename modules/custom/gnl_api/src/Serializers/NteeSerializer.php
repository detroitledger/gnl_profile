<?php

/**
 * @file
 * Contains:
 *   Drupal\gnl_api\Serializers\GrantSerializer
 *
 */

namespace Drupal\gnl_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;
use Drupal\gnl_api\Serializers\OrgSerializer;

class NteeSerializer extends SerializerAbstract {
  protected $type = 'ntees';

  protected function attributes($term) {
    return $term;
  }

  protected function getId($term) {
    return entity_extract_ids('taxonomy_term', $term)[0];
  }

  protected function orgs() {
    return function ($ntee, $include, $included) {
      $serializer = new OrgSerializer($included);
      $orgs = $serializer->collection($include ? $ntee->orgs : $post->org_ids);
      $link = new Link($orgs);
      return $link;
    };
  }
}

