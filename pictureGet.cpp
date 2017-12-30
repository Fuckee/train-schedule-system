#include <graphics.h>
#include <stdio.h>
#include <time.h>  
#include "1.h"
#include<stdlib.h>
extern int another;
void pictureGet()//按钮，接受鼠标信息的函数 
{
	mouse_msg msg = {0};
	int t=2;
    while(1)                           //delay_fps(60)
	{
		char change;
		while (mousemsg())
		{
			msg = getmouse();
		}//不停判断是否接受了鼠标信息 
		if((int)msg.is_down()==1)//总判断，当有鼠标按下的时候 ，下面细分的判断，根据鼠标的位置判断是按哪个按钮 
		{		
    	if(((msg.x-900)*(msg.x-900)+(msg.y-300)*(msg.y-300))<=400&&(int)msg.is_down()==1)//A火车停下的按钮 
		{
		  av=0;
		  a.s=0;
        } 
        if(((msg.x-900)*(msg.x-900)+(msg.y-400)*(msg.y-400))<=400&&(int)msg.is_down()==1)//B火车停下的按钮 
		{
		  bv=0;
		  b.s=0;
        } 
        if(((msg.x-900)*(msg.x-900)+(msg.y-500)*(msg.y-500))<=400&&(int)msg.is_down()==1)//A火车启动的按钮
		{
		  av=a.v;
		  a.s=1;
        } 
        if(((msg.x-900)*(msg.x-900)+(msg.y-600)*(msg.y-600))<=400&&(int)msg.is_down()==1)//B火车启动的按钮
		{
		  bv=b.v;
		  b.s=1;
        } 
        if(((msg.x-900)*(msg.x-900)+(msg.y-700)*(msg.y-700))<=400&&(int)msg.is_down()==1)//让两个火车都停下的按钮 
		{
		  	pause=1;
		    av=0;
			a.s=0;
			bv=0;
			b.s=0;
        } 
        if(((msg.x-1000)*(msg.x-1000)+(msg.y-300)*(msg.y-300))<=400&&(int)msg.is_down()==1)//改变A火车速度的按钮 
		{
		  	printf("输入A火车速度\n");
			scanf("%lf",&a.v); printf("A火车速度变为%lf\n",a.v);
        } 
        if(((msg.x-1000)*(msg.x-1000)+(msg.y-400)*(msg.y-400))<=400&&(int)msg.is_down()==1)//改变B火车速度的按钮 
		{
		  	printf("输入B火车速度\n");
			scanf("%lf",&b.v); printf("B火车速度变为%lf\n",b.v);
        } 
        if(((msg.x-1000)*(msg.x-1000)+(msg.y-500)*(msg.y-500))<=400&&(int)msg.is_down()==1)//让AB火车重新启动的按钮 
		{
			pause=0;
		    av=a.v;
			a.s=1;
			bv=b.v;
			b.s=1;
		}
		 if(((msg.x-1000)*(msg.x-1000)+(msg.y-600)*(msg.y-600))<=400&&(int)msg.is_down()==1)//改变策略的按钮 
		 {
		 if(way==1)
		 {
 			way=2;
		 }
		 else
		 way=1;	  
		}
	}
 }
} 