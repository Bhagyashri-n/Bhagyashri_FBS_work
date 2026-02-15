#include<stdio.h>
int main(){
int num=123,rem,sum=0,temp=num;

for(;num>0;){
	
	rem=num%10;
	sum=sum+(rem*rem*rem);
	num=num/10;
		
   }
   if(sum==temp){
   	printf("Number is Armstrong");
   }else{
   	printf("Number is not Armstrong");
   }
   return 0;
}