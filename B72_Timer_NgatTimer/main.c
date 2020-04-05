#include "main.h"

// tao ra xung co chu ki 1s => nua cki = 500ms

unsigned char cnt = 10;

void main()
{
		TMOD &= 0xf0;
		TMOD |= 0x01;
		TH0 = 0x3c;
		TL0 = 0xb0;		 // dem 50ms

		ET0 = 1; //cho phep ngat timer0
		EA = 1;
		TR0 = 1;

		while(1)
		{
			PCON |= 0x01;	//che do ngu   
		}
}

void Timer0Overflow (void) interrupt 1
{
	//Nap lai TH0 va TL0
	// dem 50ms
	// muon dem 500ms thi cho lap 10 lan
	TH0 = 0x3c;
	TL0 = 0xb0;

	cnt--;

	if(cnt==0)
	{
		cnt = 10;
		// Code
		P2_0 = ~P2_0	;
	}

}