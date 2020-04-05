#include "main.h"
#include "../my_lib/UartMode1.h"


void main()
{
    char i;
		Uart_Init();
		
		while(1)
		{
			Uart_Write_Text("Nhap vao ky tu in thuong: ");
			while(Uart_Data_Ready()==0);
			i = Uart_Read();
			i = i - 32;					
			Uart_Write_Text("->");	
			Uart_Write(i);
			Uart_Write_Text("\r\n");
		}
}