#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"1.h"
#define TIME 1                                             //输出间隔 
#include "graphics.h" 

void output()//输出函数 
{
	clock_t start, finish; 
 	double duration;
 	double tmp=0;
  	FILE *fPtr;
	time_t rawtime;
	struct tm * timeinfo;
	
	printf("A火车逆时针运行，B火车顺时针运行\n"); 

	  while(1){
	  	
	  	fPtr=fopen("Record.txt","a+");                          //打开文件 
        if(pause!=1)
		{ 
        	start = clock();
        	duration=0.0;
        	while(duration<TIME)
				{
        		finish = clock();
        		duration = (double)(finish - start) / CLOCKS_PER_SEC; 			
				}//计时函数，每过规定时间就输出一次 
 			start = clock();
     		duration=0.0;
     		time ( &rawtime );
			timeinfo = localtime ( &rawtime );
			printf ( "当前时间：%s", asctime (timeinfo) );
			fprintf(fPtr, "当前时间：%s",asctime (timeinfo));
 			if(a.s==0)//通过各种条件判断，决定输出内容 
			    {                                       //A火车的输出 
    			if(a.x==aI)
					{
    				printf("A火车等待公共轨道暂停\n");//命令行输出 
    				fprintf(fPtr, "A火车等待公共轨道暂停\n");//文本输出 
                    } 
    			else{
    				printf("A火车在%.2lf位置暂停\n", a.x);
   					fprintf(fPtr, "A火车在%.2lf位置暂停\n", a.x);
    	            }
                }
   			 else if(a.s==1)
					{
	    		    if((a.x<12&&a.x>aI)||(a.x>0&&a.x<=aO))
					{
	    			printf("A火车进站运行中，处于位置%.2lf\n", a.x);
    				fprintf(fPtr, "A火车进站运行中，处于位置%.2lf\n", a.x);
	    	        }
	    		    else
					{
	    			printf("A火车在非公共轨道上运行，处于位置%.2lf\n", a.x); 
    				fprintf(fPtr, "A火车在非公共轨道上运行，处于位置%.2lf\n", a.x); 
	    	        }
	                }
	             if(b.s==0)
				 {                                   //B火车的输出 
   	               if(b.x==bI)
				    {
    		         printf("B火车等待公共轨道暂停\n");
    		         fprintf(fPtr, "B火车等待公共轨道暂停\n");
	                }
  	               else 
			 	    {
    		          printf("B火车在%.2lf位置暂停\n", b.x); 
    		          fprintf(fPtr, "B火车在%.2lf位置暂停\n", b.x);
       				}
                 }
                 else if(b.s==1)
		 	     {
	    	      		if((b.x<12&&b.x>bI)||(b.x>0&&b.x<=bO))
			 	 		{
	    		 		printf("B火车进站运行中，处于位置%.2lf\n", b.x);
	    		 		fprintf(fPtr, "B火车进站运行中，处于位置%.2lf\n", b.x);
	    	     		}
	    	     		else
			 	 		{
   				 		printf("B火车在非公共轨道上运行，处于位置%.2lf\n", b.x);
    			 		fprintf(fPtr, "B火车在非公共轨道上运行，处于位置%.2lf\n", b.x);
 	             		}
	             }      
    if(flag==0){
		printf("公共轨道空闲\n");
		fprintf(fPtr, "公共轨道空闲\n");
		} 
    if(flag==1){
		printf("公共轨道被A车占有\n\n");
		fprintf(fPtr, "公共轨道被A车占有\n\n");
		} 
    if(flag==2){
		printf("公共轨道被B车占有\n\n");
		fprintf(fPtr, "公共轨道被B车占有\n\n");
		} 
		} 
	fclose(fPtr);
	}
}

	
	
