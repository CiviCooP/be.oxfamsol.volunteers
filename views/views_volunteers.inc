<?php
	
	$view = new view();
	$view->name = 'volunteers';
	$view->description = '';
	$view->tag = 'oxfam';
	$view->base_table = 'civicrm_contact';
	$view->human_name = 'Volunteers';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Volunteers';
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
	$handler->display->display_options['header']['area']['content'] = '<a href="/volunteers/availability">Show availability of volunteers</a>';
	$handler->display->display_options['header']['area']['format'] = 'html';
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
  /* Veld: CiviCRM Address: Full Street Address */
  $handler->display->display_options['fields']['street_address']['id'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['street_address']['field'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['location_type'] = '0';
  $handler->display->display_options['fields']['street_address']['location_op'] = '0';
  $handler->display->display_options['fields']['street_address']['is_primary'] = 1;
  $handler->display->display_options['fields']['street_address']['is_billing'] = 0;
  /* Veld: CiviCRM Address: ZIP / Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['location_type'] = '0';
  $handler->display->display_options['fields']['postal_code']['location_op'] = '0';
  $handler->display->display_options['fields']['postal_code']['is_primary'] = 1;
  $handler->display->display_options['fields']['postal_code']['is_billing'] = 0;
  /* Veld: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 1;
  $handler->display->display_options['fields']['city']['is_billing'] = 0;
  /* Veld: CiviCRM Phone Details: Phone Number */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'civicrm_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  $handler->display->display_options['fields']['phone']['location_type'] = '0';
  $handler->display->display_options['fields']['phone']['location_op'] = '0';
  $handler->display->display_options['fields']['phone']['is_primary'] = 1;
  $handler->display->display_options['fields']['phone']['phone_type'] = '0';
  /* Veld: CiviCRM Email: Email Address */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'civicrm_email';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['location_type'] = '0';
  $handler->display->display_options['fields']['email']['location_op'] = '0';
  $handler->display->display_options['fields']['email']['is_primary'] = 1;
  /* Veld: CiviCRM Custom: Oxfam volunteer: taak in winkel */
  $handler->display->display_options['fields']['task_shop_21']['id'] = 'task_shop_21';
  $handler->display->display_options['fields']['task_shop_21']['table'] = 'civicrm_value_oxfam_volunteer_5';
  $handler->display->display_options['fields']['task_shop_21']['field'] = 'task_shop_21';
  /* Veld: CiviCRM Custom: Oxfam medewerker Details: beschikbaarheid */
  $handler->display->display_options['fields']['availabilit__8']['id'] = 'availabilit__8';
  $handler->display->display_options['fields']['availabilit__8']['table'] = 'civicrm_value_oxfam_volunteer_details_1';
  $handler->display->display_options['fields']['availabilit__8']['field'] = 'availabilit__8';
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
  $handler->display->display_options['path'] = 'volunteers';
  $translatables['test'] = array(
    t('Master'),
    t('Volunteers'),
    t('more'),
    t('Apply'),
	  t('<a href="/volunteers/availability">Show availability of volunteers</a>'),
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
    t('Vrijwilliger'),
    t('Full Street Address'),
    t('ZIP / Postal Code'),
    t('City / Suburb'),
    t('Phone Number'),
    t('Email Address'),
    t('taak in winkel'),
    t('beschikbaarheid'),
    t('Page'),
  );

  $views[$view->name] = $view;
