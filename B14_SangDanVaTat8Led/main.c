#include "main.h"
#include "../my_lib/Delay.h"

void traiSangPhai();
void phaiSangTrai();

void main()
{
    while(1)
    {  
        traiSangPhai();
        Delay_ms(100);
        phaiSangTrai();
    }
}

void traiSangPhai()
{
    unsigned char i;
    P2 = 0x00;

    for( i =0; i<8; i++)
    {
        P2 = (P2<<1)|1;
        Delay_ms(300);
    }
    for( i =0; i<8; i++)
    {
        P2 = P2 <<1;
        Delay_ms(300);
    }
}

void phaiSangTrai()
{
    unsigned char i;

    P2 = 0x80;

    for( i = 0; i < 8; i++)
    {
        Delay_ms(300);
        P2 = (P2>>1)|0x80;

    }
    for( i =0; i<8; i++)
    {
        P2 = P2 >>1;
        Delay_ms(300);
    }
}
