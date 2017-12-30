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
			y[2]=(int)(200+q+k);//将按比例缩小后的轨道长宽用整型变量保存 
		
			getAxy();//获取A火车当前的坐标	 
			getBxy();//获取B火车当前的坐标 
			cleardevice(); //清屏 
			setcolor(GREEN);
			setfillcolor(BLUE);
			fillellipse(ax, ay, r, r);
			fillellipse(bx, by, r, r);//绘制圆形的火车 
			setfillcolor(WHITE);
			fillellipse(900,300,20,20);
			fillellipse(900,400,20,20);
			fillellipse(900,500,20,20);
			fillellipse(900,600,20,20);
			fillellipse(900,700,20,20);
			fillellipse(1000,300,20,20);
			fillellipse(1000,400,20,20);
			fillellipse(1000,500,20,20);
			fillellipse(1000,600,20,20);//画出各个控制的按钮 
			if(flag==0)
			{
				setfillcolor(GREEN);
				fillellipse(x[0]-60,y[0],20,20);// A轨道的进站指示灯，判断是否公共轨道使用状况 
				fillellipse(x[3]-60,y[1],20,20);//B轨道的进站指示灯，判断是否公共轨道使用状况  
			}
			if(flag==1)
			{
				setfillcolor(GREEN);
				fillellipse(x[0]-60,y[0],20,20);
				setfillcolor(RED);
				fillellipse(x[3]-60,y[1],20,20);//同样是指示灯 
			}
			if(flag==2)
			{
				setfillcolor(RED);
				fillellipse(x[0]-60,y[0],20,20);
				setfillcolor(GREEN);
				fillellipse(x[3]-60,y[1],20,20);//指示灯 
			}
			line(x[0],100,x[2],100);
			line(x[0],y[0],x[2],y[0]);
			line(x[0],100,x[0],y[0]);
			line(x[2],100,x[2],y[0]);//绘制A火车轨道 
		
			line(x[3],y[1],x[4],y[1]);
			line(x[3],y[2],x[4],y[2]);
			line(x[3],y[1],x[3],y[2]);
			line(x[4],y[1],x[4],y[2]); //绘制B火车轨道 
	
	//
			line(x1,y5,x3,y5+100);
			line(x2,y2,x4,y2+100);//在两个轨道的进站点和出站点分别连线，表示公共轨道 
		 
	   {												// 画时间 
			char str[100];
			time ( &rawtime );
            timeinfo = localtime ( &rawtime );
			sprintf(str, "当前时间是：%s\n", asctime (timeinfo)); //在屏幕上显示当前时间 
			setcolor(WHITE);
			outtextxy(0,0, str);
			sprintf(str, "A火车的位置是%.1lf,B火车的位置是%.1lf\nA车逆时针运行，B车顺时针运行", a.x,b.x);//在屏幕上显示A,B火车状态 
			setcolor(WHITE);
			outtextxy(0,40, str);
			if(flag==1)
			{
				sprintf(str, "A火车进站中！！"); //判断，显示是否进站 
				setcolor(RED);
				outtextxy(0,60, str);
			}
			if(flag==2)
			{
				sprintf(str, "B火车进站中！！"); //判断，显示是否进站 
				setcolor(RED);
				outtextxy(0,60, str);
			}
			if(way==1)
			{
			    sprintf(str, "目前执行策略：快车优先；"); //显示当前策略 
				setcolor(RED);
				outtextxy(0,80, str);
			}
			if(way==2)
			{
			    sprintf(str, "目前执行策略：交替策略；"); 
				setcolor(RED);
				outtextxy(0,80, str);
			}
			sprintf(str, "A进站点"); 
			setcolor(WHITE);
			outtextxy(x1,y5+20, str);
			sprintf(str, "A出站点"); 
			setcolor(WHITE);
			outtextxy(x2,y5+20, str);
			sprintf(str, "B进站点"); 
			setcolor(WHITE);
			outtextxy(x3,y3-20, str);
			sprintf(str, "B出站点"); 
			setcolor(WHITE);
			outtextxy(x4,y3-20, str);//画出A,B的进站点出站点位置 
	        sprintf(str,"A停止");
	        setcolor(YELLOW);
	        outtextxy(800,300, str);
	        sprintf(str,"B停止");
	        setcolor(YELLOW);
	        outtextxy(800,400, str);
	        sprintf(str,"A启动");
	        setcolor(YELLOW);
	        outtextxy(800,500, str);
	        sprintf(str,"B启动");
	        setcolor(YELLOW);
	        outtextxy(800,600, str);
	        sprintf(str,"全部停止");
	        setcolor(YELLOW);
	        outtextxy(800,700, str);
         	sprintf(str,"改变A速度");
	        setcolor(YELLOW);
	        outtextxy(1100,300, str);
         	sprintf(str,"改变B速度");
	        setcolor(YELLOW);
	        outtextxy(1100,400, str);
         	sprintf(str,"全部启动");
	        setcolor(YELLOW);
	        outtextxy(1100,500, str);
         	sprintf(str,"切换另一个策略");//在按钮旁边标记该按钮的功能 
	        setcolor(YELLOW);
	        outtextxy(1100,600, str);
		}
	} 
		
}