#include<stdio.h>    
void fib(int num)    
{    
 int n1=0,n2=1,n3;          
 printf("%d, %d, ",n1,n2); //printing 0 and 1    
 for(int i=2; i<num; i++) //loop starts from 2 because 0 and 1 are already printed    
	 {    
		  n3=n1+n2;    
		  printf("%d, ",n3);    
		  n1=n2;    
		  n2=n3;    
	 }  
	 printf("\n");
 }    
