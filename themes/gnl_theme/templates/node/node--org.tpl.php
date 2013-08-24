<?php
$received = ($content['gnl_fields_org_grants_received']['#markup']) ? render($content['gnl_fields_org_grants_received']) : NULL;
$granted = ($content['gnl_fields_org_grants_funded']['#markup']) ? render($content['gnl_fields_org_grants_funded']) : NULL;
$year = ($content['gnl_fields_org_grants_datestart']['#markup']) ? render($content['gnl_fields_org_grants_datestart']) : NULL;
?>

  <?php if (!empty($title_prefix) || !empty($title_suffix) || !$page): ?>

      <?php print render($title_prefix); ?>
      <?php if (!$page): ?>
          <a href="<?php print $node_url; ?>" rel="bookmark"><?php
            print $title;
            // if ($received || $granted) { print ' has '; }
            print '<h2 class="funding-stats">';
            if ($received) { print 'received ' . $received; }
            if ($received && $granted) { print ' <br> '; }
            if ($granted) { print ' granted ' . $granted; }
            print '</h2>';
            if ($year) { print '<p class="timeframe">since ' . $year . '</p>'; }
          ?></a>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
  <?php endif; ?>

<article<?php print $attributes; ?>>

<?php if (!$teaser): ?>
  <div<?php print $content_attributes; ?>>
    <?php if ($received) { ?>
      <h2 class="grants-received">
          <?php print $received . ' received '; ?>
      </h2>
    <?php } ?>

    <?php if ($granted) { ?>
      <h2 class="grants-given">
          <?php print $granted . ' given'; ?>
      </h2>
    <?php } ?>

    <?php if ($year) { ?>
      <p class="timeframe">
          <?php print 'since ' . $year; ?>
      </p>
    <?php } ?>

    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      // Also hide stuff that we output in a special way
      hide($content['gnl_fields_org_grants_received']);
      hide($content['gnl_fields_org_grants_funded']);
      hide($content['gnl_fields_org_grants_datestart']);
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
