#include "main.h"

unsigned char Led7Seg[]	= {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
unsigned char i;
void main()
{
		IT0 = EX0 = 1;
		IT1 = EX1 = 1;
		EA = 1;
    
		while(1)
		{
		  P0 = Led7Seg[i];  
		}
}


void ISR_EX0(void)interrupt 0
{
	i++;
	if(i>9) i = 0;
}

void ISR_EX1(void) interrupt 2
{
	i--;
	if(i<0) i = 9;
}