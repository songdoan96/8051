#include "main.h"
#include "port.h"
#include "../my_lib/Delay.h"

void onOff(){
ON = 1;
		if(ON == 0)
		{
			LED = 1;
		}
		OFF = 1;
		if(OFF == 0)
		{
			LED=0;
		}
}

void doiPhim(){
Delay_ms(20);
	if(BTN==0){	

		LED = ! LED;
		while(BTN==0);
	}
}
void main()
{			 
	P2 = 0;
	while(1)
	{
		
	doiPhim();	
	}
}