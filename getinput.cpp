#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"1.h"
#include<windows.h>
extern int another;
void getInput()
{ 
      char ch;
	  while(1)
	  {
	  	if(another==0)
	  	{
	   		ch=getchar();
	   		switch(ch)
	   		{
	   			case 'A':
				   av=0;
				   a.s=0;
				   ch='l';
				   break;
	   			case 'C':
				   av=a.v;
				   a.s=1;
				   ch='l';
				   break;
	   			case 'B':
				   bv=0;
				   b.s=0;
				   ch='l';
				   break;
	   			case 'D':
				   bv=b.v;
				   b.s=1;
				   ch='l';
				   break;
	   			case 'P':
				   pause=1;
				   av=0;
				   a.s=0;
				   bv=0;
				   b.s=0;
				   break;
	   			case 'S':
				   pause=0;
				   break;
				   default:
				   av=a.v;
				   a.s=1;
				   bv=b.v;
				   b.s=1;
				   pause=0;
				   break;
		    
      }
	  	}
	  }
}
