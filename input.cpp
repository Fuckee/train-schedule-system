#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"1.h"
#include <graphics.h>

extern double x1,x2,x3,x4,y5,y2,y3; 
void input()
{
	                               //PIMAGE img;
	double A,B,C,D,l,E,F,G,H,I,J;
	sure=0;
	initgraph(1200,800);                                 //��ʼ���������� 
	printf("      ��ӭ����С�𳵣�����                              \n");
	printf("      ������Ϊ��չʾ�𳵵���ϵͳ                       \n  "); 
	printf("                                   ****\n");
	printf("		                      *  *\n");
	printf("      * ******************************************\n");
	printf("      *                                          *\n");
	printf("      *              ģ��𳵵���ϵͳ            *\n");
	printf("      *                                          *\n");
	printf("      *                                          *\n");
	printf("      ********************************************\n ");
	printf("           **                            **       \n ");
	printf("������\n1:�쳵���Ȳ���\n2:�������\n");
	scanf("%d",&way); 
	
	printf("������A�𳵵������ٶ�\n");//��ʾ���������ͬ�� 
	while(1)
	{
		if(!scanf("%lf", &a.v))
		{
			printf("�����˷Ƿ����ͣ�����������\n");//��ʾ 
			fflush(stdin);
			continue;
		}
		else
		{
			printf("����ɹ�!");
			fflush(stdin);
			break;
		}	 
	 }//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
	
	printf("������A�𳵵�����λ�ã�0~12��\n");//��ʾ���
	while(1)
		{
			if(!scanf("%lf", &a0) ||(a0<0||a0>12) )
			{
					printf("�����˷Ƿ����ͣ�����������\n");
					fflush(stdin);
					continue;	
			}
			else
			{
				printf("����ɹ�!");
				fflush(stdin);
				break;
			}	 
			 
		 }//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 	 
	
	printf("������A������\n");//��ʾ���
	while(1)
		{
			if(!scanf("%lf", &aw))
			{
				printf("�����˷Ƿ����ͣ�����������\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("����ɹ�!");
				fflush(stdin);
				break;
				}	 
		 }//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
	
	printf("������A����߶�\n");//��ʾ���
	while(1)
		{
			if(!scanf("%lf", &ah))
			{
				printf("�����˷Ƿ����ͣ�����������\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("����ɹ�!");
				fflush(stdin);
				break;
				}	 
		 }//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
	
	p=aw;
	q=ah;                                              //p��q����ͼ�λ����A�����͸� 
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
	
	E=2*(p+q);
	la=2*(aw+ah);
	A=(2*ah+3*aw/2)*12/la;
	B=6*aw/la;
	C=(6*aw+12*ah)/la;
	D=(6*aw+12*ah+12*aw)/la;
	
	printf("��ʾ��A�Ľ�վ�������6.0~%.1lf֮�䣬��վ�������%.1lf~6.0֮��,�ҽ�վ�������ڳ�վ��\n",D,C);
	printf("������A�Ľ�վ��\n");
	while(1)
		{
			if(!scanf("%lf", &aI)||(aI<6||aI>D))
			{
				printf("�����˷Ƿ����ͣ�����������\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("����ɹ�!");
				fflush(stdin);
				break;
			}	 
		 }//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
		
	printf("������A�ĳ�վ��\n");//��ʾ���
	while(1)
		{
			if(!scanf("%lf", &aO)||(aO<C||aO>6))
			{
				printf("�����˷Ƿ����ͣ�����������\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("����ɹ�!");
				fflush(stdin);
				break;
			}	 
		 }	 //�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
		
	a.x=a0;
	x1=400+p/2-(aI-C)*E/12;
	y5=100+q;
	x2=400+p/2-(aO-C)*E/12;
	y2=100+q;
	setcolor(GREEN);
	setfillcolor(BLUE);
	
	line((int)(400-p/2),(int)100,(int)(400+p/2),(int)100);
	line((int)(400-p/2),(int)(100+q),(int)(400+p/2),(int)(100+q));
	line((int)(400-p/2),(int)100,(int)(400-p/2),(int)(100+q));
	line((int)(400+p/2),(int)100,(int)(400+p/2),(int)(100+q));
	
	{
	char str[120];
	sprintf(str,"A");
	setcolor(WHITE);
	outtextxy((int)(400-p/2),80, str);
	sprintf(str,"B");
	setcolor(WHITE);
	outtextxy((int)(400+p/2),80, str);
	sprintf(str,"C");
	setcolor(WHITE);
	outtextxy((int)(400+p/2),(int)(110+q), str);
	sprintf(str,"D");
	setcolor(WHITE);
	outtextxy((int)(400-p/2),(int)(110+q), str);
	}delay_ms(0);//��ʼ������ 

	printf("������B�𳵵������ٶ�\n");//��ʾ���
	while(1)
		{
			if(!scanf("%lf", &b.v))
			{
				printf("�����˷Ƿ����ͣ�����������\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("����ɹ�!");
				fflush(stdin);
				break;
			}	 
		 }//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
	
	
	printf("������B�𳵵�����λ�ã�0~12��\n");//��ʾ���
	while(1)
	{
		if(!scanf("%lf", &b0) ||(b0<0||b0>12))
		{
			printf("�����˷Ƿ����ͣ�����������\n");
			fflush(stdin);
			continue;	
		}
		else
		{
			printf("����ɹ�!");
			fflush(stdin);
			break;
		}	 
		 
	 }	//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
	
	b.x=b0;
	printf("������B������\n");//��ʾ���
	while(1)
	{
		if(!scanf("%lf", &bw))
		{
			printf("�����˷Ƿ����ͣ�����������\n");
			fflush(stdin);
			continue;
		}
		else
		{
			printf("����ɹ�!");
			fflush(stdin);
			break;
		}	 
	 }//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
	
	printf("������B����߶�\n");//��ʾ���
	while(1)
		{
			if(!scanf("%lf", &bh))
			{
				printf("�����˷Ƿ����ͣ�����������\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("����ɹ�!");
				fflush(stdin);
				break;
			}	 
		 }//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
	
	j=bw;
	k=bh;
	
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
	
	lb=2*(bh+bw);
	F=2*(k+j);
	G=(2*bh+3*bw/2)*12/lb;
	H=6*bw/lb;
	I=(6*bw+12*bh)/lb;
	J=(6*bw+12*bh+12*bw)/lb;
	printf("��ʾ��B�Ľ�վ�������%.1lf~12.0֮��,��վ�������0.0~%.1lf֮�䣬�ҽ�վ�������ڳ�վ��\n",G,H);
	printf("������B�Ľ�վ��\n");//��ʾ���
	while(1)
	{
		if(!scanf("%lf", &bI)||(bI<G||bI>12))
		{
			printf("�����˷Ƿ����ͣ�����������\n");
			fflush(stdin);
			continue;
		}
		else
		{
			printf("����ɹ�!");
			fflush(stdin);
			break;
		}	 
	 }//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
	
	printf("������B�ĳ�վ��\n");

	while(1)
	{
		if(!scanf("%lf", &bO)||(bO<0||bO>H))
		{
			printf("�����˷Ƿ����ͣ�����������\n");
			fflush(stdin);
			continue;
		}
		else
		{
			printf("����ɹ�!");
			fflush(stdin);
			break;
		}	 
	 }	 //�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 	
	
	
 	x3=400-j/2+(bI-G)*F/12;
	x4=400+bO*F/12;
	setcolor(GREEN);
	line(400-(int)j/2,200+(int)q,400+(int)j/2,200+(int)q);
	line(400-(int)j/2,200+(int)q+(int)k,400+(int)j/2,200+(int)q+(int)k);
	line(400-(int)j/2,200+(int)q,400-(int)j/2,200+(int)q+(int)k);
	line(400+(int)j/2,200+(int)q,400+(int)j/2,200+(int)q+(int)k); 
	
	{
	char str[120];
	sprintf(str,"E");
	setcolor(WHITE);
	outtextxy(400-(int)j/2,180+(int)q, str);
	sprintf(str,"F");
	setcolor(WHITE);
	outtextxy(400+(int)j/2,180+(int)q, str);
	sprintf(str,"G");
	setcolor(WHITE);
	outtextxy(400+(int)j/2,210+(int)q+(int)k, str);
	sprintf(str,"H");
	setcolor(WHITE);
	outtextxy(400-(int)p/2,210+(int)q+(int)k, str);
	}
	
	setcolor(GREEN);
	line((int)x1,(int)y5,(int)x3,(int)y5+100);
	line((int)x2,(int)y2,(int)x4,(int)y2+100);
	delay_ms(0);
	fflush(stdin);
	printf("�������������Ļ�\n"); 
	FirstStart=getchar();
	
	int tmp=0;
	while(tmp==0)
	{
		switch(FirstStart)
	{
		case 'A':
			av=a.v;
			bv=0;
			a.s=1;
			b.s=0;
			s1=1;
			s2=0;
			tmp=1;
			printf("�����������\n");
			scanf("%lf",&Interval);
			break;
		case 'B':
			av=0;
			bv=b.v;
			a.s=0;
			b.s=1;
			s1=0;
			s2=1;
			tmp=1;
			printf("�����������\n");
			scanf("%lf",&Interval);
			break;
		case 'X':
			av=a.v;
			a.s=1;
			bv=b.v;
			b.s=1;
			s1=1;
			s2=1; 
			tmp=1;
			break;
		default:
			printf("�����������������롣\n");
			scanf("%c",&FirstStart);
			break;//�����ж����������Ƿ����󣬲���ȡ��Ӧ�Ĳ��� 
			
	}	
		
		
	}
	
	
	sure=1;
	a.x=a0;
	b.x=b0;
	s3=1;
	s4=1;
	n=2;
	fflush(stdin);
}
		
