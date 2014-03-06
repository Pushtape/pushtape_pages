<?php
/**
 * @file
 * pushtape_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pushtape_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-panopoly_page-body.settings|better_formats"] = array(
    'allowed_formats' => array(
      'filtered_html' => 0,
      'full_html' => 0,
      'panopoly_html_text' => 'panopoly_html_text',
      'panopoly_wysiwyg_text' => 'panopoly_wysiwyg_text',
      'plain_text' => 'plain_text',
    ),
    'allowed_formats_toggle' => 1,
    'default_order_toggle' => 0,
    'default_order_wrapper' => array(
      'formats' => array(
        'filtered_html' => array(
          'weight' => 0,
        ),
        'full_html' => array(
          'weight' => 1,
        ),
        'panopoly_html_text' => array(
          'weight' => -9,
        ),
        'panopoly_wysiwyg_text' => array(
          'weight' => -10,
        ),
        'plain_text' => array(
          'weight' => 10,
        ),
      ),
    ),
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|module"] = 'media';
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|allowed_schemes"] = array(
    'oembed' => 0,
    'public' => 'public',
    'vimeo' => 0,
    'youtube' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|allowed_types"] = array(
    'audio' => 0,
    'document' => 0,
    'image' => 'image',
    'video' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|browser_plugins"] = array(
    'media_default--media_browser_1' => 0,
    'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
    'media_internet' => 0,
    'upload' => 'upload',
    'youtube' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|preview_image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|type"] = 'media_generic';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:panopoly_page:default.css_id"] = 'page';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|fields_override"] = array(
    'field_featured_image' => 0,
    'title' => 1,
    'body' => 0,
  );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|header_type"] = 'none';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|override_title"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|view_mode"] = 'teaser';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|view_settings"] = 'fields';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|widget_title"] = 'Recent News';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|panel"] = 'sidebar';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|position"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|subtype"] = 'news-panel_pane_2';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|layout"] = 'floyd_flipped';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|contentmain|3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|sidebar|0"] = 'new-4';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-5"] = (object) array(
      'pid' => 'new-5',
      'panel' => 'contentmain',
      'type' => 'entity_field',
      'subtype' => 'node:field_featured_image',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'image',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'image_style' => 'panopoly_image_half',
          'image_link' => '',
        ),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => '',
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|configuration|formatter"] = 'text_default';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|configuration|formatter_settings|image_link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|configuration|formatter_settings|image_style"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|position"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|subtype"] = 'node:body';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|build_mode"] = 'default';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|identifier"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|link"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|override_title"] = FALSE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|css"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|position"] = 2;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|subtype"] = 'node_links';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|type"] = 'node_links';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|delta_reversed"] = FALSE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|formatter"] = 'taxonomy_term_reference_link';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|formatter_settings"] = array();
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|label"] = 'inline';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|css"] = array();
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|position"] = 3;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|subtype"] = 'node:field_featured_categories';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|0"] = 'new-5';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|1"] = 'new-6';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|2"] = 'new-7';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|3"] = 'new-8';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|configuration"] = array(
    'link' => 1,
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|position"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|subtype"] = 'node_title';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|type"] = 'node_title';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|configuration|delta_reversed"] = FALSE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|configuration|formatter"] = 'text_summary_or_trimmed';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|configuration|override_title"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|position"] = 2;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|subtype"] = 'node:body';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|configuration"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|css"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|position"] = 3;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|subtype"] = 'node_links';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|type"] = 'node_links';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-13"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-9"] = (object) array(
      'pid' => 'new-9',
      'panel' => 'contentmain',
      'type' => 'entity_field',
      'subtype' => 'node:field_featured_image',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => '',
      'cache' => array(),
      'style' => '',
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|0"] = 'new-9';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|1"] = 'new-10';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|2"] = 'new-11';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|3"] = 'new-12';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-13"] = (object) array(
      'pid' => 'new-13',
      'panel' => 'contentmain',
      'type' => 'entity_field',
      'subtype' => 'node:body',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'text_summary_or_trimmed',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'trim_length' => 600,
        ),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => '',
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|build_mode"] = 'teaser';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|identifier"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|link"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|override_title"] = FALSE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|css"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|position"] = 2;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|subtype"] = 'node_links';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|type"] = 'node_links';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|formatter"] = 'image';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|formatter_settings|image_link"] = 'content';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|formatter_settings|image_style"] = 'panopoly_image_quarter';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|formatter_settings|trim_length"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|position"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|subtype"] = 'node:field_featured_image';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-16"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|0"] = 'new-13';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|1"] = 'new-14';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|2"] = 'new-15';

 return $overrides;
}
