#include "main.h"
#include "../my_lib/Delay.h"
#include "../my_lib/IE74595.h"

unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

void main()
{
		
		unsigned char i;
		unsigned char arr[2];
    while(1)
		{
			for(i=0;i<=99;i++)
			{
					arr[0] = Code7Seg[i/10];
					arr[1] = Code7Seg[i%10];
					IE74595_Our(arr,2);
					Delay_ms(500);
			}
		    
		}
}