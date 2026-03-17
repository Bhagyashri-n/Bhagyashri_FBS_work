#include<stdio.h>
int main()
{
	int a,b;
	char op;// operator treat as char 
	
	printf("enter value for a=");
	scanf("%d",&a);
	
	printf("enter value for b=");
	scanf("%d",&b);
	
	printf("choose operator(+,-,*,/,%)=");
	scanf(" %c",&op);
	
	if(op=='+')
	printf("result is=%d",a+b);
	else if(op=='-')
	printf("result is=%d",a-b);
	else if(op=='*')
	printf("result is=%d",a*b);
	else if(op=='/')
	printf("result is=%d",a/b);
	else if(op=='%')
	printf("result is=%d",a%b);
	return 0;		   	 
}