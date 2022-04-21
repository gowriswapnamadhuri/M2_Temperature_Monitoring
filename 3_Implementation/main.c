/*
 * main.c
 *
 * Created: 4/21/2022 12:19:49 PM
 *  Author: saivi
 */ 

#include <xc.h>
#define F_CPU 16000000UL
#include "acti1.h"
#include "acti2.h"
#include "acti3.h"


#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
    peripheral_init(); //Initialise the button input registers
    Init_ADC(); //Initialise the ADC
    TimerWaveGenMode(); // Initialise timer
    uint16_t temp;
    int d;

    /**
     * @brief Infinite loop to run the microcontroller
     * 
     */
    while(1)
    {
       if(BUTTON_ON & HEATER_ON)
       {
                _delay_ms(2000);
                LED_ON; //make 0th bit of port B as 1, makes led glow
                temp = Read_ADC(0);
                d=outputbyPWM(temp);
                _delay_ms(20);
               
            
                
            }
            else
            {
            
                _delay_ms(20);
                OCR1A = 0; //make PWM output 0 if switch is off
                LED_OFF; // make led off*/
            }
        
    }

 return 0;   
}