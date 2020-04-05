#include "main.h"
#include "../my_lib/Delay.h"

void UART_Mode0_Write(unsigned char b){

	SBUF = b;	 // Ghi du lieu 0x01 ra
	while(TI==0);	// doi flag TI = 1
	TI = 0;
	
	P3_2 = 0;			//Xuat dl lieu 74hc595 ( st_cp = 0 roi bang 1)
	P3_2 = 1;
}

void main()
{
    SM0 = SM1 = 0;  // CHON MODE 0;
	
		while(1)
		{
		 	UART_Mode0_Write(0x00);  
			Delay_ms(1000);
			UART_Mode0_Write(0xff);  
			Delay_ms(1000);
		}
}