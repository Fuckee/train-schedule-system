#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"1.h"
#define TIME 1                                             //������ 
#include "graphics.h" 

void output()//������� 
{
	clock_t start, finish; 
 	double duration;
 	double tmp=0;
  	FILE *fPtr;
	time_t rawtime;
	struct tm * timeinfo;
	
	printf("A����ʱ�����У�B��˳ʱ������\n"); 

	  while(1){
	  	
	  	fPtr=fopen("Record.txt","a+");                          //���ļ� 
        if(pause!=1)
		{ 
        	start = clock();
        	duration=0.0;
        	while(duration<TIME)
				{
        		finish = clock();
        		duration = (double)(finish - start) / CLOCKS_PER_SEC; 			
				}//��ʱ������ÿ���涨ʱ������һ�� 
 			start = clock();
     		duration=0.0;
     		time ( &rawtime );
			timeinfo = localtime ( &rawtime );
			printf ( "��ǰʱ�䣺%s", asctime (timeinfo) );
			fprintf(fPtr, "��ǰʱ�䣺%s",asctime (timeinfo));
 			if(a.s==0)//ͨ�����������жϣ������������ 
			    {                                       //A�𳵵���� 
    			if(a.x==aI)
					{
    				printf("A�𳵵ȴ����������ͣ\n");//��������� 
    				fprintf(fPtr, "A�𳵵ȴ����������ͣ\n");//�ı���� 
                    } 
    			else{
    				printf("A����%.2lfλ����ͣ\n", a.x);
   					fprintf(fPtr, "A����%.2lfλ����ͣ\n", a.x);
    	            }
                }
   			 else if(a.s==1)
					{
	    		    if((a.x<12&&a.x>aI)||(a.x>0&&a.x<=aO))
					{
	    			printf("A�𳵽�վ�����У�����λ��%.2lf\n", a.x);
    				fprintf(fPtr, "A�𳵽�վ�����У�����λ��%.2lf\n", a.x);
	    	        }
	    		    else
					{
	    			printf("A���ڷǹ�����������У�����λ��%.2lf\n", a.x); 
    				fprintf(fPtr, "A���ڷǹ�����������У�����λ��%.2lf\n", a.x); 
	    	        }
	                }
	             if(b.s==0)
				 {                                   //B�𳵵���� 
   	               if(b.x==bI)
				    {
    		         printf("B�𳵵ȴ����������ͣ\n");
    		         fprintf(fPtr, "B�𳵵ȴ����������ͣ\n");
	                }
  	               else 
			 	    {
    		          printf("B����%.2lfλ����ͣ\n", b.x); 
    		          fprintf(fPtr, "B����%.2lfλ����ͣ\n", b.x);
       				}
                 }
                 else if(b.s==1)
		 	     {
	    	      		if((b.x<12&&b.x>bI)||(b.x>0&&b.x<=bO))
			 	 		{
	    		 		printf("B�𳵽�վ�����У�����λ��%.2lf\n", b.x);
	    		 		fprintf(fPtr, "B�𳵽�վ�����У�����λ��%.2lf\n", b.x);
	    	     		}
	    	     		else
			 	 		{
   				 		printf("B���ڷǹ�����������У�����λ��%.2lf\n", b.x);
    			 		fprintf(fPtr, "B���ڷǹ�����������У�����λ��%.2lf\n", b.x);
 	             		}
	             }      
    if(flag==0){
		printf("�����������\n");
		fprintf(fPtr, "�����������\n");
		} 
    if(flag==1){
		printf("���������A��ռ��\n\n");
		fprintf(fPtr, "���������A��ռ��\n\n");
		} 
    if(flag==2){
		printf("���������B��ռ��\n\n");
		fprintf(fPtr, "���������B��ռ��\n\n");
		} 
		} 
	fclose(fPtr);
	}
}

	
	
