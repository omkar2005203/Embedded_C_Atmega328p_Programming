/******************************************************************************
* File Name: main.c
* Description: This file contains API definitions for GPIO functionality
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by:Omkar Rane 2005203 18/Sep/2020
* Description: V1.0
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#include <avr/io.h>
#include <util/delay.h>
#include<stdint.h>
#include<avr/interrupt.h>
#include"GPIO.h"
#include"FSMState.h"
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
*main function
******************************************************************************/
int main(void)
{


GPIOConfig(PD7,OUTPUT);
GPIOConfig(PD1,OUTPUT);

GPIOConfig(PD3,INPUT);
GPIOConfig(PD2,INPUT);


//PULL UP
GPIOPinWrite(PD3,HIGH);
GPIOPinWrite(PD2,HIGH);

//Interrupt register configurations
EICRA |= ((1 << ISC10)|(1 << ISC00));
EICRA &= ~((1 << ISC11)|(1 << ISC01)); //Any logical change will raise interrupt.
//EICRA |= ((1 << ISC11)|(1 << ISC01)); //Any logical change will raise interrupt.
EIMSK |= ((1 << INT1)|(1 << INT0)); //Local Interrupt enable

sei(); // SREG|=(1<<7); macros to enable global INT sei(); cli();

FLAG_BIT.FLAG_ISR1=0;
FLAG_BIT.FLAG_ISR2=0;


//FSM Logic
while(1)
{
if(FLAG_BIT.FLAG_ISR1==1 && FLAG_BIT.FLAG_ISR2==0)
{
FSMStateA();
_delay_ms(12000);
FLAG_BIT.FLAG_ISR1=0;
_delay_ms(10000);

}

else if(FLAG_BIT.FLAG_ISR1==0 && FLAG_BIT.FLAG_ISR2==1)
{
FSMStateB();
}
else if(FLAG_BIT.FLAG_ISR1==1 && FLAG_BIT.FLAG_ISR2==1)
{
FSMInit();
FLAG_BIT.FLAG_ISR1=0;
FLAG_BIT.FLAG_ISR2=0;
_delay_ms(2000);

}
else
{
FSMInit();
}


}



return 0;
}
/******************************************************************************
* Internal functions
******************************************************************************/
//ISR
ISR(INT1_vect)
{
  FLAG_BIT.FLAG_ISR1 = 1;
}
ISR(INT0_vect)
{
 FLAG_BIT.FLAG_ISR2=1;
}
/******************************************************************************
* Name:
* Description:
******************************************************************************/
/******************************************************************************
/******************************************************************************
* End of File
******************************************************************************/
















































