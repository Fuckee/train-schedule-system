#include<stdlib.h>
#include<stdio.h>
#include <windows.h>  
#include<time.h>
#include"1.h"	
void startB()
{
	clock_t begin, finish;
	double duration=0;
	double t=0,s,l=2*(bw+bh);
	
	while(1)
	{	
		while(s2&&s4)
		{
			check();
			begin=clock();
			Sleep(1);
			finish=clock();
			t= (double)(finish - begin) / CLOCKS_PER_SEC;
			s=bv*t;
 	 		b.x=b.x+s/(l/12);//�û�ǰ�� 
	  	 	while(b.x>=12)
		   	{
			   b.x=b.x-12;
		   	}
			if(way==1)//�жϲ��ԣ�������ο��ƻ𳵽�վ 
		  	 	fastgo();
 	 		else
		  	 	inturn();
		}
		while(!s4&&!s2)
		{
			
		}//�����һ���𳵽�վ���߸û���ʱ�������������ѭ�����ȴ� 
	}
}
