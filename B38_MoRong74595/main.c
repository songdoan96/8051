#include "main.h"
#include "..\my_lib\Delay.h"
#include "..\my_lib\IE74595.h"



//sbit SHCP = P2^0;
//sbit DS = P2^1;
//sbit STCP = P2^2;
//
//
//
//
//void IE74595_Our(unsigned char *p,unsigned char n)
//{
//	unsigned char i,j,b;
//	for (i=0;i<n;i++)
//	{
//		b = *(p+n-i-1);
//		for (j=0; j<8 ; j++)
//		{
//			DS = b & (0x80>>j);
//			SHCP=0;
//			SHCP=1;
//		}
//	}
//	STCP=0;
//	STCP=1;
//}

void main()
{
	// nhap nhay 24 led voi 3 con IE74595_Our
	unsigned char arr[3];
	unsigned char i;
	while (1)
	{
		for (i=0;i<3 ;i++)
		{
			arr[i] = 0x00;
		}
		IE74595_Our(arr,3);
		Delay_ms(1000);

		for (i=0;i<3 ;i++)
		{
			arr[i] = 0xff;
		}
		IE74595_Our(arr,3);
		Delay_ms(1000);
	}
}