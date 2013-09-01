<?php

/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $sort_by: The select box to sort the view using an exposed form.
 * - $sort_order: The select box with the ASC, DESC options to define order. May be optional.
 * - $items_per_page: The select box with the available items per page. May be optional.
 * - $offset: A textfield to define the offset of the view. May be optional.
 * - $reset_button: A button to reset the exposed filter applied. May be optional.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
  ?>
<?php endif; ?>
<div class="views-exposed-form">
  <div class="views-exposed-widgets clearfix">
    
    <div id="col1" class="col">
      
      <div id="<?php print $widgets['filter-term_node_tid_depth']->id; ?>-wrapper" class="views-exposed-widget views-widget-filter-term_node_tid_depth">
        <label for="<?php print $widgets['filter-term_node_tid_depth']->id; ?>">
          <?php print $widgets['filter-term_node_tid_depth']->label; ?>
        </label>
        <div class="views-widget">
          <?php print $widgets['filter-term_node_tid_depth']->widget; ?>
        </div>
        <?php if (!empty($widgets['filter-term_node_tid_depth']->description)): ?>
          <div class="description">
            <?php print $widgets['filter-term_node_tid_depth']->description; ?>
          </div>
        <?php endif; ?>
      </div>
      
      <div id="<?php print $widgets['filter-term_node_tid_depth_1']->id; ?>-wrapper" class="views-exposed-widget views-widget-filter-term_node_tid_depth_1">
        <label for="<?php print $widgets['filter-term_node_tid_depth_1']->id; ?>">
          <?php print $widgets['filter-term_node_tid_depth_1']->label; ?>
        </label>
        <div class="views-widget">
          <?php print $widgets['filter-term_node_tid_depth_1']->widget; ?>
        </div>
        <?php if (!empty($widgets['filter-term_node_tid_depth_1']->description)): ?>
          <div class="description">
            <?php print $widgets['filter-term_node_tid_depth_1']->description; ?>
          </div>
        <?php endif; ?>
      </div>
      
    </div>
    
    <div id="col2" class="col">
      
      <div id="<?php print $widgets['filter-field_location_name_value']->id; ?>-wrapper" class="views-exposed-widget views-widget-filter-field_location_name_value">
        <label for="<?php print $widgets['filter-field_location_name_value']->id; ?>">
          <?php print $widgets['filter-field_location_name_value']->label; ?>
        </label>
        <div class="views-widget">
          <?php print $widgets['filter-field_location_name_value']->widget; ?>
        </div>
        <?php if (!empty($widgets['filter-field_location_name_value']->description)): ?>
          <div class="description">
            <?php print $widgets['filter-field_location_name_value']->description; ?>
          </div>
        <?php endif; ?>
      </div>
      
      <div id="<?php print $widgets['filter-field_date_value']->id; ?>-wrapper" class="views-exposed-widget views-widget-filter-field_date_value">
        <label for="<?php print $widgets['filter-field_date_value']->id; ?>">
          <?php print $widgets['filter-field_date_value']->label; ?>
        </label>
        <div class="views-widget">
          <?php print $widgets['filter-field_date_value']->widget; ?>
        </div>
        <?php if (!empty($widgets['filter-field_date_value']->description)): ?>
          <div class="description">
            <?php print $widgets['filter-field_date_value']->description; ?>
          </div>
        <?php endif; ?>
      </div>
      
    </div>
    
    <div id="col3" class="col">
      
      <div class="views-exposed-widget views-submit-button">
        <?php print $button; ?>
      </div>  
      
      <?php if (!empty($reset_button)): ?>
        <div class="views-exposed-widget views-reset-button">
          <?php print $reset_button; ?>
        </div>
      <?php endif; ?>
    
    </div>
    
    
    
    
    <?php if (!empty($sort_by)): ?>
      <div class="views-exposed-widget views-widget-sort-by">
        <?php print $sort_by; ?>
      </div>
      <div class="views-exposed-widget views-widget-sort-order">
        <?php print $sort_order; ?>
      </div>
    <?php endif; ?>
    
    
    <?php if (!empty($items_per_page)): ?>
      <div class="views-exposed-widget views-widget-per-page">
        <?php print $items_per_page; ?>
      </div>
    <?php endif; ?>
    
    
    <?php if (!empty($offset)): ?>
      <div class="views-exposed-widget views-widget-offset">
        <?php print $offset; ?>
      </div>
    <?php endif; ?>
    
   
    
    
  </div>
</div>
