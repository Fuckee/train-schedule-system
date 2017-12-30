#include"1.h"
#include<windows.h> 
#include<Stdio.h>
#include<math.h>
void control2()//用于延时启动和进站停车后的重新启动 
{
	while(1)
	{
		while(s1==0)//如果一开始让B车先动 
		{
			Sleep((int)Interval*1000);
			s1=1;
			s3=1;
			a.s=1;
			av=a.v;
		}
		while(s2==0)//如果一开始让A车先动 
		{
           	Sleep((int)Interval*1000);
			{s2=1;
			b.s=1;
			bv=b.v;}
		}
		while(s3==0)//B火车进站，A火车停下，判断B火车是否已经出站 ，后让A再度启动 
		{
				while(fabs(b.x-bO)>EXP)
				{
					
				}
				
				s3=1;
				av=a.v;
				a.s=1;
		}
		while(s4==0)//A火车进站，B火车停下，判断A火车是否已经出站 ，后让B再度启动 
		{
				while(fabs(a.x-aO)>EXP)
				{
					
				}
				s4=1;
				bv=b.v;
				b.s=1;
		}
		
	}
	
}
