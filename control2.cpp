#include"1.h"
#include<windows.h> 
#include<Stdio.h>
#include<math.h>
void control2()//������ʱ�����ͽ�վͣ������������� 
{
	while(1)
	{
		while(s1==0)//���һ��ʼ��B���ȶ� 
		{
			Sleep((int)Interval*1000);
			s1=1;
			s3=1;
			a.s=1;
			av=a.v;
		}
		while(s2==0)//���һ��ʼ��A���ȶ� 
		{
           	Sleep((int)Interval*1000);
			{s2=1;
			b.s=1;
			bv=b.v;}
		}
		while(s3==0)//B�𳵽�վ��A��ͣ�£��ж�B���Ƿ��Ѿ���վ ������A�ٶ����� 
		{
				while(fabs(b.x-bO)>EXP)
				{
					
				}
				
				s3=1;
				av=a.v;
				a.s=1;
		}
		while(s4==0)//A�𳵽�վ��B��ͣ�£��ж�A���Ƿ��Ѿ���վ ������B�ٶ����� 
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
