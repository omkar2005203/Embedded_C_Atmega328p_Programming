/******************************************************************************
* File Name: main.c
* Description: This is main file for lab 3 activity
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: Omkar Rane 2005203 V1.0 25/Sep/2020
* Description: V1.0
******************************************************************************/
/******************************************************************************
* Includes
******************************************************************************/
#include"Appmode.h"
/******************************************************************************
* Defines and data types
******************************************************************************/
#define TOGGLE_BIT(PORT, BIT) PORT ^= (1 << BIT)
/******************************************************************************
* Global variables
******************************************************************************/
volatile uint8_t isr_0=0;
volatile uint8_t isr_1=0;
volatile float duty_cycle;
float freq=100;
float cycle;
uint8_t OverFlow=62;
volatile uint16_t counter=0x00;
volatile int time_on,time_off;
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
* Name: main()
* Description:main file for lab 3
* Arguments: NA
* Returns: None
******************************************************************************/
/******************************************************************************
* Internal functions
******************************************************************************/
/******************************************************************************
* Name:
* Description:
******************************************************************************/
int main()
{
    sei();
    EICRA|=(1<<ISC11);
    EICRA|=(1<<ISC01);
    EICRA&=~(1<<ISC10);
    EICRA&=~(1<<ISC00);
    EIMSK=0b00000011;
    GPIOConfig(PC4,OUTPUT); //PWM

//    TCNT0=0x00;
//    TCCR0A=0x00;
//    TCCR0B=0x00;
//    sei();
//    //TIMSK0|=(1<<TOIE0);
//    TCCR0B |= ((1 << CS00) | (1 << CS02)); //default WGM02 settings are 0 at the time of system reset
//    TCCR0B &= ~(1 << CS01); //101
//    TCNT0=0x63;
     TCCR0A = 0x00; // Normal mode of operation
     TCNT0 = 0x00;
     TCCR0B |= ((1 << CS00) | (1 << CS02)); //default WGM02 settings are 0 at the time of system reset
     TCCR0B &= ~(1 << CS01); //101
     TIMSK0 |= (1 << TOIE0); //Local Timer Overflow INT enable
     sei();

    GPIOConfig(PD7,OUTPUT); //LED
    GPIOConfig(PD1,INPUT); //Mode select
    GPIOConfig(PD2,INPUT); //GpioPlus
    GPIOConfig(PD3,INPUT); //GpioMinus


    while(1)
    {
        application();
    }
}

ISR(INT0_vect)
{
     isr_0=1;
}

ISR(INT1_vect)
{
    isr_1=1;
}

//ISR(TIMER0_OVF_vect)
//{
//    counter++;
//    if(counter>=OverFlow)
//    {
//        //PORTD^=(1<<PD7);
//        TOGGLE_BIT(PORTD,PD7);
//
//        counter=0;
//    }
//}

ISR(TIMER0_OVF_vect) {

  counter++;

  if (counter >= 62) {
    //FLAG_BIT.FLAG_ISR1 = 1;
    TOGGLE_BIT(PORTD,PD7);
    counter = 0;
  }
}
/******************************************************************************
/******************************************************************************
* End of File
******************************************************************************/







