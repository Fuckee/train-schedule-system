#include <graphics.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include"1.h"

void inni()                        //��ʼ�� 
{
    p=aw;
	q=ah;
	j=bw;
	k=bh;   
	                                     //p��q����ͼ�λ����A�����͸� 
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
	//���������Ź�� 
	drawAB();//����ͼ�ν��治�ϸ��µ���ѭ�� 
	closegraph();//�ر�ͼ�λ����� 
}
