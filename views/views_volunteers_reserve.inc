<?php

$view = new view();
$view->name = 'volunteers_availability_reserve';
$view->description = '';
$view->tag = 'oxfam';
$view->base_table = 'civicrm_contact';
$view->human_name = 'Volunteers availability (reserve)';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Volunteers availability (Reserve)';
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
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve MA ochtend */
$handler->display->display_options['fields']['reserve_ma_ochtend_45']['id'] = 'reserve_ma_ochtend_45';
$handler->display->display_options['fields']['reserve_ma_ochtend_45']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_ma_ochtend_45']['field'] = 'reserve_ma_ochtend_45';
$handler->display->display_options['fields']['reserve_ma_ochtend_45']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_ma_ochtend_45']['label'] = 'MA ochtend';
$handler->display->display_options['fields']['reserve_ma_ochtend_45']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve MA middag */
$handler->display->display_options['fields']['reserve_ma_middag_46']['id'] = 'reserve_ma_middag_46';
$handler->display->display_options['fields']['reserve_ma_middag_46']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_ma_middag_46']['field'] = 'reserve_ma_middag_46';
$handler->display->display_options['fields']['reserve_ma_middag_46']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_ma_middag_46']['label'] = 'MA middag';
$handler->display->display_options['fields']['reserve_ma_middag_46']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve DI ochtend */
$handler->display->display_options['fields']['reserve_di_ochtend_47']['id'] = 'reserve_di_ochtend_47';
$handler->display->display_options['fields']['reserve_di_ochtend_47']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_di_ochtend_47']['field'] = 'reserve_di_ochtend_47';
$handler->display->display_options['fields']['reserve_di_ochtend_47']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_di_ochtend_47']['label'] = 'DI ochtend';
$handler->display->display_options['fields']['reserve_di_ochtend_47']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve DI middag */
$handler->display->display_options['fields']['reserve_di_middag_48']['id'] = 'reserve_di_middag_48';
$handler->display->display_options['fields']['reserve_di_middag_48']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_di_middag_48']['field'] = 'reserve_di_middag_48';
$handler->display->display_options['fields']['reserve_di_middag_48']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_di_middag_48']['label'] = 'DI middag';
$handler->display->display_options['fields']['reserve_di_middag_48']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve WO ochtend */
$handler->display->display_options['fields']['reserve_wo_ochtend_49']['id'] = 'reserve_wo_ochtend_49';
$handler->display->display_options['fields']['reserve_wo_ochtend_49']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_wo_ochtend_49']['field'] = 'reserve_wo_ochtend_49';
$handler->display->display_options['fields']['reserve_wo_ochtend_49']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_wo_ochtend_49']['label'] = 'WO ochtend';
$handler->display->display_options['fields']['reserve_wo_ochtend_49']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve WO middag */
$handler->display->display_options['fields']['reserve_wo_middag_50']['id'] = 'reserve_wo_middag_50';
$handler->display->display_options['fields']['reserve_wo_middag_50']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_wo_middag_50']['field'] = 'reserve_wo_middag_50';
$handler->display->display_options['fields']['reserve_wo_middag_50']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_wo_middag_50']['label'] = 'WO middag';
$handler->display->display_options['fields']['reserve_wo_middag_50']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve DO ochtend */
$handler->display->display_options['fields']['reserve_do_ochtend_51']['id'] = 'reserve_do_ochtend_51';
$handler->display->display_options['fields']['reserve_do_ochtend_51']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_do_ochtend_51']['field'] = 'reserve_do_ochtend_51';
$handler->display->display_options['fields']['reserve_do_ochtend_51']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_do_ochtend_51']['label'] = 'DO ochtend';
$handler->display->display_options['fields']['reserve_do_ochtend_51']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve DO middag */
$handler->display->display_options['fields']['reserve_do_middag_52']['id'] = 'reserve_do_middag_52';
$handler->display->display_options['fields']['reserve_do_middag_52']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_do_middag_52']['field'] = 'reserve_do_middag_52';
$handler->display->display_options['fields']['reserve_do_middag_52']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_do_middag_52']['label'] = 'DO middag';
$handler->display->display_options['fields']['reserve_do_middag_52']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve VR ochtend */
$handler->display->display_options['fields']['reserve_vr_ochtend_53']['id'] = 'reserve_vr_ochtend_53';
$handler->display->display_options['fields']['reserve_vr_ochtend_53']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_vr_ochtend_53']['field'] = 'reserve_vr_ochtend_53';
$handler->display->display_options['fields']['reserve_vr_ochtend_53']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_vr_ochtend_53']['label'] = 'VR ochtend';
$handler->display->display_options['fields']['reserve_vr_ochtend_53']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve VR middag */
$handler->display->display_options['fields']['reserve_vr_middag_54']['id'] = 'reserve_vr_middag_54';
$handler->display->display_options['fields']['reserve_vr_middag_54']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_vr_middag_54']['field'] = 'reserve_vr_middag_54';
$handler->display->display_options['fields']['reserve_vr_middag_54']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_vr_middag_54']['label'] = 'VR middag';
$handler->display->display_options['fields']['reserve_vr_middag_54']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve ZA ochtend */
$handler->display->display_options['fields']['reserve_za_ochtend_55']['id'] = 'reserve_za_ochtend_55';
$handler->display->display_options['fields']['reserve_za_ochtend_55']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_za_ochtend_55']['field'] = 'reserve_za_ochtend_55';
$handler->display->display_options['fields']['reserve_za_ochtend_55']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_za_ochtend_55']['label'] = 'ZA ochtend';
$handler->display->display_options['fields']['reserve_za_ochtend_55']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Custom: beschikbaarheid vrijwilligers 2handswinkel: Reserve ZA middag */
$handler->display->display_options['fields']['reserve_za_middag_56']['id'] = 'reserve_za_middag_56';
$handler->display->display_options['fields']['reserve_za_middag_56']['table'] = 'civicrm_value_beschikbaarheid_vrijwilligers_2handswinkel_8';
$handler->display->display_options['fields']['reserve_za_middag_56']['field'] = 'reserve_za_middag_56';
$handler->display->display_options['fields']['reserve_za_middag_56']['relationship'] = 'relationship_id_a';
$handler->display->display_options['fields']['reserve_za_middag_56']['label'] = 'ZA middag';
$handler->display->display_options['fields']['reserve_za_middag_56']['element_label_colon'] = FALSE;
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
$handler->display->display_options['path'] = 'volunteers/reserve';
$translatables['volunteers_availability_reserve'] = array(
  t('Master'),
  t('Volunteers availability (Reserve)'),
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

