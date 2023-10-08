/*****************************************************************************/
/****************************************************************************/
/************************  Author: Ahmed Yassin   **************************/
/************************ File: KEYPAD_PROG_H_ *************************/
/************************   DATE: 9th Sep 2022    ************************/
/************************       Version: V1       ***********************/
/************************          Desc:          **********************/
/**********************************************************************/
/*********************************************************************/





#ifndef KEYPAD_PROG_H_
#define KEYPAD_PROG_H_


#include "std_types.h"
#include "util/delay.h"
#include "DIO.interface.h"
#include "KeyPad_private.h"
#include "KeyPad_cfg.h"



error_state KeyPad_VidIsPressed(u8 Copy_U8Port,u8 * Copy_U8Pressed_Key)
{
	*Copy_U8Pressed_Key = 50;
	u8 Pressed;

	for(u8 i=3; i<8; i++)
	{
			DIO_VidSetPinValue(KBD_PORT,i,LOW);


	for(u8 j=0; j<4; j++)
	{
		DIO_VidGetPinValue(KBD_PORT,&Pressed);
		if(LOW==Pressed)
		{
			*Copy_U8Pressed_Key = (i*4) + j ;
			
			while(LOW == Pressed)
			{
				DIO_VidGetPinValue(KBD_PORT,&Pressed);
			}
			_delay_ms(5);
		}	
		
		
	}		
		
		
		
		
		
		DIO_VidSetPinValue(KBD_PORT,i,HIGH);
	}	
}

error_state KeyPad_VidInitialization()
{
	DIO_VidSetPortDirection(KPD_PORT, 0xF0);
	DIO_VidSetPortValue(KPD_PORT, 0xFF);
	
}

#endif