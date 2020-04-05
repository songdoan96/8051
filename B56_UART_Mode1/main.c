#include "main.h"



void Uart_Init()
{
	//Khoi tao UART Mode 1
	SM0 = 0; SM1= 1;	//Chon Mode 1

	TMOD = 0x20;				// Timer1 hoat dong che do 8 bit tu dong nap lai
	TH1 = 0xFD;					//Nap gia tri vao th1 dua vao bang tra cuu ( f thach anh: 11059200 )	- Toc do baud 9600
	TR1 = 1;						//Timer bat dau chay
	TI = 1; 						//San sang gui dl

	REN = 1; 						//Cho phep nhan dl
}

void Uart_Write(char c)
{
	while (TI == 0);	 	//Neu viec gui dl trc do chua hoan tat thi cho
	TI = 0;
	SBUF = c;					//Ghi dl
}

void Uart_Write_Text(char *str)
{
	unsigned char i = 0;
	while (str[i] != 0)
	{
		Uart_Write(str[i]);
		i++;
	}
}

//Nhan dl
char Uart_Data_Ready()
{
	return RI;
}
char Uart_Read()
{
	RI = 0;
	return SBUF;
}

void main()
{
	char i;
	Uart_Init();

//	for(i='a';i<='z';i++){					//Gui dl
//		Uart_Write(i);
//		Delay_ms(100);
//	}	 
	while(1)
	{
//		if(Uart_Data_Ready()==1){		 //Doc dl tu terminal
//			P2 = Uart_Read();
//		}


//		Uart_Write_Text("Doan Song");				 //gui dl string

//Chuong trinh chuyen chu thuong thanh chu hoa
		
		Uart_Write_Text("Nhap vao ky tu in thuong: ");
		while(Uart_Data_Ready()==0);
		i = Uart_Read();
		i = i - 32;					// Doi sang in hoa
		Uart_Write_Text("->");	
		Uart_Write(i);
		Uart_Write_Text("\r\n");

	}
}