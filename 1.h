#ifndef _NODETYPE_H
#define _NODETYPE_H
#define EXP 0.1
typedef struct t
{
	double v;                            //设定的火车速度 
	double s;                       	//火车运行状态 ,0停止，1为运行 
	double x;                      		//火车位置
}train;                            		 //火车结构
extern double aw,ah,bw,bh;                //分别表示A，B轨道的宽度，高度
extern char FirstStart;
extern double Interval;
extern double a0,b0 ;                     //A，B的初始位置
extern double aI,aO,bI,bO;              //A，B的进站点，出站点 
extern train a,b;
extern double av,bv;                   //火车的当前速度 
extern char ch;                          //接受指令 
extern int flag;                      //判断公共轨道状态，0为空闲，1为A占用，2表示B占用 
extern int sure;
extern double p,q,j,k,la,lb;
extern double ax,ay,bx,by;
extern double x1,x2,x3,x4,y5,y2,y3,y4;    //x1,y1表示A轨道进站点的坐标 
extern int way;
void input();
void output();
void startA();
void startB();
void inturn();
void fastgo();
void control2();
void check();
void inni();
void getAxy();
void getBxy();
void drawAB();
void pictureGet();
extern int pause;                         //0表示输出，1表示停止输出 
extern int s1,s2,s3,s4,s5,s6;            //控制A,B火车的线程是否运行 
extern int n;//以上变量函数在main函数里面有详细说明 
#endif
