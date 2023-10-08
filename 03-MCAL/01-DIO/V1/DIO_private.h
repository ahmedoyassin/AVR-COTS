/*****************************************************************************/
/****************************************************************************/
/************************  Author: Ahmed Yassin   **************************/
/************************  File: DIO_PRIVATE_H_   ************************ /
/************************   DATE: 2nd Sep 2022    ************************/
/************************       Version: V1       ***********************/
/************************          Desc:          **********************/
/**********************************************************************/
/*********************************************************************/



#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#define DDRA_REG *((u8*)0X3A)
#define DDRB_REG *((u8*)0X37)
#define DDRC_REG *((u8*)0X34)
#define DDRD_REG *((u8*)0X31)

#define PORTA_REG *((u8*)0X3B)
#define PORTB_REG *((u8*)0X38)
#define PORTC_REG *((u8*)0X35)
#define PORTD_REG *((u8*)0X32)

#define PINA_REG *(( volatile u8*)0X39)
#define PINB_REG *((volatile u8*)0X36)
#define PINC_REG *((volatile u8*)0X33)
#define PIND_REG *((volatile u8*)0X30)

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define INPUT 0
#define OUTPUT 1

#define LOW 0
#define HIGH 1


#endif
