#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("enter a=");
	scanf("%d",&a);
	
	printf("enter b=");
	scanf("%d",&b);
	
	printf("enter c=");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf(" a is greater than b & c");
	}else if(b>a && b>c){
		printf("b is greater than a & c");
	}else {
		printf("c is greater than a & b");
	}
	return 0;
		
}