#include "main.h"
#include "../my_lib/Delay.h"

unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

void Display(unsigned int n)
{
	unsigned int dv,chuc,tram,ngan,chucNgan;

	chucNgan = n /10000;
	n %= 10000;
	ngan = n/1000;
	n %= 1000;
	tram = n/100;
	n %= 100;
	chuc = n/10;
	dv = n%10;

	P0 = Code7Seg[chucNgan];
	P2_4 = 0;
	Delay_ms(1);
	P2_4 = 1;

	P0 = Code7Seg[ngan];
	P2_3 = 0;
	Delay_ms(1);
	P2_3 = 1;

	P0 = Code7Seg[tram];
	P2_2 = 0;
	Delay_ms(1);
	P2_2 = 1;

	P0 = Code7Seg[chuc];
	P2_1 = 0;
	Delay_ms(1);
	P2_1 = 1;

	P0 = Code7Seg[dv];
	P2_0 = 0;
	Delay_ms(1);
	P2_0 = 1;
}
void main()
{
    unsigned char low,high;
		unsigned int number;

		TMOD &= 0xf0;
		TMOD |= 0x05;
		TR0 = 1;
		
		while(1)
		{
			do
			{
				high = TH0;
				low = TL0;
			}while(high != TH0);
			number = high;
			number <<= 8;
			number |= low;
		
		  Display(number);  
		}
}