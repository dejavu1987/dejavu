<?php

function dejavu_misc_admin_l_setting_form() {
	$languages = language_list();
	$form['head_office_content'] = array(
	  '#type' => 'fieldset',
	  '#title' => t('Head Office Address Content'),
	  '#collapsible' => TRUE,
	  '#collapsed' => TRUE
	);
	foreach ($languages as $lang){
		$head_office_content_array = variable_get('dejavu_head_office_content_'.$lang->language); 
		$form['head_office_content']['dejavu_head_office_content_'.$lang->language] = array(
			//'#type'          => 'textarea',
			'#title'         => t('Head Office Address Content - '.$lang->name),
			'#description'   => t('Head Office Address Content <strong>'.$lang->name.'</strong>.'),
			'#default_value' => $head_office_content_array['value'],
			'#attributes' 	 => array('rows' => 1),
			'#wysiwyg' 		 => true,
			'#input_format' => '2',
			'#type' => 'text_format',
		    '#base_type' => 'textarea',
			'#rows' => '5',
      		'#weight' => '4'

		);
	}
	
	
	return system_settings_form($form);
  
}