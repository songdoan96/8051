#include "main.h"
#include "../my_lib/delay.h"


void main()
{
    P2 = 0x55;
    while(1)
    {  
        delay_ms(1000);
        P2 = ~P2;
        
    }
}