/******************************************************************************
* File Name: FSMState.h
* Description: This file contains function Prototypes of StateFSM.c
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: Omkar Rane 2005203 V1.0 18/Sep/20
* Description: V1.0
*
******************************************************************************/
#ifndef FSMSTATE_H_INCLUDED
#define FSMSTATE_H_INCLUDED
/******************************************************************************
* Includes
******************************************************************************/
#include<stdint.h>
#include<avr/io.h>
#include<util/delay.h>
/******************************************************************************
* Defines and data types
******************************************************************************/
struct
{
    volatile unsigned int FLAG_ISR1:1;
    volatile unsigned int FLAG_ISR2:1;
}FLAG_BIT;
/******************************************************************************
* Global variables
******************************************************************************/
/******************************************************************************
* Public function prototypes
******************************************************************************/
void FSMInit();
void FSMStateA();
void FSMStateB();
#endif
/******************************************************************************
* End of File
******************************************************************************/



























































