#include "main.h"
#include "../my_lib/Delay.h"
#include "../my_lib/UartMode1.h"


void main()
{
    char i;
		Uart_Init();
		P1_3 = 0;
		while(1)
		{
			//vdk1
//			if(P1_0 == 0)
//			{
//				Delay_ms(20);
//				Uart_Write(0x01);
//				while(P1_0==0);
//			}
//			if(P1_7 == 0)
//			{
//				Delay_ms(20);
//				Uart_Write(0x00);
//				while(P1_7 == 0);
//			}

			//VDK2
			if(Uart_Data_Ready()){
				if(Uart_Read() == 0x00) P1_3 = 0;
				if(Uart_Read() == 0x01) P1_3 = 1;
			}   
		}
}