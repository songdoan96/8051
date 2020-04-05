#include "main.h"
#include "../my_lib/Delay.h"


#define LED P2

sbit BTN = P1^0;
bit doiTT = 0;

unsigned char Delay500msVaQuetPhim(){
	unsigned char i;
	for(i=0;i<50;i++)
	{
		Delay_ms(10);
		if(BTN==0)	 {
			if (doiTT==0)
			{
				doiTT=1;
				return 1;
			}

		}
		else
		{
			doiTT=0;
		}
	}
	return 0;
}

void main()
{
	unsigned char i;
	while(1)
	{
		LED = 0x00;
		for(i=0;i<20;i++)
		{
			if(Delay500msVaQuetPhim()) break;
			LED=~LED;

		}

		LED = 0x55;
		for(i=0;i<20;i++)
		{
			if(Delay500msVaQuetPhim()) break;
			LED=~LED;

		}

		LED = 0xf0;
		for(i=0;i<20;i++)
		{
			if(Delay500msVaQuetPhim()) break;
			LED=~LED;

		}
	}
}