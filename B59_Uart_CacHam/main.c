#include "main.h"
#include "../my_lib/Delay.h"
#include "../my_lib/UartMode1.h"
#include <stdio.h>


void main()
{
    char c;
		float pi = 3.14159265359f;
		Uart_Init();
	//	putchar('A');		//gui 1 ky tu ra cong UART = Uart_Write();
		printf("Song Doan\n");			 //Uart_Write_Text();
		printf("PI = %.3f \n",pi);
		while(1)
		{
		   Uart_Write_Text("Nhap vao ky tu: ");
			 c = _getkey();					 //Doi 1 ky tu truyen toi cong UART = Ready()
			 putchar(c - 32);					// viet hoa ki tu nhan duoc
			 putchar('\n');
		}
}