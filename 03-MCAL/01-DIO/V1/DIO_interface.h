/*****************************************************************************/
/****************************************************************************/
/************************  Author: Ahmed Yassin   **************************/
/************************  File: DIO_INTERFACE_H_   ***********************/
/************************   DATE: 2nd Sep 2022    ************************/
/************************       Version: V1       ***********************/
/************************          Desc:          **********************/
/**********************************************************************/
/*********************************************************************/




#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#define LOW 0
#define HIGH 1

error_state DIO_VidSetPinDirection(u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Dir);
error_state DIO_VidSetPinValue(u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Val);

error_state DIO_VidSetPortDirection(u8 Copy_U8Port , u8 Copy_U8Dir);
error_state DIO_VidSetPortValue(u8 Copy_U8Port , u8 Copy_U8Val);

error_state DIO_VidTogglePinDirection(u8 Copy_U8Port , u8 Copy_U8Pin);

error_state DIO_VidGetPinValue(u8 Copy_U8Port , u8 Copy_U8Pin, u8* Copy_U8Value);





#endif
