#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <windows.h>  
#include"1.h"
void startA()
{
	clock_t begin, finish;
	double duration=0;
	double t=0,s,l=2*(aw+ah);                         //l???????????
	while(1)
	{
		while(s1&&s3)
		{
			if(a.s!=0)
			{
				check();
				begin=clock();
				Sleep(1);
				finish=clock();
				t= (double)(finish - begin) / CLOCKS_PER_SEC;
				s=av*t;
 	 			a.x=a.x-s/(l/12);//��A��ǰ�� 
		  	 	while(a.x<=0)
		   		{
			  		 a.x=a.x+12;
		   		}
		   		if(way==1)//�жϲ��ԣ�������ε��Ȼ𳵽�վ 
		  	 		fastgo();
		  	 	else
		  	 		inturn();
			}
		}
		while(!s3&&!s1)
		{
			
		}//�����һ���𳵽�վ���߸û���ʱ�������������ѭ�����ȴ� 
	}
}
			
			
		
		  	

		
		


		
