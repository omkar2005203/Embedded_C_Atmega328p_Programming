/******************************************************************************
* File Name: main.c
* Description: This file contains API definitions for lab 4 activity
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: Omkar Rane 2005203 V1.0 25/Sep/20
* Description: V1.0
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#include<stdint.h>
#include<stdio.h>
#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
#include"GPIO.h"
#include"AppMode.h"
#include"ModeState.h"
#include"PWM.h"
/******************************************************************************
* Defines and data types
******************************************************************************/
/******************************************************************************
* Global variables
******************************************************************************/
volatile uint16_t counter = 0x00;
float x= 128.0;
/******************************************************************************
* Static variables
******************************************************************************/
/******************************************************************************
* Internal function prototypes
******************************************************************************/
/******************************************************************************
* Public functions definitions
******************************************************************************/
/******************************************************************************
* Name: GPIOConfig (pin, mode)
* Description: Configures the mode of the pin as INPUT/PULLUP or OUTPUT
* Arguments: pin and mode
* Returns: None
******************************************************************************/
/******************************************************************************
* Internal functions
******************************************************************************/
/******************************************************************************
* Name:
* Description:
******************************************************************************/
int main(void)
{

//input
GPIOConfig(PD0,INPUT);
GPIOConfig(PD1,INPUT);
GPIOConfig(PD2,INPUT);
GPIOConfig(PD3,INPUT);


//output
GPIOConfig(PD6,OUTPUT);
GPIOConfig(PD7,OUTPUT);
GPIOConfig(PB3,OUTPUT);//OC2A pin on PB3


//PULL UP configuration
GPIOPinWrite(PD0,HIGH);
GPIOPinWrite(PD1,HIGH);
GPIOPinWrite(PD2,HIGH);
GPIOPinWrite(PD3,HIGH);

//interrupt config
interrupt_config();
// timer config
timer_config();
sei(); // Global interrupt



while(1)
{

        if(GPIOPinRead(PD0))
        {

            ModeState();

        }
        else
        {

            AppMode();

        }

}
    return 0;
}
/******************************************************************************
* ISR
******************************************************************************/


ISR(TIMER2_OVF_vect) {

  counter++;

if (counter >= 62)
{
    FLAG_BIT.FLAG_TIMER = 1;
    counter = 0;
}
}


//Switch ISR GpioPlus & GpioMinus operations
ISR(INT1_vect)
{
  FLAG_BIT.GPIOMinus_ISR2 = 1;
}

ISR(INT0_vect)
{
 FLAG_BIT.GPIOPlus_ISR1=1;
}

/******************************************************************************
/******************************************************************************
* End of File
******************************************************************************/



