#include <graphics.h>
#include <stdio.h>
#include <time.h>  
#include "1.h"
#include<stdlib.h>
extern double x1,x2,x3,x4,y5,y2,y3,y4;

void drawAB()
{
	time_t rawtime;
	int r=20,x=5;
    struct tm * timeinfo;
    mouse_msg msg = {0};
    
    	for ( ; is_run(); Sleep(300))//delay_fps(60)
		{
			int x[100],y[100];
			x[0]=(int)(400-p/2);
			y[0]=(int)(100+q);
			x[2]=(int)(400+p/2);
			x[3]=(int)(400-j/2);
			x[4]=(int)(400+j/2);
			y[1]=(int)(200+q);
			y[2]=(int)(200+q+k);//����������С��Ĺ�����������ͱ������� 
		
			getAxy();//��ȡA�𳵵�ǰ������	 
			getBxy();//��ȡB�𳵵�ǰ������ 
			cleardevice(); //���� 
			setcolor(GREEN);
			setfillcolor(BLUE);
			fillellipse(ax, ay, r, r);
			fillellipse(bx, by, r, r);//����Բ�εĻ� 
			setfillcolor(WHITE);
			fillellipse(900,300,20,20);
			fillellipse(900,400,20,20);
			fillellipse(900,500,20,20);
			fillellipse(900,600,20,20);
			fillellipse(900,700,20,20);
			fillellipse(1000,300,20,20);
			fillellipse(1000,400,20,20);
			fillellipse(1000,500,20,20);
			fillellipse(1000,600,20,20);//�����������Ƶİ�ť 
			if(flag==0)
			{
				setfillcolor(GREEN);
				fillellipse(x[0]-60,y[0],20,20);// A����Ľ�վָʾ�ƣ��ж��Ƿ񹫹����ʹ��״�� 
				fillellipse(x[3]-60,y[1],20,20);//B����Ľ�վָʾ�ƣ��ж��Ƿ񹫹����ʹ��״��  
			}
			if(flag==1)
			{
				setfillcolor(GREEN);
				fillellipse(x[0]-60,y[0],20,20);
				setfillcolor(RED);
				fillellipse(x[3]-60,y[1],20,20);//ͬ����ָʾ�� 
			}
			if(flag==2)
			{
				setfillcolor(RED);
				fillellipse(x[0]-60,y[0],20,20);
				setfillcolor(GREEN);
				fillellipse(x[3]-60,y[1],20,20);//ָʾ�� 
			}
			line(x[0],100,x[2],100);
			line(x[0],y[0],x[2],y[0]);
			line(x[0],100,x[0],y[0]);
			line(x[2],100,x[2],y[0]);//����A�𳵹�� 
		
			line(x[3],y[1],x[4],y[1]);
			line(x[3],y[2],x[4],y[2]);
			line(x[3],y[1],x[3],y[2]);
			line(x[4],y[1],x[4],y[2]); //����B�𳵹�� 
	
	//
			line(x1,y5,x3,y5+100);
			line(x2,y2,x4,y2+100);//����������Ľ�վ��ͳ�վ��ֱ����ߣ���ʾ������� 
		 
	   {												// ��ʱ�� 
			char str[100];
			time ( &rawtime );
            timeinfo = localtime ( &rawtime );
			sprintf(str, "��ǰʱ���ǣ�%s\n", asctime (timeinfo)); //����Ļ����ʾ��ǰʱ�� 
			setcolor(WHITE);
			outtextxy(0,0, str);
			sprintf(str, "A�𳵵�λ����%.1lf,B�𳵵�λ����%.1lf\nA����ʱ�����У�B��˳ʱ������", a.x,b.x);//����Ļ����ʾA,B��״̬ 
			setcolor(WHITE);
			outtextxy(0,40, str);
			if(flag==1)
			{
				sprintf(str, "A�𳵽�վ�У���"); //�жϣ���ʾ�Ƿ��վ 
				setcolor(RED);
				outtextxy(0,60, str);
			}
			if(flag==2)
			{
				sprintf(str, "B�𳵽�վ�У���"); //�жϣ���ʾ�Ƿ��վ 
				setcolor(RED);
				outtextxy(0,60, str);
			}
			if(way==1)
			{
			    sprintf(str, "Ŀǰִ�в��ԣ��쳵���ȣ�"); //��ʾ��ǰ���� 
				setcolor(RED);
				outtextxy(0,80, str);
			}
			if(way==2)
			{
			    sprintf(str, "Ŀǰִ�в��ԣ�������ԣ�"); 
				setcolor(RED);
				outtextxy(0,80, str);
			}
			sprintf(str, "A��վ��"); 
			setcolor(WHITE);
			outtextxy(x1,y5+20, str);
			sprintf(str, "A��վ��"); 
			setcolor(WHITE);
			outtextxy(x2,y5+20, str);
			sprintf(str, "B��վ��"); 
			setcolor(WHITE);
			outtextxy(x3,y3-20, str);
			sprintf(str, "B��վ��"); 
			setcolor(WHITE);
			outtextxy(x4,y3-20, str);//����A,B�Ľ�վ���վ��λ�� 
	        sprintf(str,"Aֹͣ");
	        setcolor(YELLOW);
	        outtextxy(800,300, str);
	        sprintf(str,"Bֹͣ");
	        setcolor(YELLOW);
	        outtextxy(800,400, str);
	        sprintf(str,"A����");
	        setcolor(YELLOW);
	        outtextxy(800,500, str);
	        sprintf(str,"B����");
	        setcolor(YELLOW);
	        outtextxy(800,600, str);
	        sprintf(str,"ȫ��ֹͣ");
	        setcolor(YELLOW);
	        outtextxy(800,700, str);
         	sprintf(str,"�ı�A�ٶ�");
	        setcolor(YELLOW);
	        outtextxy(1100,300, str);
         	sprintf(str,"�ı�B�ٶ�");
	        setcolor(YELLOW);
	        outtextxy(1100,400, str);
         	sprintf(str,"ȫ������");
	        setcolor(YELLOW);
	        outtextxy(1100,500, str);
         	sprintf(str,"�л���һ������");//�ڰ�ť�Ա߱�Ǹð�ť�Ĺ��� 
	        setcolor(YELLOW);
	        outtextxy(1100,600, str);
		}
	} 
		
}