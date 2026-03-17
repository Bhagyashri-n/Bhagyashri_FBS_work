#include<stdio.h>
int main(){
	int num=153,r1,temp=num,sum=0;
	
	
	while(num>0){
		r1=num%10;
		sum=sum+(r1*r1*r1);
		num=num/10;
		
	}
	
	if(sum==temp){
		printf("Armstrong");
	
	}else{
		printf("Not Armstrong");
		
	}
	return 0;
	
	
}