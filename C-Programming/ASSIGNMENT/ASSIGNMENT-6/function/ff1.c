#include<stdio.h>
int add();
int main(){
	
	int c=add();
	
	printf("addition is=%d",c);
	
}int add(){
	int a=50;
	int b=30;
	int c=a+b;
	
	
	return c;
}