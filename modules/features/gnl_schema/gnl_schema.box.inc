<?php
/**
 * @file
 * gnl_schema.box.inc
 */

/**
 * Implements hook_default_box().
 */
function gnl_schema_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'gnl_about';
  $box->plugin_key = 'simple';
  $box->title = 'What is this?';
  $box->description = 'subpage about';
  $box->options = array(
    'body' => array(
      'value' => 'Detroit Ledger is a database of grants and loans given to organizations in the City of Detroit.

<a href="http://detroitledger.org">Read more about the project.</a>

<a href="mailto:hello@detroitledger.org">Contact us.</a>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => 'aside-box',
  );
  $export['gnl_about'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mailinglist_subscribe';
  $box->plugin_key = 'simple';
  $box->title = 'Get email updates';
  $box->description = 'mailinglist subscribe';
  $box->options = array(
    'body' => array(
      'value' => '<!-- Begin MailChimp Signup Form -->
<div id="mc_embed_signup">
<form action="http://detroitledger.us7.list-manage1.com/subscribe/post?u=5f6c82c52e266389140a08ab5&amp;id=f5dc27de43" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
<div class="indicates-required"><span class="asterisk">*</span> indicates required</div>
<div class="mc-field-group">
	<label for="mce-EMAIL">Email Address  <span class="asterisk">*</span>
</label>
	<input type="email" value="" name="EMAIL" class="required email" id="mce-EMAIL">
</div>
<div class="mc-field-group">
	<label for="mce-NAME">Name </label>
	<input type="text" value="" name="NAME" class="" id="mce-NAME">
</div>
<p><a href="http://us7.campaign-archive2.com/home/?u=5f6c82c52e266389140a08ab5&id=f5dc27de43" title="View previous campaigns">View previous campaigns.</a></p>
	<div id="mce-responses" class="clear">
		<div class="response" id="mce-error-response" style="display:none"></div>
		<div class="response" id="mce-success-response" style="display:none"></div>
	</div>    <!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups-->
    <div style="position: absolute; left: -5000px;"><input type="text" name="b_5f6c82c52e266389140a08ab5_f5dc27de43" tabindex="-1" value=""></div>
    <div class="clear"><input type="submit" value="Subscribe" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
</form>
</div>

<!--End mc_embed_signup-->',
      'format' => 'raw_html',
    ),
    'additional_classes' => 'aside-box',
  );
  $export['mailinglist_subscribe'] = $box;

  return $export;
}
