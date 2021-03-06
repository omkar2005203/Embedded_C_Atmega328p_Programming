/******************************************************************************
* File Name: StateFSM.c
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
#include "GPIO.h"
#include "FSMState.h"
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
*FSMInit():
*Purpose: The function is used to initialize the FSM transition to ideal state or default state.
*Arguments: None
*Return: None
******************************************************************************/
void FSMInit()
{
GPIOPinWrite(PD7,HIGH);
GPIOPinWrite(PD1,HIGH);
_delay_ms(2000);
GPIOPinWrite(PD7,LOW);
GPIOPinWrite(PD1,LOW);
_delay_ms(2000);
}

/******************************************************************************
*FSMStateA():
*Purpose: The function implements the task related to state A
*Arguments: None
*Return: None
******************************************************************************/
void FSMStateA()
{
GPIOPinWrite(PD7,HIGH);
GPIOPinWrite(PD1,HIGH);
}
/******************************************************************************
*FSMStateB():
*Purpose: The function implements the task related to state B
*Arguments: None
*Return: None
******************************************************************************/
void FSMStateB()
{
GPIOPinWrite(PD7,LOW);
GPIOPinWrite(PD1,LOW);
FLAG_BIT.FLAG_ISR1=0;
_delay_ms(2000);
}
/******************************************************************************
* Internal functions
******************************************************************************/
/******************************************************************************
* Name:
* Description:
******************************************************************************/
/******************************************************************************
/******************************************************************************
* End of File
******************************************************************************/
