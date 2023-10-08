#include "std_types.h"
#include "bit_math.h"
#include "INT_private.h"
#include "INT_cfg.h"

void INT_VidInit(void) 
{
	/* Set the interrept sense control for INT0 -- falling edge*/
	
	CLR_BIT(MCUCR,ISC00);
	SET_BIT(MCUCR,ISC01);
	
	/* Enable INT0*/
		SET_BIT(GICR,6);
}
void GIE_VidEnable(void)
{
	SET_BIT(SREG,7);	
}

void GIE_VidDisable(void)
{
	CLR_BIT(SREG,7);	
}

void __vector_1(void)
{
	DIO_VidTogglePinDirection(0,0);	
}