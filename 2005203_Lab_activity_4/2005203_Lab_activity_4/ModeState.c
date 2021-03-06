/******************************************************************************
* File Name: ModeState.c
* Description: This file contains API definitions for ModeState functionality
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by:Omkar Rane 2005203 V1.0 10/Sep/20
* Description: V1.0
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#include "ModeState.h"
#include "GPIO.h"
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
void ModeState()
{

                 //Stand-by mode:
           //CLR_BIT(PORTD,PD6);
           GPIOPinWrite(PD6,LOW);
           FLAG_BIT.GPIOMinus_ISR2=0;
           FLAG_BIT.GPIOPlus_ISR1=0;
           if(FLAG_BIT.FLAG_TIMER==1)
            {
                FLAG_BIT.FLAG_TIMER = 0;
                PORTD ^= (1 << PD7);

            }
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
