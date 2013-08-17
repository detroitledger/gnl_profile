<article<?php print $attributes; ?>>
  <?php if (!empty($title_prefix) || !empty($title_suffix) || !$page): ?>

  <?php
    $funder = strip_tags($content['field_funder'][0]['#markup']);
    $recipient = strip_tags($content['field_recipient'][0]['#markup']);
    $amount = $content['field_funded_amount'][0]['#markup'];
    $year = $content['field_year'][0]['#markup'];
  ?>
      <?php print render($title_prefix); ?>
      <?php if (!$page): ?>
          <a href="<?php print $node_url; ?>" rel="bookmark"><?php print $funder; ?> gave <?php print $recipient; ?> <?php print $amount; ?></a> during <?php print $year; ?>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
  <?php endif; ?>

<?php if (!$teaser): ?>
  <?php if ($display_submitted): ?>
    <footer class="node__submitted">
      <?php print $user_picture; ?>
      <p class="submitted"><?php print $submitted; ?></p>
    </footer>
  <?php endif; ?>

  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>
<?php endif; ?>
</article>
