<article<?php print $attributes; ?>>
  <?php if (!empty($title_prefix) || !empty($title_suffix) || !$page): ?>

  <?php
    $received = render($content['gnl_fields_org_grants_received']);
    $granted = render($content['gnl_fields_org_grants_funded']);
    $year = render($content['gnl_fields_org_grants_datestart']);
  ?>
      <?php print render($title_prefix); ?>
      <?php if (!$page): ?>
          <a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?> has received <?php print $received; ?> and granted <?php print $granted; ?></a> since <?php print $year; ?>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
  <?php endif; ?>

<?php if (!$teaser): ?>
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
  <?php if ($display_submitted): ?>
    <footer class="node__submitted">
      <?php print $user_picture; ?>
      <p class="submitted"><?php print $submitted; ?></p>
    </footer>
  <?php endif; ?>
<?php endif; ?>
</article>
