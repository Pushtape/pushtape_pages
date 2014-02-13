<?php
/**
 * @file
 * pushtape_pages.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function pushtape_pages_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_page:default'])) {
    $data['node:panopoly_page:default']->css_id = 'page'; /* WAS: 'page-page' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['fields_override'] = array(
      'field_featured_image' => 0,
      'title' => 1,
      'body' => 0,
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['header_type'] = 'none'; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['override_title'] = ''; /* WAS: 0 */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['view_mode'] = 'teaser'; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['view_settings'] = 'fields'; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['widget_title'] = 'Recent News'; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->panel = 'sidebar'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default']->display->content['new-4']->position = 0; /* WAS: 3 */
    $data['node:panopoly_page:default']->display->content['new-4']->subtype = 'news-panel_pane_2'; /* WAS: 'node:field_featured_categories' */
    $data['node:panopoly_page:default']->display->content['new-4']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['node:panopoly_page:default']->display->layout = 'floyd_flipped'; /* WAS: 'bryant' */
    $data['node:panopoly_page:default']->display->panels['sidebar']['0'] = 'new-4'; /* WAS: 'new-5' */
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['context']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['delta_limit']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['delta_offset']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['delta_reversed']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['formatter']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['formatter_settings']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['label']);
    unset($data['node:panopoly_page:default']->display->content['new-5']);
    unset($data['node:panopoly_page:default']->display->panels['contentmain']['3']);
  }
  if (isset($data['node:panopoly_page:default:default'])) {
    $data['node:panopoly_page:default:default']->display->content['new-5'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-6']->configuration['formatter'] = 'taxonomy_term_reference_link'; /* WAS: 'image' */
    $data['node:panopoly_page:default:default']->display->content['new-6']->configuration['label'] = 'inline'; /* WAS: 'hidden' */
    $data['node:panopoly_page:default:default']->display->content['new-6']->position = 3; /* WAS: 0 */
    $data['node:panopoly_page:default:default']->display->content['new-6']->subtype = 'node:field_featured_categories'; /* WAS: 'node:field_featured_image' */
    $data['node:panopoly_page:default:default']->display->content['new-7']->configuration['formatter'] = 'image'; /* WAS: 'text_default' */
    $data['node:panopoly_page:default:default']->display->content['new-7']->configuration['formatter_settings']['image_link'] = ''; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-7']->configuration['formatter_settings']['image_style'] = 'panopoly_image_half'; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-7']->position = 0; /* WAS: 1 */
    $data['node:panopoly_page:default:default']->display->content['new-7']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-7']->subtype = 'node:field_featured_image'; /* WAS: 'node:body' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['formatter'] = 'text_default'; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['formatter_settings'] = array(); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['label'] = 'hidden'; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['override_title'] = 1; /* WAS: FALSE */
    $data['node:panopoly_page:default:default']->display->content['new-8']->css = array(); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->position = 1; /* WAS: 2 */
    $data['node:panopoly_page:default:default']->display->content['new-8']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->subtype = 'node:body'; /* WAS: 'node_links' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->type = 'entity_field'; /* WAS: 'node_links' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['0'] = 'new-5'; /* WAS: 'new-6' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['1'] = 'new-6'; /* WAS: 'new-7' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['2'] = 'new-7'; /* WAS: 'new-8' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['3'] = 'new-8'; /* WAS: 'new-9' */
    unset($data['node:panopoly_page:default:default']->display->content['new-6']->configuration['formatter_settings']['image_link']);
    unset($data['node:panopoly_page:default:default']->display->content['new-6']->configuration['formatter_settings']['image_style']);
    unset($data['node:panopoly_page:default:default']->display->content['new-8']->configuration['build_mode']);
    unset($data['node:panopoly_page:default:default']->display->content['new-8']->configuration['identifier']);
    unset($data['node:panopoly_page:default:default']->display->content['new-8']->configuration['link']);
    unset($data['node:panopoly_page:default:default']->display->content['new-9']);
  }
  if (isset($data['node:panopoly_page:default:featured'])) {
    $data['node:panopoly_page:default:featured']->display->content['new-10']->configuration = ''; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-10']->css = ''; /* WAS: array() */
    $data['node:panopoly_page:default:featured']->display->content['new-10']->position = 3; /* WAS: 0 */
    $data['node:panopoly_page:default:featured']->display->content['new-10']->subtype = 'node_links'; /* WAS: 'node:field_featured_image' */
    $data['node:panopoly_page:default:featured']->display->content['new-10']->type = 'node_links'; /* WAS: 'entity_field' */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->configuration = ''; /* WAS: array(
      'link' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    ) */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->position = 0; /* WAS: 1 */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->subtype = 'node:field_featured_image'; /* WAS: 'node_title' */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->type = 'entity_field'; /* WAS: 'node_title' */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->configuration['link'] = 1; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->configuration['override_title'] = 1; /* WAS: 0 */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->position = 1; /* WAS: 2 */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->subtype = 'node_title'; /* WAS: 'node:body' */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->type = 'node_title'; /* WAS: 'entity_field' */
    $data['node:panopoly_page:default:featured']->display->content['new-9'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['0'] = 'new-9'; /* WAS: 'new-10' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['1'] = 'new-10'; /* WAS: 'new-11' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['2'] = 'new-11'; /* WAS: 'new-12' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['3'] = 'new-12'; /* WAS: 'new-13' */
    unset($data['node:panopoly_page:default:featured']->display->content['new-12']->configuration['delta_limit']);
    unset($data['node:panopoly_page:default:featured']->display->content['new-12']->configuration['delta_offset']);
    unset($data['node:panopoly_page:default:featured']->display->content['new-12']->configuration['delta_reversed']);
    unset($data['node:panopoly_page:default:featured']->display->content['new-12']->configuration['formatter']);
    unset($data['node:panopoly_page:default:featured']->display->content['new-12']->configuration['label']);
    unset($data['node:panopoly_page:default:featured']->display->content['new-13']);
  }
  if (isset($data['node:panopoly_page:default:teaser'])) {
    $data['node:panopoly_page:default:teaser']->display->content['new-13'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain']['0'] = 'new-13'; /* WAS: 'new-14' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain']['1'] = 'new-14'; /* WAS: 'new-15' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain']['2'] = 'new-15'; /* WAS: 'new-16' */
    unset($data['node:panopoly_page:default:teaser']->display->content['new-16']);
  }
}
