<?php

$view = new view();
$view->name = 'volunteers_availability';
$view->description = '';
$view->tag = 'oxfam';
$view->base_table = 'civicrm_contact';
$view->human_name = 'Volunteer availability';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Volunteers availability';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
$handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'id' => 'id',
  'display_name' => 'display_name',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'display_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Kop: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<a href="/volunteers">Back to overview of volunteers</a>';
$handler->display->display_options['header']['area']['format'] = 'html';
/* Voet: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = '<h3>Volunteers reserve</h3>';
$handler->display->display_options['footer']['area']['format'] = 'html';
/* Voet: Global: View area */
$handler->display->display_options['footer']['view']['id'] = 'view';
$handler->display->display_options['footer']['view']['table'] = 'views';
$handler->display->display_options['footer']['view']['field'] = 'view';
$handler->display->display_options['footer']['view']['label'] = 'Volunteers availability (reserve)';
$handler->display->display_options['footer']['view']['view_to_insert'] = 'volunteers_availability_reserve:default';
$handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
/* Relationship: CiviCRM Contacts: CiviCRM Relationship (starting from contact A) */
$handler->display->display_options['relationships']['relationship_id_a']['id'] = 'relationship_id_a';
$handler->display->display_options['relationships']['relationship_id_a']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['relationship_id_a']['field'] = 'relationship_id_a';
$handler->display->display_options['relationships']['relationship_id_a']['label'] = 'volunteer_for';
$handler->display->display_options['relationships']['relationship_id_a']['required'] = TRUE;
$handler->display->display_options['relationships']['relationship_id_a']['relationship_type'] = '5';
/* Relationship: CiviCRM Relationships: Contact ID B */
$handler->display->display_options['relationships']['contact_id_b_']['id'] = 'contact_id_b_';
$handler->display->display_options['relationships']['contact_id_b_']['table'] = 'civicrm_relationship';
$handler->display->display_options['relationships']['contact_id_b_']['field'] = 'contact_id_b_';
$handler->display->display_options['relationships']['contact_id_b_']['relationship'] = 'relationship_id_a';
$handler->display->display_options['relationships']['contact_id_b_']['label'] = 'shop';
$handler->display->display_options['relationships']['contact_id_b_']['required'] = TRUE;
/* Relationship: CiviCRM Contacts: CiviCRM Relationship (starting from Contact B) */
$handler->display->display_options['relationships']['relationship_id_b']['id'] = 'relationship_id_b';
$handler->display->display_options['relationships']['relationship_id_b']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['relationship_id_b']['field'] = 'relationship_id_b';
$handler->display->display_options['relationships']['relationship_id_b']['relationship'] = 'contact_id_b_';
$handler->display->display_options['relationships']['relationship_id_b']['label'] = 'manager_of';
$handler->display->display_options['relationships']['relationship_id_b']['required'] = TRUE;
$handler->display->display_options['relationships']['relationship_id_b']['relationship_type'] = '15';
/* Relationship: CiviCRM Relationships: Contact ID A */
$handler->display->display_options['relationships']['contact_id_a_']['id'] = 'contact_id_a_';
$handler->display->display_options['relationships']['contact_id_a_']['table'] = 'civicrm_relationship';
$handler->display->display_options['relationships']['contact_id_a_']['field'] = 'contact_id_a_';
$handler->display->display_options['relationships']['contact_id_a_']['relationship'] = 'relationship_id_b';
$handler->display->display_options['relationships']['contact_id_a_']['label'] = 'manager';
$handler->display->display_options['relationships']['contact_id_a_']['required'] = TRUE;
/* Relationship: CiviCRM Contacts: Drupal ID */
$handler->display->display_options['relationships']['drupal_id']['id'] = 'drupal_id';
$handler->display->display_options['relationships']['drupal_id']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['drupal_id']['field'] = 'drupal_id';
$handler->display->display_options['relationships']['drupal_id']['relationship'] = 'contact_id_a_';
$handler->display->display_options['relationships']['drupal_id']['label'] = 'user';
$handler->display->display_options['relationships']['drupal_id']['required'] = TRUE;
/* Veld: CiviCRM Contacts: Contact ID */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['id']['field'] = 'id';
$handler->display->display_options['fields']['id']['label'] = '';
$handler->display->display_options['fields']['id']['exclude'] = TRUE;
$handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
/* Veld: Shop ID */
$handler->display->display_options['fields']['id_1']['id'] = 'id_1';
$handler->display->display_options['fields']['id_1']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['id_1']['field'] = 'id';
$handler->display->display_options['fields']['id_1']['relationship'] = 'contact_id_b_';
$handler->display->display_options['fields']['id_1']['ui_name'] = 'Shop ID';
$handler->display->display_options['fields']['id_1']['label'] = '';
$handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['id_1']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Contacts: Display Name */
$handler->display->display_options['fields']['display_name_1']['id'] = 'display_name_1';
$handler->display->display_options['fields']['display_name_1']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['display_name_1']['field'] = 'display_name';
$handler->display->display_options['fields']['display_name_1']['label'] = 'Vrijwilliger';
$handler->display->display_options['fields']['display_name_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['display_name_1']['alter']['path'] = 'volunteers/edit?cid1=[id]&cid2=[id_1]';
$handler->display->display_options['fields']['display_name_1']['link_to_civicrm_contact'] = 0;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar MA ochtend */
$handler->display->display_options['fields']['beschikbaar_ma_ochtend_33']['id'] = 'beschikbaar_ma_ochtend_33';
$handler->display->display_options['fields']['beschikbaar_ma_ochtend_33']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_ma_ochtend_33']['field'] = 'beschikbaar_ma_ochtend_33';
$handler->display->display_options['fields']['beschikbaar_ma_ochtend_33']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_ma_ochtend_33']['label'] = 'MA ochtend';
$handler->display->display_options['fields']['beschikbaar_ma_ochtend_33']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar MA middag */
$handler->display->display_options['fields']['beschikbaar_ma_middag_34']['id'] = 'beschikbaar_ma_middag_34';
$handler->display->display_options['fields']['beschikbaar_ma_middag_34']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_ma_middag_34']['field'] = 'beschikbaar_ma_middag_34';
$handler->display->display_options['fields']['beschikbaar_ma_middag_34']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_ma_middag_34']['label'] = 'MA middag';
$handler->display->display_options['fields']['beschikbaar_ma_middag_34']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar DI ochtend */
$handler->display->display_options['fields']['beschikbaar_di_ochtend_35']['id'] = 'beschikbaar_di_ochtend_35';
$handler->display->display_options['fields']['beschikbaar_di_ochtend_35']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_di_ochtend_35']['field'] = 'beschikbaar_di_ochtend_35';
$handler->display->display_options['fields']['beschikbaar_di_ochtend_35']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_di_ochtend_35']['label'] = 'DI ochtend';
$handler->display->display_options['fields']['beschikbaar_di_ochtend_35']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar DI middag */
$handler->display->display_options['fields']['beschikbaar_di_middag_36']['id'] = 'beschikbaar_di_middag_36';
$handler->display->display_options['fields']['beschikbaar_di_middag_36']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_di_middag_36']['field'] = 'beschikbaar_di_middag_36';
$handler->display->display_options['fields']['beschikbaar_di_middag_36']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_di_middag_36']['label'] = 'DI middag';
$handler->display->display_options['fields']['beschikbaar_di_middag_36']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar WO ochtend */
$handler->display->display_options['fields']['beschikbaar_wo_ochtend_37']['id'] = 'beschikbaar_wo_ochtend_37';
$handler->display->display_options['fields']['beschikbaar_wo_ochtend_37']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_wo_ochtend_37']['field'] = 'beschikbaar_wo_ochtend_37';
$handler->display->display_options['fields']['beschikbaar_wo_ochtend_37']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_wo_ochtend_37']['label'] = 'WO ochtend';
$handler->display->display_options['fields']['beschikbaar_wo_ochtend_37']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar WO middag */
$handler->display->display_options['fields']['beschikbaar_wo_middag_38']['id'] = 'beschikbaar_wo_middag_38';
$handler->display->display_options['fields']['beschikbaar_wo_middag_38']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_wo_middag_38']['field'] = 'beschikbaar_wo_middag_38';
$handler->display->display_options['fields']['beschikbaar_wo_middag_38']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_wo_middag_38']['label'] = 'WO middag';
$handler->display->display_options['fields']['beschikbaar_wo_middag_38']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar DO ochtend */
$handler->display->display_options['fields']['beschikbaar_do_ochtend_39']['id'] = 'beschikbaar_do_ochtend_39';
$handler->display->display_options['fields']['beschikbaar_do_ochtend_39']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_do_ochtend_39']['field'] = 'beschikbaar_do_ochtend_39';
$handler->display->display_options['fields']['beschikbaar_do_ochtend_39']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_do_ochtend_39']['label'] = 'DO ochtend';
$handler->display->display_options['fields']['beschikbaar_do_ochtend_39']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar DO middag */
$handler->display->display_options['fields']['beschikbaar_do_middag_40']['id'] = 'beschikbaar_do_middag_40';
$handler->display->display_options['fields']['beschikbaar_do_middag_40']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_do_middag_40']['field'] = 'beschikbaar_do_middag_40';
$handler->display->display_options['fields']['beschikbaar_do_middag_40']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_do_middag_40']['label'] = 'DO middag';
$handler->display->display_options['fields']['beschikbaar_do_middag_40']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar VR ochtend */
$handler->display->display_options['fields']['beschikbaar_vr_ochtend_41']['id'] = 'beschikbaar_vr_ochtend_41';
$handler->display->display_options['fields']['beschikbaar_vr_ochtend_41']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_vr_ochtend_41']['field'] = 'beschikbaar_vr_ochtend_41';
$handler->display->display_options['fields']['beschikbaar_vr_ochtend_41']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_vr_ochtend_41']['label'] = 'VR ochtend';
$handler->display->display_options['fields']['beschikbaar_vr_ochtend_41']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar VR middag */
$handler->display->display_options['fields']['beschikbaar_vr_middag_42']['id'] = 'beschikbaar_vr_middag_42';
$handler->display->display_options['fields']['beschikbaar_vr_middag_42']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_vr_middag_42']['field'] = 'beschikbaar_vr_middag_42';
$handler->display->display_options['fields']['beschikbaar_vr_middag_42']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_vr_middag_42']['label'] = 'VR middag';
$handler->display->display_options['fields']['beschikbaar_vr_middag_42']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar ZA ochtend */
$handler->display->display_options['fields']['beschikbaar_za_ochtend_43']['id'] = 'beschikbaar_za_ochtend_43';
$handler->display->display_options['fields']['beschikbaar_za_ochtend_43']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_za_ochtend_43']['field'] = 'beschikbaar_za_ochtend_43';
$handler->display->display_options['fields']['beschikbaar_za_ochtend_43']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_za_ochtend_43']['label'] = 'ZA ochtend';
$handler->display->display_options['fields']['beschikbaar_za_ochtend_43']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Beschikbaar ZA middag */
$handler->display->display_options['fields']['beschikbaar_za_middag_44']['id'] = 'beschikbaar_za_middag_44';
$handler->display->display_options['fields']['beschikbaar_za_middag_44']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['beschikbaar_za_middag_44']['field'] = 'beschikbaar_za_middag_44';
$handler->display->display_options['fields']['beschikbaar_za_middag_44']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['beschikbaar_za_middag_44']['label'] = 'ZA middag';
$handler->display->display_options['fields']['beschikbaar_za_middag_44']['element_label_colon'] = FALSE;
/* Sort criterion: CiviCRM Contacts: Display Name */
$handler->display->display_options['sorts']['display_name']['id'] = 'display_name';
$handler->display->display_options['sorts']['display_name']['table'] = 'civicrm_contact';
$handler->display->display_options['sorts']['display_name']['field'] = 'display_name';
/* Filter criterion: Gebruiker: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'drupal_id';
$handler->display->display_options['filters']['uid_current']['value'] = '1';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['path'] = 'volunteers/availability';
$translatables['volunteers_availability'] = array(
  t('Master'),
  t('Volunteers availability'),
  t('more'),
  t('Apply'),
  t('Opnieuw instellen'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« eerste'),
  t('‹ vorige'),
  t('volgende ›'),
  t('laatste »'),
  t('<a href="/volunteers">Back to overview of volunteers</a>'),
  t('<h3>Volunteers reserve</h3>'),
  t('Volunteers availability (reserve)'),
  t('volunteer_for'),
  t('shop'),
  t('manager_of'),
  t('manager'),
  t('user'),
  t('.'),
  t(','),
  t('Vrijwilliger'),
  t('MA ochtend'),
  t('MA middag'),
  t('DI ochtend'),
  t('DI middag'),
  t('WO ochtend'),
  t('WO middag'),
  t('DO ochtend'),
  t('DO middag'),
  t('VR ochtend'),
  t('VR middag'),
  t('ZA ochtend'),
  t('ZA middag'),
  t('Page'),
);

$views[$view->name] = $view;

