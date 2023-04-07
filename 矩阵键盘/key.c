#include <REGX52.H>
#include "delay.h"

int key()
{
  int Keynumber=0;
	P1=0xff;
	P1_0=0;
	if(P1_4==0){delay(20);while(P1_4==0){Keynumber=1;}}
	if(P1_5==0){delay(20);while(P1_5==0){Keynumber=2;}}
	if(P1_6==0){delay(20);while(P1_6==0){Keynumber=3;}}
	if(P1_7==0){delay(20);while(P1_7==0){Keynumber=4;}}
	
	P1=0xff;
	P1_1=0;
	if(P1_4==0){delay(20);while(P1_4==0){Keynumber=5;}}
	if(P1_5==0){delay(20);while(P1_5==0){Keynumber=6;}}
	if(P1_6==0){delay(20);while(P1_6==0){Keynumber=7;}}
	if(P1_7==0){delay(20);while(P1_7==0){Keynumber=8;}}
	
	P1=0xff;
	P1_2=0;
	if(P1_4==0){delay(20);while(P1_4==0){Keynumber=9;}}
	if(P1_5==0){delay(20);while(P1_5==0){Keynumber=10;}}
	if(P1_6==0){delay(20);while(P1_6==0){Keynumber=11;}}
	if(P1_7==0){delay(20);while(P1_7==0){Keynumber=12;}}
	
	P1=0xff;
	P1_3=0;
	if(P1_4==0){delay(20);while(P1_4==0){Keynumber=13;}}
	if(P1_5==0){delay(20);while(P1_5==0){Keynumber=14;}}
	if(P1_6==0){delay(20);while(P1_6==0){Keynumber=15;}}
	if(P1_7==0){delay(20);while(P1_7==0){Keynumber=16;}}
	return Keynumber;
}