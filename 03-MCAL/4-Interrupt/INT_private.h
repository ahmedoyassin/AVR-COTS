#ifndef INT_PRIVATE_H_
#define INT_PRIVATE_H_

	#define ISC00 0
	#define ISC01 1


	#define HIGH 1
	#define LOW 0
	
	void __vector_1(void) __attribute__((signal));

	
	#define MCUCR *((u8 *)0x55)
	#define MCUCSR *((u8 *)0x54)
	#define GICR *((u8 *)0x5B) 
	#define SERG *((u8 *) 0x5F)
	#define GIFR *((u8 volatile *) 0x5A)

#endif