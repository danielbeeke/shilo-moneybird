<?php
/**
 * @file
 * s_mb.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function s_mb_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_mb_id'
  $field_instances['user-user-field_mb_id'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_mb_id',
    'label' => 'Moneybird ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Moneybird ID');

  return $field_instances;
}
