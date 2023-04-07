#include <REGX52.H>
#include "delay.h"
#define uchar unsigned char
sbit c=P2^2;
sbit b=P2^3;
sbit a=P2^4;
uchar code table[]={0x3f,0x06,0x5b,
										0x4f,0x66,0x6d,
										0x7d,0x07,0x7f,
										0x6f};
/////////////////////////////////////////////////////////////////
void show(int location,int number)
{
	switch(location)
	{
		case 1:a=1;b=1;c=1;break;
		case 2:a=1;b=1;c=0;break;
		case 3:a=1;b=0;c=1;break;
		case 4:a=1;b=0;c=0;break;
		case 5:a=0;b=1;c=1;break;
		case 6:a=0;b=1;c=0;break;
		case 7:a=0;b=0;c=1;break;
		case 8:a=0;b=0;c=0;break;
	}//选择在第几个位置上显示数字
	P0=table[number];//输出的数字是什么
//	delay(1);
//	P0=0;//消隐
}