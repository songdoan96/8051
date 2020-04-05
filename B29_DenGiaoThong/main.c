#include "main.h"
#include "../my_lib/Delay.h"


unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
sbit DO = P0^0;
sbit XANH = P0^1;
sbit VANG = P0^2;
#define CHUC P2
#define DV P3

void main()
{
	unsigned int i;
	while(1)
	{

		VANG = 1;
		XANH = 1;
		DO = 0;
		for(i=15;i>0;i--)
		{

			CHUC = Code7Seg[i/10];
			DV=Code7Seg[i%10];

			Delay_ms(1000);
		}  


		CHUC = Code7Seg[0];
		DV=Code7Seg[0];
		Delay_ms(1000);

		VANG = 1;
		XANH = 0;
		DO = 1;
		for(i=20;i>0;i--)
		{
			if(i==0)
			{
				CHUC = Code7Seg[0];
				DV=Code7Seg[0];
			}else{
				CHUC = Code7Seg[i/10];
				DV=Code7Seg[i%10];
			}
			Delay_ms(1000);
		}


		CHUC = Code7Seg[i];
		DV=Code7Seg[i];
		Delay_ms(1000);

		VANG = 0;
		XANH = 1;
		DO = 1;
		for(i=5;i>0;i--)
		{
			if(i==0)
			{
				CHUC = Code7Seg[0];
				DV=Code7Seg[0];
			}else{
				CHUC = Code7Seg[i/10];
				DV=Code7Seg[i%10];
			}
			Delay_ms(1000);
		}

		CHUC = Code7Seg[i];
		DV=Code7Seg[i];
		Delay_ms(1000);
	}
}