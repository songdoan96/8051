#include "main.h"

void DelayTimer2_1s( )
{
	// thach anh 12mhz
	unsigned char i;
	TR2 = 1;
	for(i=0;i<20;i++)
	{
		while (!TF2);
		TF2 = 0;
	}
	TR2 = 0;
}

void main()
{
	// Timer2 che do tu dong nap lai, 16bit
	T2CON = 0x00;
	T2MOD = 0x00;
	
	RCAP2H = 0x3c;
	RCAP2L = 0xb0;

	TH2 = 0x3c;
	TL2 = 0xb0;
	while(1)
	{
		P2 = ~P2;
		DelayTimer2_1s();
	}
}