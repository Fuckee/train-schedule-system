#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<windows.h>
#include"1.h"

void fastgo()//快车先走策略 
{
	if(fabs(a.x-aI)<EXP||fabs(b.x-bI)<EXP)//总判断，判断是否有火车即将进站，下面判断细化 
	{
	 if(fabs(a.x-aI)<EXP&&fabs(b.x-bI)<EXP)//A,B同时即将进站 
		{
			if(a.s!=0&&b.s!=0)
			{
				if(av>=bv)
				{
					bv=0;
					b.s=0;
				    s4=0;
				}//A快，停下B火车 ,用S4来让B火车等待启动 
				else if(av<bv)
				{
					av=0;
					a.s=0;
				    s3=0;
            
				}//B快，停下A火车 ,用S3来让A火车等待启动 
			}
		}
		if((fabs(a.x-aI)<EXP)&&(fabs(b.x-bI)>EXP))//A即将进站 
		{
			if(a.s!=0)//判断A的运动状态 
			{
				if(flag==2)//判断公共轨道的占用状况 
				{
					a.s=0;
					av=0;
					s3=0;
				}
			}
				
		}
		else if((fabs(a.x-aI)>EXP)&&(fabs(b.x-bI)<EXP))//B火车即将进站 
		{
			if(b.s!=0)//判断B的运动状态 
			{
				if(flag==1)//判断公共轨道的占用状况 
				{
					b.s=0;
					bv=0;
					s4=0;
				}
			}
		}
	}
}
