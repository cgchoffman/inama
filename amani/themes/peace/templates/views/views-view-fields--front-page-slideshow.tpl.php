<?php foreach ($fields as $id => $field): ?>
  <?php $item[$id] = $field->content; ?>
<?php endforeach; ?>

<?php //krumo($item); ?>
<div class="slideshow-item">
  <div class="left-col">
    <?php echo $item['field_image']; ?>
  </div>
  <div class="right-col">
    <h2><?php echo $item['title']; ?></h2>
    <?php echo $item['field_description']; ?>
    <?php echo $item['field_link_1']; ?>
  </div>
</div>