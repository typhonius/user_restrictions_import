<?php

/**
 * @file
 * Admin interface with form to import user restrictions rules
 */

function user_restrictions_import_form($form, $form_state){
	$form['user_restrictions_import']['csv_file'] = array(
		'#type' => 'file',
		'#title' => t('File'),
		'#description' => t('Use this field to upload the CSV file with User Restriction rules in.'),
	);

	return $form;
}