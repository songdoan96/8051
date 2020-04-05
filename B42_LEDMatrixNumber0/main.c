#include "main.h"
#include "../my_lib/Delay.h"

unsigned char matrix_font[10][7] = {
{0x0E, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0E}, //so 0
{0x0E, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x04}, //so 1
{0x1F, 0x08, 0x04, 0x02, 0x01, 0x11, 0x0E}, //so 2
{0x0E, 0x11, 0x01, 0x06, 0x02, 0x01, 0x1F}, //so 3
{0x02, 0x02, 0x1F, 0x12, 0x0A, 0x06, 0x02}, //so 4
{0x0E, 0x11, 0x01, 0x01, 0x1E, 0x10, 0x1F}, //so 5
{0x0E, 0x11, 0x11, 0x1E, 0x10, 0x11, 0x0E}, //so 6
{0x08, 0x08, 0x08, 0x04, 0x02, 0x01, 0x1F}, //so 7
{0x0E, 0x11, 0x11, 0x0E, 0x11, 0x11, 0x0E}, //so 8
{0x0E, 0x11, 0x01, 0x0F, 0x11, 0x11, 0x0E} //so 9

};

void main()
{
	unsigned char i,j,dl;
	while(1)
	{
		for (i = 0; i < 10; i++)
		{
			for (dl = 0; dl < 142; dl++)		//	 lap lai vong lap  142*7 = 1000(s)
			{
				for(j=0; j<7; j++)
				{
					P2 = matrix_font[i][j];
					P3 = 0x00;
					Delay_ms(1);
					P3 = 0x01 << j;
				}
			}
		}
	}
}