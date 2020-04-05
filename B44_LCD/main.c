#include "main.h"
#include "../my_lib/Delay.h"

sbit LCD_RS = P2^0;
sbit LCD_EN = P2^1;

#define LCD_DATA P3

void Lcd_Cmd(unsigned char cmd)
{
	LCD_RS = 0;	
	LCD_DATA = cmd;
	LCD_EN = 0;
	LCD_EN = 1;
	if (cmd<=0x02)
	{
		Delay_ms(2);
	}else{
		Delay_ms(1);
	}
}

void Lcd_Chr_Cp(unsigned char c)
{
	LCD_RS = 1;
	LCD_DATA = c;
	LCD_EN = 0;
	LCD_EN = 1;
	Delay_ms(1);
}

void Lcd_Clr(){
	Lcd_Cmd(0x01);
}

void Lcd_Out_Cp(char *text)
{
	unsigned char i=0 ;
	LCD_RS = 1;
	while(text[i]!=0){
		Lcd_Chr_Cp(text[i]);
		i++;
	}
}

				
void main()
{

	unsigned char i;
	Lcd_Cmd(0x0c);
	Lcd_Chr_Cp('A');
	Delay_ms(1000);
	Lcd_Clr();
	Lcd_Out_Cp("Hello Wold");

	
	
	while(1)
	{

	}
}