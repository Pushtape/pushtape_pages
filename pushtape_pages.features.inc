<?php
/**
 * @file
 * pushtape_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-6']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-7']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->css = ''; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['0'] = 'new-5'; /* WAS: 'new-6' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['1'] = 'new-6'; /* WAS: 'new-7' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['2'] = 'new-7'; /* WAS: 'new-8' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['3'] = 'new-8'; /* WAS: 'new-9' */
    unset($data['node:panopoly_page:default:default']->display->content['new-9']);
  }
  if (isset($data['node:panopoly_page:default:featured'])) {
    $data['node:panopoly_page:default:featured']->display->content['new-10']->configuration = ''; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-10']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-9'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['0'] = 'new-9'; /* WAS: 'new-10' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['1'] = 'new-10'; /* WAS: 'new-11' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['2'] = 'new-11'; /* WAS: 'new-12' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['3'] = 'new-12'; /* WAS: 'new-13' */
    unset($data['node:panopoly_page:default:featured']->display->content['new-13']);
  }
  if (isset($data['node:panopoly_page:default:teaser'])) {
    $data['node:panopoly_page:default:teaser']->display->content['new-13'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['formatter'] = 'text_summary_or_trimmed'; /* WAS: 'image' */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['formatter_settings']['trim_length'] = 600; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->position = 1; /* WAS: 0 */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->subtype = 'node:body'; /* WAS: 'node:field_featured_image' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['build_mode'] = 'teaser'; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['identifier'] = ''; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['link'] = TRUE; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['override_title'] = FALSE; /* WAS: 1 */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->css = ''; /* WAS: array() */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->position = 2; /* WAS: 1 */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->subtype = 'node_links'; /* WAS: 'node:body' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->type = 'node_links'; /* WAS: 'entity_field' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain']['0'] = 'new-13'; /* WAS: 'new-14' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain']['1'] = 'new-14'; /* WAS: 'new-15' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain']['2'] = 'new-15'; /* WAS: 'new-16' */
    unset($data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['formatter_settings']['image_link']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['formatter_settings']['image_style']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['delta_limit']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['delta_offset']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['delta_reversed']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['formatter']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['formatter_settings']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['label']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-16']);
  }
}
