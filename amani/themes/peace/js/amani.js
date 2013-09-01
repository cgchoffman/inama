/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */
// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

Drupal.behaviors.heritageTheme = {
  attach: function (context, settings) {

    // a simple window preloader.
    // wait until the entire site has been loaded.
    $(window).load(function() {
      // Load functions
    });

    $(document).scroll(function() {
      // scroll functions.
      var h = $('#header').height();
      var y = $(window).scrollTop();
      //lert(y);
      if( y > (h - 50)) {
       // if we are show keyboardTips
       $("#block-superfish-1").addClass('fixed');
      } else {
       $('#block-superfish-1').removeClass('fixed');
      }
    });

    // All other functions upon load.
    // $('.field-name-field-screenshots .field-items:not(.processed)').addClass('processed').bxSlider({
    //   buildPager: function(slideIndex){
    //     switch(slideIndex){
    //       case 0:
    //         return '<img src="http://localhost/riskiq/core/sites/default/files/esl101_0.png">';
    //       case 1:
    //         return '<img src="/images/thumbs/houses.jpg">';
    //       case 2:
    //         return '<img src="/images/thumbs/hill_fence.jpg">';
    //     }
    //   }
    // });

    // Mobile menu functionality
    $('.mobile-menu-link:not(.processed)').addClass('processed').click(function() {
      $(this).siblings('.sf-menu').slideToggle();
      return false;
    });

    // text fields
    $('#edit-keys-wrapper input:not(.processed)').addClass('processed').each(function() {
     if($(this).val() != '') {
        $(this).parents('.views-widget').siblings('label').fadeOut();
      }
      $(this).focus(function() {
        $(this).parents('.views-widget').siblings('label').fadeOut();
      });
      $(this).blur(function() {
        if($(this).val() != '') {
          $(this).parents('.views-widget').siblings('label').fadeOut();
        } else {
          $(this).parents('.views-widget').siblings('label').fadeIn();
        }
      });
    });

  } // close "attach".
} // close "behaviors".

})(jQuery, Drupal, this, this.document);