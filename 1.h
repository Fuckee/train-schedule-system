#ifndef _NODETYPE_H
#define _NODETYPE_H
#define EXP 0.1
typedef struct t
{
	double v;                            //�趨�Ļ��ٶ� 
	double s;                       	//������״̬ ,0ֹͣ��1Ϊ���� 
	double x;                      		//��λ��
}train;                            		 //�𳵽ṹ
extern double aw,ah,bw,bh;                //�ֱ��ʾA��B����Ŀ�ȣ��߶�
extern char FirstStart;
extern double Interval;
extern double a0,b0 ;                     //A��B�ĳ�ʼλ��
extern double aI,aO,bI,bO;              //A��B�Ľ�վ�㣬��վ�� 
extern train a,b;
extern double av,bv;                   //�𳵵ĵ�ǰ�ٶ� 
extern char ch;                          //����ָ�� 
extern int flag;                      //�жϹ������״̬��0Ϊ���У�1ΪAռ�ã�2��ʾBռ�� 
extern int sure;
extern double p,q,j,k,la,lb;
extern double ax,ay,bx,by;
extern double x1,x2,x3,x4,y5,y2,y3,y4;    //x1,y1��ʾA�����վ������� 
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
extern int pause;                         //0��ʾ�����1��ʾֹͣ��� 
extern int s1,s2,s3,s4,s5,s6;            //����A,B�𳵵��߳��Ƿ����� 
extern int n;//���ϱ���������main������������ϸ˵�� 
#endif
