#include<stdio.h>
int main()
{
	int num=28;
	int i=1;
	int sum=0;
	
	while(i<=num/2){
		if(num%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==num){
		printf("perfect number");
	}else{
		printf("not perfect numebr");
	} 
	return 0;
}