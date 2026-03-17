#include<stdio.h>
int main(){
	int num=12345,r1,sum=0;
	int start=1;
	
	while(num>0){
		r1=num%10;
		sum=sum+r1;
		num=num/10;	
		
	}
	printf("sum of digits are=%d",sum);
	return 0;
}