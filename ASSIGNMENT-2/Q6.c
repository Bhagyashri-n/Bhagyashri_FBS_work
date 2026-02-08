#include<stdio.h>
int main(){
	int num;
	
	printf("enter the number=");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0){
		printf("DIVISIBLE BY BOTH 3 & 5");
	}else if(num%3==0 && num%5!=0){
		printf("DIVISIBLE BY  3 BUT NOT BY 5 ");
	}else if(num%3!=0 && num%5==0){
		printf("DIVISIBLE BY 5 BUT NOT BY 3");
	}else{
		printf("none");
	}
	return 0;
	
	

	
}