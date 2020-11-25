#include"GPIO.h"

void GPIOConfig(uint8_t pin,uint8_t mode)
{
    if(mode==INPUT)
    {
        if(pin==PD7||pin==PD6||pin==PD5||pin==PD4||pin==PD3||pin==PD2||pin==PD1||pin==PD0)
        {
            CLR_BIT(DDRD,pin);
            SET_BIT(PORTD,pin);
        }
        if(pin==PB7||pin==PB6||pin==PB5||pin==PB4||pin==PB3||pin==PB2||pin==PB1||pin==PB0)
        {
            CLR_BIT(DDRB,pin);
            SET_BIT(PORTB,pin);
        }
        if(pin==PC6||pin==PC5||pin==PC4||pin==PC3||pin==PC2||pin==PC1||pin==PC0)
        {
            CLR_BIT(DDRC,pin);
            SET_BIT(PORTC,pin);
        }
    }
    if(mode==OUTPUT)
    {
        if(pin==PD7||pin==PD6||pin==PD5||pin==PD4||pin==PD3||pin==PD2||pin==PD1||pin==PD0)
        {
            SET_BIT(DDRD,pin);
        }
        if(pin==PB7||pin==PB6||pin==PB5||pin==PB4||pin==PB3||pin==PB2||pin==PB1||pin==PB0)
        {
            SET_BIT(DDRB,pin);
        }
        if(pin==PC6||pin==PC5||pin==PC4||pin==PC3||pin==PC2||pin==PC1||pin==PC0)
        {
            SET_BIT(DDRC,pin);
        }
    }
}

void GPIOPinWrite(uint8_t pin,uint8_t state)
{
    if(pin==PD7||pin==PD6||pin==PD5||pin==PD4||pin==PD3||pin==PD2||pin==PD1||pin==PD0)
    {
        if(state==HIGH)
        {
            SET_BIT(PORTD,pin);
        }
        if(state==LOW)
        {
            CLR_BIT(PORTD,pin);
        }
    }
    if(pin==PB7||pin==PB6||pin==PB5||pin==PB4||pin==PB3||pin==PB2||pin==PB1||pin==PB0)
    {
        if(state==HIGH)
        {
            SET_BIT(PORTB,pin);
        }
        if(state==LOW)
        {
            CLR_BIT(PORTB,pin);
        }
    }
    if(pin==PC6||pin==PC5||pin==PC4||pin==PC3||pin==PC2||pin==PC1||pin==PC0)
    {
        if(state==HIGH)
        {
            SET_BIT(PORTC,pin);
        }
        if(state==LOW)
        {
            CLR_BIT(PORTC,pin);
        }
    }
}

uint8_t GPIOPinRead(uint8_t pin)
{
    if(pin==PD7||pin==PD6||pin==PD5||pin==PD4||pin==PD3||pin==PD2||pin==PD1||pin==PD0)
    {
        if((PIND)&(1<<pin))
        {
            return HIGH;
        }
        else
        {
            return LOW;
        }
    }
    if(pin==PB7||pin==PB6||pin==PB5||pin==PB4||pin==PB3||pin==PB2||pin==PB1||pin==PB0)
    {
        if((PINB)&(1<<pin))
        {
            return HIGH;
        }
        else
        {
            return LOW;
        }
    }
    if(pin==PC6||pin==PC5||pin==PC4||pin==PC3||pin==PC2||pin==PC1||pin==PC0)
    {
        if((PINC)&(1<<pin))
        {
            return HIGH;
        }
        else
        {
            return LOW;
        }
    }
}
