#include "main.h"

#include "../my_lib/Delay.h"
#include "../my_lib/UartMode1.h"
#include <stdio.h>


void main()
{

    char c,i;
		P1_0 = 0;
		Uart_Init();
		//printf("Doan Quang Song Pro");
		//printf("Doan Quang Song Pro");
		while(1)
		{
		Delay_ms(20);
//			 c = _getkey();
//			 if(c == '0') P1_0 = 0;
//			 if(c == '1') P1_0 = 1;
for(i =0;i<100;i++)
{			
	Uart_Write_Text("Doan_Quang_Song");
	Delay_ms(1000);
}
		
		}
}