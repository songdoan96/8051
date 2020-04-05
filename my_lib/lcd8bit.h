/*
Khai bao Port.h:


sbit RS = P2^0;                                                                   
sbit EN = P2^1;   
sbit D0 = P3^0;
sbit D1 = P3^1;
sbit D2 = P3^2;
sbit D3 = P3^3;                         
sbit D4 = P3^4;
sbit D5 = P3^5;
sbit D6 = P3^6;
sbit D7 = P3^7;


*/


#ifndef _LCD8BIT_H
#define _LCD8BIT_H

void Lcd_Delay(int a); 
void Lcd_Port(char a);
void Lcd_Cmd(char a);
Lcd_Clear();
void Lcd_Set_Cursor(char a, char b);
void Lcd_Init();
void Lcd_Write_Char(char a);
void Lcd_Write_String(char *a);
void Lcd_Shift_Right();
void Lcd_Shift_Left();

#endif