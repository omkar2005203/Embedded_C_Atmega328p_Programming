/******************************************************************************
* File Name: main.c
* Description: This file contains API definitions for GPIO functionality
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: Omkar Rane 2005203 V1.0 10/Sep/20
* Description: V1.0
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#include "GPIO.h"
#include <avr/io.h>
#include<stdio.h>
#include<util/delay.h>
/******************************************************************************
* Defines and data types
******************************************************************************/
/******************************************************************************
* Global variables
******************************************************************************/
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

GPIOConfig(PD7,OUTPUT);
GPIOConfig(PD3,OUTPUT);
GPIOConfig(PD2,INPUT);
GPIOConfig(PD0,INPUT);
//PULL and PULL down
GPIOPinWrite(PD2,LOW);//Pull down
//GPIOPinWrite(PD2,HIGH);//Pull up
GPIOPinWrite(PD0,LOW);//Pull down

while(1)
{

if(GPIOPinRead(PD0)==0  && GPIOPinRead(PD2)== 0)
{
    GPIOPinWrite(PD3,LOW);
    GPIOPinWrite(PD7,LOW);

}
else if(GPIOPinRead(PD0)==0  && GPIOPinRead(PD2)== 1)
{
    GPIOPinWrite(PD3,LOW);
    GPIOPinWrite(PD7,HIGH);

}
else if(GPIOPinRead(PD0)==1  && GPIOPinRead(PD2)== 0)
{
    GPIOPinWrite(PD3,HIGH);
    GPIOPinWrite(PD7,LOW);

}
else if(GPIOPinRead(PD0)==1  && GPIOPinRead(PD2)== 1)
{

        GPIOPinWrite(PD7,HIGH);
        _delay_ms(1000);
        GPIOPinWrite(PD7,LOW);
        _delay_ms(1000);
        GPIOPinWrite(PD3,HIGH);
        _delay_ms(1000);
        GPIOPinWrite(PD3,LOW);
        _delay_ms(1000);

}
else
{
     GPIOPinWrite(PD7,LOW);
     GPIOPinWrite(PD3,LOW);

}
}


return 0;
}

/******************************************************************************/
/******************************************************************************
* End of File
******************************************************************************/
