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
	initgraph(1200,800);                                 //初始化动画界面 
	printf("      欢迎来到小火车！！！                              \n");
	printf("      接下来为您展示火车调度系统                       \n  "); 
	printf("                                   ****\n");
	printf("		                      *  *\n");
	printf("      * ******************************************\n");
	printf("      *                                          *\n");
	printf("      *              模拟火车调度系统            *\n");
	printf("      *                                          *\n");
	printf("      *                                          *\n");
	printf("      ********************************************\n ");
	printf("           **                            **       \n ");
	printf("请输入\n1:快车优先策略\n2:交替策略\n");
	scanf("%d",&way); 
	
	printf("请输入A火车的运行速度\n");//提示输出（下面同） 
	while(1)
	{
		if(!scanf("%lf", &a.v))
		{
			printf("输入了非法类型，请重新输入\n");//提示 
			fflush(stdin);
			continue;
		}
		else
		{
			printf("输入成功!");
			fflush(stdin);
			break;
		}	 
	 }//用于判断输入类型是否有误，并采取相应的操作 
	
	printf("请输入A火车的启动位置（0~12）\n");//提示输出
	while(1)
		{
			if(!scanf("%lf", &a0) ||(a0<0||a0>12) )
			{
					printf("输入了非法类型，请重新输入\n");
					fflush(stdin);
					continue;	
			}
			else
			{
				printf("输入成功!");
				fflush(stdin);
				break;
			}	 
			 
		 }//用于判断输入类型是否有误，并采取相应的操作 	 
	
	printf("请输入A轨道宽度\n");//提示输出
	while(1)
		{
			if(!scanf("%lf", &aw))
			{
				printf("输入了非法类型，请重新输入\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("输入成功!");
				fflush(stdin);
				break;
				}	 
		 }//用于判断输入类型是否有误，并采取相应的操作 
	
	printf("请输入A轨道高度\n");//提示输出
	while(1)
		{
			if(!scanf("%lf", &ah))
			{
				printf("输入了非法类型，请重新输入\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("输入成功!");
				fflush(stdin);
				break;
				}	 
		 }//用于判断输入类型是否有误，并采取相应的操作 
	
	p=aw;
	q=ah;                                              //p，q代表图形化里的A轨道宽和高 
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
	
	printf("提示：A的进站点必须在6.0~%.1lf之间，出站点必须在%.1lf~6.0之间,且进站点必须大于出站点\n",D,C);
	printf("请输入A的进站点\n");
	while(1)
		{
			if(!scanf("%lf", &aI)||(aI<6||aI>D))
			{
				printf("输入了非法类型，请重新输入\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("输入成功!");
				fflush(stdin);
				break;
			}	 
		 }//用于判断输入类型是否有误，并采取相应的操作 
		
	printf("请输入A的出站点\n");//提示输出
	while(1)
		{
			if(!scanf("%lf", &aO)||(aO<C||aO>6))
			{
				printf("输入了非法类型，请重新输入\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("输入成功!");
				fflush(stdin);
				break;
			}	 
		 }	 //用于判断输入类型是否有误，并采取相应的操作 
		
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
	}delay_ms(0);//初始化界面 

	printf("请输入B火车的运行速度\n");//提示输出
	while(1)
		{
			if(!scanf("%lf", &b.v))
			{
				printf("输入了非法类型，请重新输入\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("输入成功!");
				fflush(stdin);
				break;
			}	 
		 }//用于判断输入类型是否有误，并采取相应的操作 
	
	
	printf("请输入B火车的启动位置（0~12）\n");//提示输出
	while(1)
	{
		if(!scanf("%lf", &b0) ||(b0<0||b0>12))
		{
			printf("输入了非法类型，请重新输入\n");
			fflush(stdin);
			continue;	
		}
		else
		{
			printf("输入成功!");
			fflush(stdin);
			break;
		}	 
		 
	 }	//用于判断输入类型是否有误，并采取相应的操作 
	
	b.x=b0;
	printf("请输入B轨道宽度\n");//提示输出
	while(1)
	{
		if(!scanf("%lf", &bw))
		{
			printf("输入了非法类型，请重新输入\n");
			fflush(stdin);
			continue;
		}
		else
		{
			printf("输入成功!");
			fflush(stdin);
			break;
		}	 
	 }//用于判断输入类型是否有误，并采取相应的操作 
	
	printf("请输入B轨道高度\n");//提示输出
	while(1)
		{
			if(!scanf("%lf", &bh))
			{
				printf("输入了非法类型，请重新输入\n");
				fflush(stdin);
				continue;
			}
			else
			{
				printf("输入成功!");
				fflush(stdin);
				break;
			}	 
		 }//用于判断输入类型是否有误，并采取相应的操作 
	
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
	printf("提示：B的进站点必须在%.1lf~12.0之间,出站点必须在0.0~%.1lf之间，且进站点必须大于出站点\n",G,H);
	printf("请输入B的进站点\n");//提示输出
	while(1)
	{
		if(!scanf("%lf", &bI)||(bI<G||bI>12))
		{
			printf("输入了非法类型，请重新输入\n");
			fflush(stdin);
			continue;
		}
		else
		{
			printf("输入成功!");
			fflush(stdin);
			break;
		}	 
	 }//用于判断输入类型是否有误，并采取相应的操作 
	
	printf("请输入B的出站点\n");

	while(1)
	{
		if(!scanf("%lf", &bO)||(bO<0||bO>H))
		{
			printf("输入了非法类型，请重新输入\n");
			fflush(stdin);
			continue;
		}
		else
		{
			printf("输入成功!");
			fflush(stdin);
			break;
		}	 
	 }	 //用于判断输入类型是否有误，并采取相应的操作 	
	
	
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
	printf("请输入先启动的火车\n"); 
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
			printf("输入启动间隔\n");
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
			printf("输入启动间隔\n");
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
			printf("输入有误，请重新输入。\n");
			scanf("%c",&FirstStart);
			break;//用于判断输入类型是否有误，并采取相应的操作 
			
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
		
