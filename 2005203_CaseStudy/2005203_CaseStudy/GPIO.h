/******************************************************************************
* File Name: GPIO.h
* Description: This file contains function Prototypes of GPIO.c
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: Omkar Rane 2005203 V1.0 25/Sep/2020
* Description: V1.0
*
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED

#define F_CPU (16000000UL)
#include<stdint.h>
#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
#define SET_BIT(PORT, BIT) PORT |= (1 << BIT)
#define CLR_BIT(PORT, BIT) PORT &= ~(1 << BIT)
#define INPUT 0
#define OUTPUT 1
#define HIGH 1
#define LOW 0
#include<stdlib.h>
/******************************************************************************
* Defines and data types
******************************************************************************/
/******************************************************************************
* Global variables
******************************************************************************/
/******************************************************************************
* Public function prototypes
******************************************************************************/
void GPIOConfig(uint8_t pin,uint8_t mode);
void GPIOPinWrite(uint8_t pin,uint8_t state);
uint8_t GPIOPinRead(uint8_t pin);
#endif
/******************************************************************************
* End of File
******************************************************************************/



