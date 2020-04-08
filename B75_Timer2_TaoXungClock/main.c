#include "main.h"


void main()
{
	T2CON = 0x00;
	T2MOD = 0x02;
	
	//Tao xung clock f=1Hz
	RCAP2H = 0xf4;
	RCAP2L = 0x48;
	
	TR2 =1;
	while(1)
	{
	
	}
}