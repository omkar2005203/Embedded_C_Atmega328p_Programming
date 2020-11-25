/******************************************************************************
* File Name: Wiper.h
* Description: This file contains function Prototypes of Wiper.c
* Tool-Chain: AVR GCC
*
* Modification History:
* Created by: Omkar Rane 2005203 V1.0 25/Sep/2020
* Description: V1.0
*
******************************************************************************/
#ifndef WIPER_H_INCLUDED
#define WIPER_H_INCLUDED
/******************************************************************************
* Includes
******************************************************************************/
#include"PWM.h"
/******************************************************************************
* Defines and data types
******************************************************************************/
/******************************************************************************
* Global variables
******************************************************************************/
/******************************************************************************
* Public function prototypes
******************************************************************************/
void standby_mode();
void auto_mode();
void manual_mode();
void app_mode();
#endif
/******************************************************************************
* End of File
******************************************************************************/






