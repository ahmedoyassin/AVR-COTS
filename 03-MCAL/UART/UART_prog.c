#include "UART_privat.h"

void init()
{
	u8 ucsrc_help = 0b10000000;
	SET(UCSRC,UMSEL);
	ClEAR(ucsrc_help,UPM1);
	ClEAR(ucsrc_help,UPM0);
	ClEAR(ucsrc_help,USBS);
	ClEAR(UCSRB,UCSZ2);
	SET(ucsrc_help,UCSZ1);
	SET(ucsrc_help,UCSZ0);
	
	SET(UCSRB,TXEN);
	SET(UCSRB,RXEN);
	ClEAR(ucsrc_help,7);
	UCSRC = ucsrc_help;
	
	UBRRH = 0;
	UBRRL = 51;
	
}


void send(u8 data)
{
	
	SET(UCSRB,TXB8);
	while(!(UCSRA && (1<< UDRE)));
	
	UDR = data;
	
}


u8 recieve(void)
{
		SET(UCSRB,RXB8);
	while(!(UCSRA && (1<< RXC)));
	
	return UDR;
	
	
	
}