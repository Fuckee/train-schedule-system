#include"1.h"
#include<stdio.h>

void check()//判断公共轨道的使用情况 
{
		if((a.x>aO&&a.x<aI)&&(b.x>bO&&b.x<bI))//A 在公共轨道，B不在 
		{
			flag=1;
		}
		else if((b.x>bI||b.x<bO)&&(a.x>aI||a.x<aO))//B 在公共轨道，A不在
		{
			flag=2;
		}
		else//公共轨道无火车 
		{
			flag=0;
		}
}
