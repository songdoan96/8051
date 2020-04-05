#ifndef _PORT_H
#define _PORT_H

sbit SOFT_I2C_SCL	= P1^1;
sbit SOFT_I2C_SDA	= P1^0;

sbit LCD_RS	= P2^0;
sbit LCD_EN	= P2^1;
sbit LCD_D4	= P3^4;
sbit LCD_D5 = P3^5;
sbit LCD_D6 = P3^6;
sbit LCD_D7 = P3^7;

sbit BTN = P1^7;

#endif