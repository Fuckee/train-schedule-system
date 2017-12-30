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
 	 			a.x=a.x-s/(l/12);//让A火车前进 
		  	 	while(a.x<=0)
		   		{
			  		 a.x=a.x+12;
		   		}
		   		if(way==1)//判断策略，决定如何调度火车进站 
		  	 		fastgo();
		  	 	else
		  	 		inturn();
			}
		}
		while(!s3&&!s1)
		{
			
		}//如果另一个火车进站或者该火车延时启动，则用这个循环来等待 
	}
}
			
			
		
		  	

		
		


		
