#include<stdio.h>
#include <graphics.h>
#include"1.h"
#include<stdlib.h>
extern double x3,x4,y3,y4;
void getBxy()//��ȡB�𳵵���ͼ�λ���������� 
{
	double A,B,C,D,l=2*(j+k);
	lb=2*(bh+bw);
	A=(2*bh+3*bw/2)*12/lb;
	B=6*bw/lb;
	C=(6*bw+12*bh)/lb;
	D=(6*bw+12*bh+12*bw)/lb;
	x3=400-j/2+(bI-A)*l/12;
	y3=200+q;
	x4=400+bO*l/12;
	y4=200+q;
	//�𳵸����ڹ���ϵĲ�ͬ�߶��ϣ�Ӧ���ò�ͬ�ļ���ת����ʽ 
	if(b.x>0&&b.x<B)//��O~B �ļ��� 
    {
    	bx=400+b.x*l/12;
		by=200+q;
    }
    if(b.x>B&&b.x<C)//��B~C �ļ��� 
    {
    	by=200+q+(b.x-B)*l/12;
		bx=400+j/2;
    }
    if(b.x>C&&b.x<D)//��C~D �ļ��� 
    {
    	bx=400+j/2-(b.x-C)*l/12;
		by=200+q+k;
    }
    if(b.x>D&&b.x<A)//��D~A �ļ��� 
    {
    	by=200+q+k-(b.x-D)*l/12;
		bx=400-j/2;
    }
    if(b.x>A&&b.x<12)//��A~O �ļ��� 
    {
    	bx=400-j/2+(b.x-A)*l/12;
		by=200+q;
    }
}                                                //����B�𳵵�x��y���� 