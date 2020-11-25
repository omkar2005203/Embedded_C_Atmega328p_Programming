/******************************************************************************
* File Name: GPIO.c
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
void GPIOConfig(uint8_t pin,uint8_t mode)
{
// INPUT configs for D
 if(pin == PD0 && mode == INPUT)
 {
    CLR_BIT(DDRD,PD0);
 }
if(pin == PD1 && mode == INPUT)
 {

    CLR_BIT(DDRD,PD1);
 }

 if(pin == PD2 && mode == INPUT)
 {
    CLR_BIT(DDRD,PD2);
 }

 if(pin == PD3 && mode == INPUT)
 {
    CLR_BIT(DDRD,PD3);
 }

 if(pin == PD4 && mode == INPUT)
 {
    CLR_BIT(DDRD,PD4);
 }

 if(pin == PD5 && mode == INPUT)
 {
    CLR_BIT(DDRD,PD5);
 }
 if(pin == PD6 && mode == INPUT)
 {
    CLR_BIT(DDRD,PD6);
 }
  if(pin == PD7 && mode == INPUT)
 {
    CLR_BIT(DDRD,PD7);
 }

 // Output configs for D
 if(pin == PD0 && mode == OUTPUT)
 {
    SET_BIT(DDRD,PD0);
 }
if(pin == PD1 && mode == OUTPUT)
 {
    SET_BIT(DDRD,PD1);
 }

 if(pin == PD2 && mode == OUTPUT)
 {
    SET_BIT(DDRD,PD2);
 }

 if(pin == PD3 && mode == OUTPUT)
 {
    SET_BIT(DDRD,PD3);
 }

 if(pin == PD4 && mode == OUTPUT)
 {
    SET_BIT(DDRD,PD4);
 }

 if(pin == PD5 && mode == OUTPUT)
 {
    SET_BIT(DDRD,PD5);
 }
 if(pin == PD6 && mode == OUTPUT)
 {
    SET_BIT(DDRD,PD6);
 }
  if(pin == PD7 && mode == OUTPUT)
 {
    SET_BIT(DDRD,PD7);
 }

// For port B
// INPUT configs for B
 if(pin == PB0 && mode == INPUT)
 {
    CLR_BIT(DDRB,PB0);
 }
if(pin == PB1 && mode == INPUT)
 {

    CLR_BIT(DDRB,PB1);
 }

 if(pin == PB2 && mode == INPUT)
 {
    CLR_BIT(DDRB,PB2);
 }

 if(pin == PB3 && mode == INPUT)
 {
    CLR_BIT(DDRB,PB3);
 }

 if(pin == PB4 && mode == INPUT)
 {
    CLR_BIT(DDRB,PB4);
 }

 if(pin == PB5 && mode == INPUT)
 {
    CLR_BIT(DDRB,PB5);
 }
 if(pin == PB6 && mode == INPUT)
 {
    CLR_BIT(DDRB,PB6);
 }
  if(pin == PB7 && mode == INPUT)
 {
    CLR_BIT(DDRB,PB7);
 }

 // Output configs for B
 if(pin == PB0 && mode == OUTPUT)
 {
    SET_BIT(DDRB,PB0);
 }
if(pin == PB1 && mode == OUTPUT)
 {
    SET_BIT(DDRB,PB1);
 }

 if(pin == PB2 && mode == OUTPUT)
 {
    SET_BIT(DDRB,PB2);
 }

 if(pin == PB3 && mode == OUTPUT)
 {
    SET_BIT(DDRB,PB3);
 }

 if(pin == PB4 && mode == OUTPUT)
 {
    SET_BIT(DDRB,PB4);
 }

 if(pin == PB5 && mode == OUTPUT)
 {
    SET_BIT(DDRB,PB5);
 }
 if(pin == PB6 && mode == OUTPUT)
 {
    SET_BIT(DDRB,PB6);
 }
  if(pin == PB7 && mode == OUTPUT)
 {
    SET_BIT(DDRB,PB7);
 }


// for port C
// INPUT configs for C
 if(pin == PC0 && mode == INPUT)
 {
    CLR_BIT(DDRC,PC0);
 }
if(pin == PC1 && mode == INPUT)
 {

    CLR_BIT(DDRC,PC1);
 }

 if(pin == PC2 && mode == INPUT)
 {
    CLR_BIT(DDRC,PC2);
 }

 if(pin == PC3 && mode == INPUT)
 {
    CLR_BIT(DDRC,PC3);
 }

 if(pin == PC4 && mode == INPUT)
 {
    CLR_BIT(DDRC,PC4);
 }

 if(pin == PC5 && mode == INPUT)
 {
    CLR_BIT(DDRC,PC5);
 }
 if(pin == PC6 && mode == INPUT)
 {
    CLR_BIT(DDRC,PC6);
 }

 // Output configs for C
 if(pin == PC0 && mode == OUTPUT)
 {
    SET_BIT(DDRC,PC0);
 }
if(pin == PC1 && mode == OUTPUT)
 {
    SET_BIT(DDRC,PC1);
 }

 if(pin == PC2 && mode == OUTPUT)
 {
    SET_BIT(DDRC,PC2);
 }

 if(pin == PC3 && mode == OUTPUT)
 {
    SET_BIT(DDRC,PC3);
 }

 if(pin == PC4 && mode == OUTPUT)
 {
    SET_BIT(DDRC,PC4);
 }

 if(pin == PC5 && mode == OUTPUT)
 {
    SET_BIT(DDRC,PC5);
 }
 if(pin == PC6 && mode == OUTPUT)
 {
    SET_BIT(DDRC,PC6);
 }



 // All PULL_UP Configurations

// PORTB pull ups:

 if(pin == PB0 && mode == PULL_UP)
 {
    SET_BIT(PORTB,PB0);
 }
if(pin == PB1 && mode == PULL_UP)
 {
    SET_BIT(PORTB,PB1);
 }

 if(pin == PB2 && mode == PULL_UP)
 {
    SET_BIT(PORTB,PB2);
 }

 if(pin == PB3 && mode == PULL_UP)
 {
    SET_BIT(PORTB,PB3);
 }

 if(pin == PB4 && mode == PULL_UP)
 {
    SET_BIT(PORTB,PB4);
 }

 if(pin == PB5 && mode == PULL_UP)
 {
    SET_BIT(PORTB,PB5);
 }
 if(pin == PB6 && mode == PULL_UP)
 {
    SET_BIT(PORTB,PB6);
 }
  if(pin == PB7 && mode == PULL_UP)
 {
    SET_BIT(PORTB,PB7);
 }


// PULL for D
 if(pin == PD0 && mode == PULL_UP)
 {
    SET_BIT(PORTD,PD0);
 }
if(pin == PD1 && mode == PULL_UP)
 {
    SET_BIT(PORTD,PD1);
 }

 if(pin == PD2 && mode == PULL_UP)
 {
    SET_BIT(PORTD,PD2);
 }

 if(pin == PD3 && mode == PULL_UP)
 {
    SET_BIT(PORTD,PD3);
 }

 if(pin == PD4 && mode == PULL_UP)
 {
    SET_BIT(PORTD,PD4);
 }

 if(pin == PD5 && mode == PULL_UP)
 {
    SET_BIT(PORTD,PD5);
 }
 if(pin == PD6 && mode == PULL_UP)
 {
    SET_BIT(PORTD,PD6);
 }
  if(pin == PD7 && mode == PULL_UP)
 {
    SET_BIT(PORTD,PD7);
 }


 // Pull_UP for PORT C

  if(pin == PC0 && mode == PULL_UP)
 {
    SET_BIT(PORTC,PC0);
 }
if(pin == PC1 && mode == PULL_UP)
 {
    SET_BIT(PORTC,PC1);
 }

 if(pin == PC2 && mode == PULL_UP)
 {
    SET_BIT(PORTC,PC2);
 }

 if(pin == PC3 && mode == PULL_UP)
 {
    SET_BIT(PORTC,PC3);
 }

 if(pin == PC4 && mode == PULL_UP)
 {
    SET_BIT(PORTC,PC4);
 }

 if(pin == PC5 && mode == PULL_UP)
 {
    SET_BIT(PORTC,PC5);
 }
 if(pin == PC6 && mode == PULL_UP)
 {
    SET_BIT(PORTC,PC6);

 }


}

/******************************************************************************
*Name:GPIOPinRead(Pin)
*Purpose: The function returns the state (0 or 1) of the input pin.
*Pin: The Atmega328P port pin which need to be read.
*Return value: 0 or 1
******************************************************************************/
// GPIO Read function definitions
uint8_t GPIOPinRead(uint8_t pin)
{
if(pin==PD0)
{
uint8_t PIN_READ =0x00;
PIN_READ=PIND;
if(PIN_READ & (1<<PD0))
{
    return 1;
}
else
{
    return 0;
}
}


if(pin==PD1)
{
uint8_t PIN_READ =0x00;
PIN_READ=PIND;
if(PIN_READ & (1<<PD1))
{
    return 1;
}
else
{
    return 0;
}
}

if(pin==PD2)
{
uint8_t PIN_READ =0x00;
PIN_READ=PIND;
if(PIN_READ & (1<<PD2))
{
    return 1;
}
else
{
    return 0;
}
}


if(pin==PD3)
{
uint8_t PIN_READ =0x00;
PIN_READ=PIND;
if(PIN_READ & (1<<PD3))
{
    return 1;
}
else
{
    return 0;
}
}


if(pin==PD4)
{
uint8_t PIN_READ =0x00;
PIN_READ=PIND;
if(PIN_READ & (1<<PD4))
{
    return 1;
}
else
{
    return 0;
}
}


if(pin==PD5)
{
uint8_t PIN_READ =0x00;
PIN_READ=PIND;
if(PIN_READ & (1<<PD5))
{
    return 1;
}
else
{
    return 0;
}
}

if(pin==PD6)
{
uint8_t PIN_READ =0x00;
PIN_READ=PIND;
if(PIN_READ & (1<<PD6))
{
    return 1;
}
else
{
    return 0;
}
}


if(pin==PD7)
{
uint8_t PIN_READ =0x00;
PIN_READ=PIND;
if(PIN_READ & (1<<PD7))
{
return 1;
}
else
{
return 0;
}
}

// b port
if(pin==PB0)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINB;
if(PIN_READ & (1<<PB0))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PB1)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINB;
if(PIN_READ & (1<<PB1))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PB2)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINB;
if(PIN_READ & (1<<PB2))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PB3)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINB;
if(PIN_READ & (1<<PB3))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PB4)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINB;
if(PIN_READ & (1<<PB4))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PB5)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINB;
if(PIN_READ & (1<<PB5))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PB6)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINB;
if(PIN_READ & (1<<PB6))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PB7)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINB;
if(PIN_READ & (1<<PB7))
{
return 1;
}
else
{
return 0;
}
}

// port c
if(pin==PC0)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINC;
if(PIN_READ & (1<<PC0))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PC1)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINC;
if(PIN_READ & (1<<PC1))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PC2)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINC;
if(PIN_READ & (1<<PC2))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PC3)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINC;
if(PIN_READ & (1<<PC3))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PC4)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINC;
if(PIN_READ & (1<<PC4))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PC5)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINC;
if(PIN_READ & (1<<PC5))
{
return 1;
}
else
{
return 0;
}
}

if(pin==PC6)
{
uint8_t PIN_READ =0x00;
PIN_READ=PINC;
if(PIN_READ & (1<<PC6))
{
return 1;
}
else
{
return 0;
}
}


return 0;
}


/******************************************************************************
*GPIOPinWrite(pin, state)
*Purpose: The function is used to write LOW or HIGH state to GPIO pin.
*Pin: The Atmega328P pin used to write LOW or HIGH state.
*State: LOW or HIGH
******************************************************************************/

void GPIOPinWrite(uint8_t pin,uint8_t state)
{
// write low and high for port d pins
if(pin==PD0 && state == HIGH)
{
    SET_BIT(PORTD,PD0);
}
if(pin==PD0 && state == LOW)
{
    CLR_BIT(PORTD,PD0);
}
if(pin==PD1 && state == HIGH)
{
    SET_BIT(PORTD,PD1);
}
if(pin==PD1 && state == LOW)
{
    CLR_BIT(PORTD,PD1);
}

if(pin==PD2 && state == HIGH)
{
    SET_BIT(PORTD,PD2);
}
if(pin==PD2 && state == LOW)
{
    CLR_BIT(PORTD,PD2);
}
if(pin==PD3 && state == HIGH)
{
    SET_BIT(PORTD,PD3);
}
if(pin==PD3 && state == LOW)
{
    CLR_BIT(PORTD,PD3);
}
if(pin==PD4 && state == HIGH)
{
    SET_BIT(PORTD,PD4);
}
if(pin==PD4 && state == LOW)
{
    CLR_BIT(PORTD,PD4);
}
if(pin==PD5 && state == HIGH)
{
    SET_BIT(PORTD,PD5);
}
if(pin==PD5 && state == LOW)
{
    CLR_BIT(PORTD,PD5);
}

if(pin==PD6 && state == HIGH)
{
    SET_BIT(PORTD,PD6);
}
if(pin==PD6 && state == LOW)
{
    CLR_BIT(PORTD,PD6);
}
if(pin==PD7 && state == HIGH)
{
    SET_BIT(PORTD,PD7);
}
if(pin==PD7 && state == LOW)
{
    CLR_BIT(PORTD,PD7);
}


// write low and high for port B pins
if(pin==PB0 && state == HIGH)
{
    SET_BIT(PORTB,PB0);
}
if(pin==PB0 && state == LOW)
{
    CLR_BIT(PORTB,PB0);
}
if(pin==PB1 && state == HIGH)
{
    SET_BIT(PORTB,PB1);
}
if(pin==PB1 && state == LOW)
{
    CLR_BIT(PORTB,PB1);
}

if(pin==PB2 && state == HIGH)
{
    SET_BIT(PORTB,PB2);
}
if(pin==PB2 && state == LOW)
{
    CLR_BIT(PORTB,PB2);
}
if(pin==PB3 && state == HIGH)
{
    SET_BIT(PORTB,PB3);
}
if(pin==PB3 && state == LOW)
{
    CLR_BIT(PORTB,PB3);
}
if(pin==PB4 && state == HIGH)
{
    SET_BIT(PORTB,PB4);
}
if(pin==PB4 && state == LOW)
{
    CLR_BIT(PORTB,PB4);
}
if(pin==PB5 && state == HIGH)
{
    SET_BIT(PORTB,PB5);
}
if(pin==PB5 && state == LOW)
{
    CLR_BIT(PORTB,PB5);
}

if(pin==PB6 && state == HIGH)
{
    SET_BIT(PORTB,PB6);
}
if(pin==PB6 && state == LOW)
{
    CLR_BIT(PORTB,PB6);
}
if(pin==PB7 && state == HIGH)
{
    SET_BIT(PORTB,PB7);
}
if(pin==PB7 && state == LOW)
{
    CLR_BIT(PORTB,PB7);
}

// PORT C pins
// write low and high for port C pins
if(pin==PC0 && state == HIGH)
{
    SET_BIT(PORTC,PC0);
}
if(pin==PC0 && state == LOW)
{
    CLR_BIT(PORTC,PC0);
}
if(pin==PC1 && state == HIGH)
{
    SET_BIT(PORTC,PC1);
}
if(pin==PC1 && state == LOW)
{
    CLR_BIT(PORTC,PC1);
}

if(pin==PC2 && state == HIGH)
{
    SET_BIT(PORTC,PC2);
}
if(pin==PC2 && state == LOW)
{
    CLR_BIT(PORTC,PC2);
}
if(pin==PC3 && state == HIGH)
{
    SET_BIT(PORTC,PC3);
}
if(pin==PC3 && state == LOW)
{
    CLR_BIT(PORTC,PC3);
}
if(pin==PC4 && state == HIGH)
{
    SET_BIT(PORTC,PC4);
}
if(pin==PC4 && state == LOW)
{
    CLR_BIT(PORTC,PC4);
}
if(pin==PC5 && state == HIGH)
{
    SET_BIT(PORTC,PC5);
}
if(pin==PC5 && state == LOW)
{
    CLR_BIT(PORTC,PC5);
}
if(pin==PC6 && state == HIGH)
{
    SET_BIT(PORTC,PC6);
}
if(pin==PC6 && state == LOW)
{
    CLR_BIT(PORTC,PC6);
}


}


/******************************************************************************
* Internal functions
******************************************************************************/
/******************************************************************************
* Name:
* Description:
******************************************************************************/
/*****************************************************************************/
/******************************************************************************
* End of File
******************************************************************************/
