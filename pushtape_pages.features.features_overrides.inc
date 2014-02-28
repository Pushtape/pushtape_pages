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
      'subtype' => 'node:field_featured_categories',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'taxonomy_term_reference_link',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|css"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|0"] = 'new-5';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|1"] = 'new-6';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|2"] = 'new-7';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|3"] = 'new-8';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|configuration"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-13"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-9"] = (object) array(
      'pid' => 'new-9',
      'panel' => 'contentmain',
      'type' => 'node_links',
      'subtype' => 'node_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => '',
      'cache' => array(),
      'css' => '',
      'extras' => array(),
      'position' => 3,
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
          'image_link' => 'content',
          'image_style' => 'panopoly_image_quarter',
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
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|formatter"] = 'text_summary_or_trimmed';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|formatter_settings|image_link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|formatter_settings|image_style"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|configuration|formatter_settings|trim_length"] = 600;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|position"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|subtype"] = 'node:body';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|build_mode"] = 'teaser';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|identifier"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|link"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|configuration|override_title"] = FALSE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|css"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|position"] = 2;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|subtype"] = 'node_links';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|type"] = 'node_links';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-16"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|0"] = 'new-13';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|1"] = 'new-14';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|2"] = 'new-15';

 return $overrides;
}
