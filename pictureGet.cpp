#include <graphics.h>
#include <stdio.h>
#include <time.h>  
#include "1.h"
#include<stdlib.h>
extern int another;
void pictureGet()//��ť�����������Ϣ�ĺ��� 
{
	mouse_msg msg = {0};
	int t=2;
    while(1)                           //delay_fps(60)
	{
		char change;
		while (mousemsg())
		{
			msg = getmouse();
		}//��ͣ�ж��Ƿ�����������Ϣ 
		if((int)msg.is_down()==1)//���жϣ�������갴�µ�ʱ�� ������ϸ�ֵ��жϣ���������λ���ж��ǰ��ĸ���ť 
		{		
    	if(((msg.x-900)*(msg.x-900)+(msg.y-300)*(msg.y-300))<=400&&(int)msg.is_down()==1)//A��ͣ�µİ�ť 
		{
		  av=0;
		  a.s=0;
        } 
        if(((msg.x-900)*(msg.x-900)+(msg.y-400)*(msg.y-400))<=400&&(int)msg.is_down()==1)//B��ͣ�µİ�ť 
		{
		  bv=0;
		  b.s=0;
        } 
        if(((msg.x-900)*(msg.x-900)+(msg.y-500)*(msg.y-500))<=400&&(int)msg.is_down()==1)//A�������İ�ť
		{
		  av=a.v;
		  a.s=1;
        } 
        if(((msg.x-900)*(msg.x-900)+(msg.y-600)*(msg.y-600))<=400&&(int)msg.is_down()==1)//B�������İ�ť
		{
		  bv=b.v;
		  b.s=1;
        } 
        if(((msg.x-900)*(msg.x-900)+(msg.y-700)*(msg.y-700))<=400&&(int)msg.is_down()==1)//�������𳵶�ͣ�µİ�ť 
		{
		  	pause=1;
		    av=0;
			a.s=0;
			bv=0;
			b.s=0;
        } 
        if(((msg.x-1000)*(msg.x-1000)+(msg.y-300)*(msg.y-300))<=400&&(int)msg.is_down()==1)//�ı�A���ٶȵİ�ť 
		{
		  	printf("����A���ٶ�\n");
			scanf("%lf",&a.v); printf("A���ٶȱ�Ϊ%lf\n",a.v);
        } 
        if(((msg.x-1000)*(msg.x-1000)+(msg.y-400)*(msg.y-400))<=400&&(int)msg.is_down()==1)//�ı�B���ٶȵİ�ť 
		{
		  	printf("����B���ٶ�\n");
			scanf("%lf",&b.v); printf("B���ٶȱ�Ϊ%lf\n",b.v);
        } 
        if(((msg.x-1000)*(msg.x-1000)+(msg.y-500)*(msg.y-500))<=400&&(int)msg.is_down()==1)//��AB�����������İ�ť 
		{
			pause=0;
		    av=a.v;
			a.s=1;
			bv=b.v;
			b.s=1;
		}
		 if(((msg.x-1000)*(msg.x-1000)+(msg.y-600)*(msg.y-600))<=400&&(int)msg.is_down()==1)//�ı���Եİ�ť 
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