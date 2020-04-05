#include "main.h"
#include "../my_lib/Delay.h"
#include "port.h"


void main()
{

    IT1 = 1;
		EX1 = 1; 		 //Ngat ngoai chan 1 
		EA = 1;			//Cho phep ngat toan cuc
		LED1 = LED2 = LED3 = LED4 = 0;
		while(1)
		{
		    PCON |= 0X01;
		}
}
void EX1_ISR(void) interrupt 2
{
	Delay_ms(20);
	if(!BTN1)
	{
		LED1 = !LED1;
		while(!BTN1);
	}
	if(!BTN2)
	{
		LED2 = !LED2;
		while(!BTN2);
	}
	if(!BTN3)
	{
		LED3 = !LED3;
		while(!BTN3);
	}
	if(!BTN4)
	{
		LED4 = !LED4;
		while(!BTN4);
	}

	
}