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
#include"ADC.h"
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
* Name: adc_init()
* Description: adc_init() is adc configuration register function
* Arguments: NA
* Returns: None
******************************************************************************/

void adc_init()
{
uint16_t ADC_value;
ADMUX &= 0x00;
ADMUX |= (1 << REFS0);
ADCSRA |= (1 << ADEN);

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
