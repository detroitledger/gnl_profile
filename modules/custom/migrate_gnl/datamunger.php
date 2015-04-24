<?php

namespace Drupal\migrate_gnl;

/*
$dm = new Datamunger();

$ntee_strings = $dm->build_ntee_pair_strings();

$test_strings = [
  'Mental Health, Crisis Intervention » Alcohol, Drug, and Substance Abuse, Dependency, Prevention and Treatment',
  'Disease, Disorders, Medical Disciplines » Cancer, Human Services » Human Service Organizations',
  'Educational Institutions » Elementary, Secondary Ed, Religion, Spiritual Development » Roman Catholic',
];

$res = array_map(function($str) use ($dm) {
  return $dm->derive_tids_from_ntee_string($str);
}, $test_strings);
print_r($res);
*/

class Datamunger {
  /**
   * Outputs two-level term hierarchy as found in Drupal's UI,
   * keyed by child term ID.
   */
  public function build_ntee_pair_strings() {
    $ntee_tree = $this->get_tree_by_machine_name('ntee');

    $parents = $this->filter_eldest_parents($ntee_tree);

    $parent_keys = array_map(function($term) {
      return $term->tid;
    }, $parents);

    $parents = array_combine($parent_keys, $parents);

    $pair_strings = array();

    foreach ($ntee_tree as $term) {
      if ($term->parents[0] != 0) {
        $pair_strings[$term->tid] = $parents[$term->parents[0]]->name . ' » ' . $term->name;
      }
    }

    // sort by length
    /*usort($pair_strings, function($a, $b) {
      return strlen($b) - strlen($a);
    });*/

    return $pair_strings;
  }

  public function get_tree_by_machine_name($machine_name) {
    return taxonomy_get_tree($this->get_vid_by_machine_name($machine_name), 0, NULL, TRUE);
  }

  public function filter_eldest_parents($tree) {
    return array_filter($tree, function($term) {
      return ($term->parents[0] == 0);
    });
  }

  public function ntee_description_to_tid($ntee_description) {
    $arr = split(' » ', $ntee_description);

    $ntee_tree = $this->get_vid_by_machine_name('ntee');

    $parents = $this->filter_eldest_parents($ntee_tree);

    $parent_term = array_pop(array_filter($parents, function($term) use (&$arr) {
      return ($term->name == $arr[0]);
    }));

    $child_term = array_pop(array_filter($ntee_tree, function($term) use(&$arr, &$parent_term) {
      $is_child = ($term->parents[0] == $parent_term->tid);
      $has_name = ($term->name == $arr[1]);
      return ($is_child && $has_name);
    }));

    return $child_term ? $child_term->tid : null;
  }

  public function get_vid_by_machine_name($vocabulary_name) {
    $vocabs = taxonomy_get_vocabularies(NULL);
    foreach ($vocabs as $vocab_object) {
      if ($vocab_object->machine_name == $vocabulary_name) {
        return $vocab_object->vid;
      }
    }
    return null;
  }

  /**
   * given string containing multiple ntee strings,
   * return array of taxonomy term tids
   */
  public function derive_tids_from_ntee_string($str) {
    $ntee_strings = $this->build_ntee_pair_strings();

    $this_tids = array();

    foreach ($ntee_strings as $k => $v) {
      $match = strpos($str, $v);
      if ($match > -1) {
        $this_tids[] = $k;
        $str = str_replace($v, '', $str);
      }
    }

    return $this_tids;
  }
}


