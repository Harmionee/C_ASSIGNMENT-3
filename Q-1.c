#include<stdio.h>  
 int main()    
{    
int a, b,*x,*y;
printf("Enter 2 numbers :");
scanf("%d%d",&a,&b);
printf("Before swap a=%d b=%d",*x,*y);
a=&x;
b=&y;
*x=*x+*y;    
*y=*x-*y;
*x=*x-*y;   
printf("\nAfter swap a=%d b=%d",*x,*y);    
return 0;  
} 
