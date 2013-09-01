<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <!-- ______________________ HEADER _______________________ -->

  <header id="header" class="container">
    <div class="container-inner">

      <?php if ($site_name || $site_slogan): ?>
        <hgroup id="name-and-slogan">

          <?php if ($site_name): ?>
            <div id="site-name">
              <a href="<?php print $front_page; ?>" style="background-image: url('<?php print $logo; ?>');" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
            </div>
          <?php endif; ?>
          <?php if ($site_slogan): ?>
            <div class="site-slogan"><?php print $site_slogan; ?></div>
          <?php endif; ?>

        </hgroup>
      <?php endif; ?>

      <?php if ($page['header']): ?>
        <div id="header-region">
          <?php print render($page['header']); ?>
        </div>
      <?php endif; ?>


      <?php if ($page['navigation_region']): ?>
        <nav id="navigation" class="container menu <?php if (!empty($main_menu)) {print "with-primary";}
          if (!empty($secondary_menu)) {print " with-secondary";} ?>">
          <div class="container-inner">
            <?php print render($page['navigation_region']); ?>
          </div>
        </nav> <!-- /navigation -->
      <?php endif; ?>
    </div>
  </header> <!-- /header -->

  <!-- Content top -->

  <?php if($page['home_content_top_rotator'] || $page['home_content_top_callout_right'] || $page['home_content_top_static_region']): ?>
    <section id="content-top" class="clearfix" class="container">
      <div class="container-inner">
        <?php if ($page['home_content_top_rotator']): ?>
          <?php print render($page['home_content_top_rotator']); ?>
        <?php endif; ?>

        <?php if ($page['home_content_top_callout_right']): ?>
          <?php print render($page['home_content_top_callout_right']); ?>
        <?php endif; ?>

        <?php if ($page['home_content_top_static_region']): ?>
          <?php print render($page['home_content_top_static_region']); ?>
        <?php endif; ?>
      </div>
    </section>
  <?php endif; ?>

  <!-- ______________________ MAIN _______________________ -->

  <div id="main" class="clearfix" class="container">
    <div class="container-inner">

      <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
        <div id="content-header">

          <?php print $breadcrumb; ?>

          <?php if ($page['highlighted']): ?>
            <div id="highlighted"><?php print render($page['highlighted']) ?></div>
          <?php endif; ?>

          <?php print render($title_prefix); ?>

          <?php if ($title): ?>
            <h1 class="title"><?php print $title; ?></h1>
          <?php endif; ?>

          <?php print render($title_suffix); ?>
          <?php print $messages; ?>
          <?php print render($page['help']); ?>

          <?php if ($tabs): ?>
            <div class="tabs"><?php print render($tabs); ?></div>
          <?php endif; ?>

          <?php if ($action_links): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>

        </div> <!-- /#content-header -->
      <?php endif; ?>

      <section id="content">

          <div id="content-area">
            <?php print render($page['content']) ?>
          </div>

          <?php if(!empty($page['map_region_2x'])): ?>
            <?php print render($page['map_region_2x']) ?>
          <?php endif; ?>

          <?php if(!empty($page['map_region_3x'])): ?>
            <?php print render($page['map_region_3x']) ?>
          <?php endif; ?>

          <?php print $feed_icons; ?>

      </section> <!-- /content-inner /content -->

      <?php if ($page['sidebar_first']): ?>
        <aside id="sidebar-first" class="column sidebar first">
          <?php print render($page['sidebar_first']); ?>
        </aside>
      <?php endif; ?> <!-- /sidebar-first -->

      <?php if ($page['sidebar_second']): ?>
        <aside id="sidebar-second" class="column sidebar second">
          <?php print render($page['sidebar_second']); ?>
        </aside>
      <?php endif; ?> <!-- /sidebar-second -->
    </div>

    <?php if(!empty($page['content_bottom'])): ?>
      <div class="container-inner">
        <?php print render($page['content_bottom']) ?>
      </div>
    <?php endif; ?>

  </div> <!-- /main -->

  <!-- ______________________ FOOTER _______________________ -->

  <?php if ($page['footer']): ?>
    <footer id="footer" class="container">
      <div class="container-inner">
        <?php print render($page['footer']); ?>
      </div>
    </footer> <!-- /footer -->
  <?php endif; ?>

</div> <!-- /page -->
