#include<stdio.h>
#include<winsock.h>
#include<winbase.h>
#include<stdlib.h>
#include<time.h>
#include"1.h"
double aw,ah,bw,bh;//�ֱ��ʾA��B����Ŀ�ȣ��߶�
char FirstStart;//�������Ļ� 
double Interval;//������� 
double a0,b0 ;//A��B�ĳ�ʼλ��
double aI,aO,bI,bO;//A��B�Ľ�վ�㣬��վ�� 
train a,b;//A,B�𳵽ṹ�� 
double av,bv;//�𳵵ĵ�ǰ�ٶ� 
char ch;//����ָ�� 
int flag;//�жϹ������״̬��0Ϊ���У�1ΪAռ�ã�2��ʾBռ�� 
int sure;//�ж��Ƿ�������ϵı��� 
double p,q,j,k,la,lb;//����ͼ�λ�����Ĳ��� 
double ax,ay,bx,by;//����A,B����վ�� 
int pause;//0��ʾ�����1��ʾֹͣ��� 
int s1,s2,s3,s4,s5,s6;//����A,B�𳵵��߳��Ƿ����� 
int n;//������Ե�ѭ������ 
double x1,x2,x3,x4,y5,y2,y3,y4;//����ͼ�λ�����Ĳ��� 
int way;//����ǰ���� 
void input();//���뺯�� 
void output();//������� 
void startA();//����A�𳵵ĺ��� 
void startB();//����B�𳵵ĺ��� 
void fastgo();//�쳵���Ⱥ��� 
void control2();//�����ٶ������𳵵ĺ��� 
void check();//��⹫������ĺ��� 
void getAxy();//��ȡA������ĺ��� 
void getBxy();//��ȡB������ĺ��� 
void pictureGet();//��ť���� 
void inturn();//������Ժ��� 

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
	//�����߳� 
	inni();
	CloseHandle(hThread1);
	CloseHandle(hThread2);
	CloseHandle(hThread3);
	CloseHandle(hThread5);
	CloseHandle(hThread6);
    
    system("pause");

	return 0;
}
