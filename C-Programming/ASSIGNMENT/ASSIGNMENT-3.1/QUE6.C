#include<stdio.h>
int main(){
	
	int num=28,sum=0;

    for(int i=1;i<=num/2;i++){
    	if(num%i==0){
    		sum=sum+i;
		}
	}
	if(sum==num){
		printf("Number is perfect");
	}else{
		printf("Number is not perfect");
	}
	return 0;
	

	
   
}