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
      'type' => 'node_links',
      'subtype' => 'node_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'override_title' => FALSE,
        'override_title_text' => '',
        'build_mode' => 'default',
        'identifier' => '',
        'link' => TRUE,
      ),
      'cache' => array(),
      'css' => '',
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|configuration|formatter"] = 'taxonomy_term_reference_link';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|configuration|formatter_settings|image_link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|configuration|formatter_settings|image_style"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|configuration|label"] = 'inline';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|position"] = 3;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6|subtype"] = 'node:field_featured_categories';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|formatter"] = 'image';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|formatter_settings|image_link"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|configuration|formatter_settings|image_style"] = 'panopoly_image_half';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|position"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7|subtype"] = 'node:field_featured_image';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|delta_reversed"] = FALSE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|formatter"] = 'text_default';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|formatter_settings"] = array();
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|css"] = array();
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|position"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|subtype"] = 'node:body';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|0"] = 'new-5';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|1"] = 'new-6';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|2"] = 'new-7';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|3"] = 'new-8';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|configuration"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|css"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|position"] = 3;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|subtype"] = 'node_links';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10|type"] = 'node_links';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|configuration"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|position"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|subtype"] = 'node:field_featured_image';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|configuration|link"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|position"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|subtype"] = 'node_title';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12|type"] = 'node_title';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-13"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-9"] = (object) array(
      'pid' => 'new-9',
      'panel' => 'contentmain',
      'type' => 'entity_field',
      'subtype' => 'node:body',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter' => 'text_summary_or_trimmed',
        'label' => 'hidden',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|0"] = 'new-9';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|1"] = 'new-10';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|2"] = 'new-11';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|3"] = 'new-12';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-13"] = (object) array(
      'pid' => 'new-13',
      'panel' => 'contentmain',
      'type' => 'node_links',
      'subtype' => 'node_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'override_title' => FALSE,
        'override_title_text' => '',
        'build_mode' => 'teaser',
        'identifier' => '',
        'link' => TRUE,
      ),
      'cache' => array(),
      'css' => '',
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15|style"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-16"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|0"] = 'new-13';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|1"] = 'new-14';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|2"] = 'new-15';

 return $overrides;
}
