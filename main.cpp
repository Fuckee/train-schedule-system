#include<stdio.h>
#include<winsock.h>
#include<winbase.h>
#include<stdlib.h>
#include<time.h>
#include"1.h"
double aw,ah,bw,bh;//分别表示A，B轨道的宽度，高度
char FirstStart;//先启动的火车 
double Interval;//启动间隔 
double a0,b0 ;//A，B的初始位置
double aI,aO,bI,bO;//A，B的进站点，出站点 
train a,b;//A,B火车结构体 
double av,bv;//火车的当前速度 
char ch;//接受指令 
int flag;//判断公共轨道状态，0为空闲，1为A占用，2表示B占用 
int sure;//判断是否输入完毕的变量 
double p,q,j,k,la,lb;//保存图形化轨道的参数 
double ax,ay,bx,by;//代表A,B进出站点 
int pause;//0表示输出，1表示停止输出 
int s1,s2,s3,s4,s5,s6;//控制A,B火车的线程是否运行 
int n;//交替策略的循环变量 
double x1,x2,x3,x4,y5,y2,y3,y4;//保存图形化轨道的参数 
int way;//代表当前策略 
void input();//输入函数 
void output();//输出函数 
void startA();//控制A火车的函数 
void startB();//控制B火车的函数 
void fastgo();//快车优先函数 
void control2();//用于再度启动火车的函数 
void check();//监测公共轨道的函数 
void getAxy();//获取A火车坐标的函数 
void getBxy();//获取B火车坐标的函数 
void pictureGet();//按钮函数 
void inturn();//交替策略函数 

int main()
{
	DWORD ThreadID1=1,ThreadID2=2,ThreadID3=3,ThreadID4=4,ThreadID5=5,ThreadID6=6;
	HANDLE hThread1,hThread2,hThread3,hThread4,hThread5,hThread6;
	pause=0;
	input();
	
	while(sure!=1)
	{
		
	} 
	
	hThread6=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)startA,NULL,0,&ThreadID6);
	hThread1=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)startB,NULL,0,&ThreadID1);
	hThread5=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)output,NULL,0,&ThreadID5);
	hThread3=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)control2,NULL,0,&ThreadID3);
	hThread4=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)pictureGet,NULL,0,&ThreadID4);
	//启动线程 
	inni();
	CloseHandle(hThread1);
	CloseHandle(hThread2);
	CloseHandle(hThread3);
	CloseHandle(hThread5);
	CloseHandle(hThread6);
    
    system("pause");

	return 0;
}
