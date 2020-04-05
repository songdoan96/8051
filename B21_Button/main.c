#include "main.h"
#include "../my_lib/Delay.h"

sbit START = P1^0;
sbit STOP = P1^1;
#define LED P2

unsigned char Delay1sVaQuetPhim(){
	unsigned char i;
	for(i=0;i<100;i++)
	{
		Delay_ms(10);
		if(STOP==0)	 {
			LED = 0;
			return 1;
		}
	}
	return 0;
}

void main()
{
	P2 = 0;
	while(1)
	{
		if(START==0){
			while(1){
				LED = ~ LED;
				if(Delay1sVaQuetPhim()){
					break;
				}
			}
		} 
	}
}