#include "main.h"
#include <stdio.h>
#include "../my_lib/Delay.h"
#include "../my_lib/UartMode1.h"


void main()
{
    //char c;
		Uart_Init();
		while(1)
		{
		    if(P1_0==0) {
					Delay_ms(20);
					printf("0");
					while(P1_0==0);
				}
				if(P1_1==0) {
					Delay_ms(20);
					printf("1");
					while(P1_1==0);
				}
				if(P1_2==0) {
					Delay_ms(20);
					printf("2");
					while(P1_2==0);
				}
				if(P1_3==0) {
					Delay_ms(20);
					puchar("3");
					while(P1_3==0);
				}
		}
}