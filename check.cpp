#include"1.h"
#include<stdio.h>

void check()//�жϹ��������ʹ����� 
{
		if((a.x>aO&&a.x<aI)&&(b.x>bO&&b.x<bI))//A �ڹ��������B���� 
		{
			flag=1;
		}
		else if((b.x>bI||b.x<bO)&&(a.x>aI||a.x<aO))//B �ڹ��������A����
		{
			flag=2;
		}
		else//��������޻� 
		{
			flag=0;
		}
}
