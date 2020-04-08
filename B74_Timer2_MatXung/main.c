#include "main.h"



void main()
{
	T2CON = 0x08;
	T2MOD = 0x00;
	
	RCAP2H = 0x3c;
	RCAP2L = 0xb0;
	
	P2 = 0x00;

	ET2 = 1;		//cho phep ngat Timer2
	EA = 1;		 // cho phep ngat toan cuc


	while(1)
	{
	
	}
}

void Timer2_Overflow(void) interrupt 5
{
	if(EXF2)
	{
		TR2 = 1;
		EXF2 = 0;
	}
	else
	{
		TR2 = 0;
		P2++;
		TF2 = 0;
	}
}