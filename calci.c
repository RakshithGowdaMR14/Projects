#include<stdio.h>

void main()
{

	int a,b,ch,res;
	
	printf("Enter the value of a \n");
	scanf("%d",&a);
	
	printf("Enter the value of b \n");
	scanf("%d",&b);
	printf("1.ADDITION\n");
	printf("2.SUBSTRACTION\n");
	printf("3.MULTIPLICATION\n");
	printf("4.DIVISION\n");
	
	printf("Enter your choice \n");
	scanf("%d",&ch);
 
switch(ch)
{
case 1:  res =  a +  b;
	   {
	    	printf("%d + %d = %d ",a,b,res);
	   }
	   break;
case 2:  res =a-b;
	   {
	   		printf(" %d - %d = %d ",a,b,res);
	   }
	   break;
case 3:  res =a*b;
	   {
	   		printf(" %d * %d = %d ",a,b,res);
	   } 
	   break;
case 4:  res =a/b;
	   {
	   		printf(" %d / %d = %d ",a,b,res);
	   }
       break;
default : printf("invalid syntax");
}	
} 
