#include<stdio.h>
int main(){
	int num=145,temp,rem,sum=0;
	int fact,i;
	temp=num;
	
	while(temp>0)
	{
		rem=temp%10;
		
		fact=1;
		i=1;
		while(i<=rem){
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==num){
		printf("Strong number");
	}else{
		printf("Not strong number");
	}
	
	
}