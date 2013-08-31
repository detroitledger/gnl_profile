<?php
$funder = strip_tags($content['field_funder'][0]['#markup']);
$recipient = strip_tags($content['field_recipient'][0]['#markup']);
$amount = $content['field_funded_amount'][0]['#markup'];
$year = $content['field_year'][0]['#markup'];
?>
<article<?php print $attributes; ?>>
  <?php if (!empty($title_prefix) || !empty($title_suffix) || !$page): ?>

      <?php print render($title_prefix); ?>
      <?php if (!$page): ?>
          <a href="<?php print $node_url; ?>" rel="bookmark"><?php print $amount; ?> to <?php print $recipient; ?></a>, <?php print $year; ?>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
  <?php endif; ?>
</article>
