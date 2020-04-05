#include "main.h"
#include "../my_lib/Delay.h"

unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
sbit LED1 = P3^0;
sbit LED2 = P3^1;

void main()
{
		unsigned char i;
		LED1 = LED2 = 0;
    while(1)
		{
			     for(i=0;i<=99;i++)
				 {
				 	P2 = Code7Seg[i/10];
					LED1 = 1;
					LED1 = 0;

					P2 = Code7Seg[i%10];
					LED2 = 1;
					LED2 = 0;
					Delay_ms(100);
				 }
				 
		}
}