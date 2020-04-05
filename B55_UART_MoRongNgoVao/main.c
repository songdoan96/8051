#include "main.h"
#include "port.h"
#include "../my_lib/Delay.h"


void main()
{
    //unsigned char i;
		unsigned char b;
		P1_0 = 0;
		SM0 = SM1 = 0;	//Hoat dong o mode 0
		REN = 1;				// Cho phep nhan dl
		
		
		while(1)
		{
			P3_2 = 0;			
			P3_2 = 1;			// Tao xung cho dl ngo vao 74165
			RI = 0;
			while(RI == 0);	 //Cho' RI = 1;
			
			b = SBUF;		// 		Xuat dl

			if((b & 0x01)==0)	P1_0 = 1;
			if((b & 0x02)==0)	P1_0 = 0;
		
		}
}