/******************************************************************************
* File Name: GPIO.h
* Description: This file contains function Prototypes of GPIO.c
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: Omkar Rane 2005203 V1.0 10/Sep/20
* Description: V1.0
*
******************************************************************************/
#ifndef GPIO_H
#define GPIO_H
/******************************************************************************
* Includes
******************************************************************************/
#include<stdint.h>
#include<avr/io.h>
#include<util/delay.h>
/******************************************************************************
* Defines and data types
******************************************************************************/
#define SET_BIT(PORT,BIT) PORT |=(1<<BIT)
#define CLR_BIT(PORT,BIT) PORT &=~(1<<BIT)

#define INPUT 0
#define OUTPUT 1

#define LOW 0
#define HIGH 1

#define PULL_UP 1
#define PULL_DOWN 0

struct
{

    volatile unsigned int FLAG_TIMER: 1;
    volatile unsigned int GPIOPlus_ISR1:1;
    volatile unsigned int GPIOMinus_ISR2:1;
}FLAG_BIT;

/******************************************************************************
* Global variables
******************************************************************************/
/******************************************************************************
* Public function prototypes
******************************************************************************/
void GPIOConfig(uint8_t pin,uint8_t mode);
uint8_t  GPIOPinRead(uint8_t pin);
void GPIOPinWrite(uint8_t pin,uint8_t state);
#endif
/******************************************************************************
* End of File
******************************************************************************/
