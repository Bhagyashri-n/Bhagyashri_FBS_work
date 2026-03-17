#include<stdio.h>
void main(){
	int a=10;
	int b=30;
	int temp;
	
	printf("before swapping \n");
	printf("a=%d,b=%d \n",a,b);
	
	
	temp=a;
	a=b;
	b=temp;
	
	
	printf("after swapping\n");
	printf("a=%d,b=%d",a,b);
}