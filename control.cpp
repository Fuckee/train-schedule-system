#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<windows.h>
#include"1.h"

void fastgo()//�쳵���߲��� 
{
	if(fabs(a.x-aI)<EXP||fabs(b.x-bI)<EXP)//���жϣ��ж��Ƿ��л𳵼�����վ�������ж�ϸ�� 
	{
	 if(fabs(a.x-aI)<EXP&&fabs(b.x-bI)<EXP)//A,Bͬʱ������վ 
		{
			if(a.s!=0&&b.s!=0)
			{
				if(av>=bv)
				{
					bv=0;
					b.s=0;
				    s4=0;
				}//A�죬ͣ��B�� ,��S4����B�𳵵ȴ����� 
				else if(av<bv)
				{
					av=0;
					a.s=0;
				    s3=0;
            
				}//B�죬ͣ��A�� ,��S3����A�𳵵ȴ����� 
			}
		}
		if((fabs(a.x-aI)<EXP)&&(fabs(b.x-bI)>EXP))//A������վ 
		{
			if(a.s!=0)//�ж�A���˶�״̬ 
			{
				if(flag==2)//�жϹ��������ռ��״�� 
				{
					a.s=0;
					av=0;
					s3=0;
				}
			}
				
		}
		else if((fabs(a.x-aI)>EXP)&&(fabs(b.x-bI)<EXP))//B�𳵼�����վ 
		{
			if(b.s!=0)//�ж�B���˶�״̬ 
			{
				if(flag==1)//�жϹ��������ռ��״�� 
				{
					b.s=0;
					bv=0;
					s4=0;
				}
			}
		}
	}
}
