#include<stdio.h>
#include <graphics.h>
#include"1.h"
#include<stdlib.h>
extern double x1,x2,y5,y2;

void getAxy()
{
	double A,B,C,D,l=2*(q+p);
	la=2*(aw+ah);
	A=(2*ah+3*aw/2)*12/la;
	B=6*aw/la;
	C=(6*aw+12*ah)/la;
	D=(6*aw+12*ah+12*aw)/la;
	x1=400+p/2-(aI-C)*l/12;y5=100+q;
	x2=400+p/2-(aO-C)*l/12;y2=100+q;
	//根据A火车所在边采用不同公式来计算A火车的坐标 
    if(a.x>0&&a.x<B)//A火车在O~B 
    {
    	ax=400+a.x*l/12;ay=100;
    }
    else if(a.x>B&&a.x<C)//A火车在B~C 
    {
    	ay=100+(a.x-B)*l/12;ax=400+p/2;
    }
    else if(a.x>C&&a.x<D)//A火车在C~D 
    {
    	ax=400+p/2-(a.x-C)*l/12;ay=100+q;
    }
    else if(a.x>D&&a.x<A)//A火车在D~A 
    {
    	ay=100+q-(a.x-D)*l/12;ax=400-p/2;
    }
    else if(a.x>A&&a.x<12)//A火车在A~O 
    {
    	ax=400-p/2+(a.x-A)*l/12;ay=100;
    }
}                                    //更新A火车的x，y坐标 