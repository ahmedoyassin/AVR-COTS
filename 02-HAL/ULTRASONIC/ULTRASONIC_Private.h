#ifndef _ULTRASONIC_PRIVATE_H_
#define _ULTRASONIC_PRIVATE_H_

#include<avr/io.h>
#include <avr/interrupt.h>
#include<string.h>
#include <stdlib.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "../MCAL_DRIVERS/TIMER_Interface.h"

#define   TRIGER_DDR    DDRD
#define   ECHO_DDR      DDRD
#define   TRIGER_PORT   PORTD
#define   ECHO_PULLUP   PORTD
#define   TRIGER        0
#define   ECHO          3

#endif
