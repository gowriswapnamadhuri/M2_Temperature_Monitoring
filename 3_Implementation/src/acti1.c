/*
 * acti1.c
 *
 * Created: 21-04-2022 12:22:48
 *  Author: saivi
 */ 
#include "acti1.h"

/**
 * @brief function for declaring peripherals led,button,heater.
 * 
 */
void peripheral_init(){
SET_LED_AS_OUTPUT;
 SET_BUTTON_AS_INPUT;
 SET_HEATER_AS_INPUT;
 PULL_UP_BUTTON;
 PULL_UP_HEATER ;


}