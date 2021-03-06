/******************************************************************************
* File Name: GPIO.c
* Description: This file contains API definitions for GPIO functionality
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: Omkar Rane 2005203 V1.0 25/Sep/2020
* Description: V1.0
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#include "PWM.h"
#include"GPIO.h"
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
* Name: timer_init()
* Description: timer register configuration
* Arguments: pin and mode
* Returns: None
******************************************************************************/
/******************************************************************************
* Internal functions
******************************************************************************/
void timer_init()
{
TCCR0A |= ((1 << WGM01) | (1 << WGM00));
TCCR0A |= (1 << COM0A1);
TCCR0A &= ~(1 << COM0A0);
TCNT0 = 0x00; // Timer counter register

TCCR0B |= ((1 << CS00) | (1 << CS02)); // Clock selection 101
TCCR0B &= ~(1 << CS01); //101
TIMSK0 |= (1 << TOIE0); //Local Timer Overflow INT enable
}
/******************************************************************************
* Name: interrupt_init()
* Description: interrupt register configuration
* Arguments: pin and mode
* Returns: None
******************************************************************************/
void interrupt_init()
{
    //pin-change interrupt for mode selection
PCICR |= (1<<PCIE2);
PCMSK2 |= ((1<< PCINT16) | (1<< PCINT17));


//External Interrupt for GPIOPlus and GPIOMinus
EICRA |= ((1 << ISC10)|(1 << ISC00));
EICRA &= ~((1 << ISC11)|(1 << ISC01)); //Any logical change will raise interrupt.
EICRA |= ((1 << ISC11)|(1 << ISC01)); //Any logical change will raise interrupt.
EIMSK |= ((1 << INT1)|(1 << INT0)); //Local Interrupt enable

}

/******************************************************************************
* Name:
* Description:
******************************************************************************/
/******************************************************************************
/******************************************************************************
* End of File
******************************************************************************/

