<?php
/**
* Dejavu.admin.inc
*
* Admin include file for Dejavu helper module.
*
* @package Dejavu
* @author Anil Maharjan
* @version 1.0
* @copyright anil@anilmaharjan.com.np
* 
**/

/**
* dejavu_misc_admin_setting_form
*
* Admin Setting form.
*
* 
**/
function dejavu_misc_admin_setting_form() {
	$form['social'] = array(
	  '#type' => 'fieldset',
	  '#title' => t('Social Links'),
	  '#collapsible' => TRUE,
	  '#collapsed' => FALSE
	);
	$form['social']['dejavu_social-facebook'] = array(
	  '#type'			=> 'textfield',
	  '#title'		 => t('Facebook Link'),
	  '#description'	 => t('Please add facebook account link'),
	  '#default_value' => variable_get('dejavu_social-facebook', ''),
	  '#size'		 => 100,
	);
	$form['social']['dejavu_social-twitter'] = array(
	  '#type'			=> 'textfield',
	  '#title'		 => t('Twitter Link'),
	  '#description'	 => t('Please add twitter account link'),
	  '#default_value' => variable_get('dejavu_social-twitter', ''),
	  '#size'		 => 100,
	);
	$form['social']['dejavu_social-linkedIn'] = array(
	  '#type'			=> 'textfield',
	  '#title'		 => t('LinkedIn Link'),
	  '#description'	 => t('Please add LinkedIn account link'),
	  '#default_value' => variable_get('dejavu_social-linkedIn', ''),
	  '#size'		 => 100,
	);
	$form['social']['dejavu_social-googleplus'] = array(
	  '#type'			=> 'textfield',
	  '#title'		 => t('Google plus'),
	  '#description'	 => t('Please add Google plus account link'),
	  '#default_value' => variable_get('dejavu_social-googleplus', ''),
	  '#size'		 => 100,
	);
	return system_settings_form($form);
  
}