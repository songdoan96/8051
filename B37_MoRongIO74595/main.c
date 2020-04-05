#include "main.h"
#include "../my_lib/Delay.h"


sbit SHCP = P2^0;
sbit DS = P2^1;
sbit STCP = P2^2;

void byteToBit(unsigned char b)
{
	unsigned char i;
	for (i = 0; i < 8; i++)
	{
		DS = b & (0x80>>i);
		SHCP=0;
		SHCP=1;
	}
	STCP=0;
	STCP=1;
}


void main()
{
	unsigned char b = 0x55;
	while(1)
	{
	 byteToBit(~b);
	 Delay_ms(1000);	
	}
}