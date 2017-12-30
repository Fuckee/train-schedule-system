#include <graphics.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include"1.h"

void inni()                        //初始化 
{
    p=aw;
	q=ah;
	j=bw;
	k=bh;   
	                                     //p，q代表图形化里的A轨道宽和高 
    while(p>600)
	{
		p=p/2;
		q=q/2;
	}
	while(q>250)
	{
		q=q/2;
		p=p/2;
	}
	while(j>600)
	{
		j=j/2;
		k=k/2;
	}
	while(k>250)
	{
		k=k/2;
		j=j/2;
	}
	//按比例缩放轨道 
	drawAB();//进行图形界面不断更新的死循环 
	closegraph();//关闭图形化界面 
}
