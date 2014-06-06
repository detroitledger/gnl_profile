// ==UserScript==
// @name        detroitledger: get org address via LARA biz entity search
// @website     http://detroitledger.org
// @namespace   *
// @description Given a detroitledger.org org name (or currently selected text), search State of Michigan Corporate Entity database, select first match, and pull out address components
// @include     https://*.detroitledger.org/node/*/edit
// @include     http://localhost:8888/node/*/edit
// @match       https://*.detroitledger.org/node/*/edit
// @match       http://localhost:8888/node/*/edit
// @require     https://ajax.googleapis.com/ajax/libs/jquery/1.10.2/jquery.min.js
// @grant       GM_xmlhttpRequest
// @grant       GM_openInTab
// @version     0.0.2
// ==/UserScript==

var config = {
  'search_base': 'http://www.dleg.state.mi.us/bcs_corp/',
  'search_path': 'rs_corp.asp?s_button=sname&v_search='
};

config.search_url = config.search_base + config.search_path;

/**
 * Run function `fun` on alt-o keydown
 */
var bind_to_alt_o = function(fun) {
  document.addEventListener('keydown', function(ev) {
    if (ev.keyCode == 79 && !ev.shiftKey && !ev.ctrlKey && ev.altKey && !ev.metaKey) {
      fun();
    }
  }, false);
};

/**
 * Either grab the org name from Drupal entity edit page, or use selected text
 */
var get_org_name = function() {
  var title = document.getElementById('edit-title').value;
  if (typeof title === 'string') {
    return title;
  }
  else {
    if (window.getSelection) {
      return window.getSelection();
    }
    else {
      if (document.getSelection) {
        return document.getSelection();
      }
      else {
        return false;
      }
    }
  }
};

/**
 * Fetch list of organizations matching search string
 * If there's more than one, open a new tab with results as well.
 * 
 * @param q
 *   Search query
 * 
 * @return callback
 *   param first_match_url
 */
var fetch_list_of_orgs_search = function(q, cb) {
  var search_url = config.search_url + q;
  var $listings;
  GM_xmlhttpRequest({
    method: 'GET',
    url: search_url,
    onload: function(res) {
      $listings = jQuery(res.responseText).find('a[href*="dt_corp.asp"]');
      if ( $listings.length > 1) {
        GM_openInTab(search_url);
      }
      var first_org_path = $listings.eq(0).attr('href');
      if (first_org_path !== undefined) {
        cb(config.search_base + first_org_path);
      }
    }
  });
};

/**
 * Get a single entity's information
 *
 * @param first_match_url
 *   URL of a LARA single entity page
 *
 * @return org_info object
 *   with properties: street, city, state, zip, corporation type
 */
var fetch_single_org_info = function(first_match_url, cb) {
  var $org_info_table = address = [];
  GM_xmlhttpRequest({
    method: 'GET',
    url: first_match_url,
    onload: function(res) {
      // find address n stuff, build return object
      $org_info_table = jQuery(res.responseText).find('table[width=610]').eq(0);
      address = $org_info_table.find('.style8').text().split('\n');
      return cb({
        street: address[1].trim(),
        city: address[2].trim().split(' ')[0].trim(),
        state: address[2].trim().split(' ')[1].trim(),
        zip: address[2].trim().split(' ')[2].trim(),
        type: $org_info_table.find('tbody > tr:nth-child(4) > td:nth-child(1) > span:nth-child(1) > font:nth-child(2)').text().trim(),
        state_corp_id: $org_info_table.find('tbody > tr:nth-child(2) > td:nth-child(1) > p:nth-child(1) > span:nth-child(1) > font:nth-child(1)').text().split(/Num: /)[1].trim()
      });
    }
  });
};

/**
 * Fill in form values with org_info
 *
 * @param org_info object
 *   see fetch_single_org_info()
 *
 * @return nothing
 */
var set_org_info = function(org_info) {
  // add type tag
  if (jQuery('#edit-field-org-tags-und').val().length > 1) {
    jQuery('#edit-field-org-tags-und').val(jQuery('#edit-field-org-tags-und').val() + ', ' + org_info.type);
  } else {
    jQuery('#edit-field-org-tags-und').val(org_info.type);
  }
  // street
  jQuery('#edit-field-org-address-und-0-thoroughfare').val(org_info.street);
  // city
  jQuery('#edit-field-org-address-und-0-locality').val(org_info.city);
  // state
  jQuery('#edit-field-org-address-und-0-administrative-area').val(org_info.state);
  // zip
  jQuery('#edit-field-org-address-und-0-postal-code').val(org_info.zip);
  // state corp id
  jQuery('#edit-field-state-corp-id-und-0-value').val(org_info.state_corp_id)
};

/**
 * Bind our function to keypress
 */
bind_to_alt_o(function() {
  var org_name = get_org_name();
  if (org_name) {
    fetch_list_of_orgs_search(org_name, function(search_url) {
      fetch_single_org_info(search_url, function(org_info) {
        set_org_info(org_info);
      });
    });
  }
  else {
    alert('No org name found: highlight org name or navigate to org edit page on detroitledger.');
  }
});
