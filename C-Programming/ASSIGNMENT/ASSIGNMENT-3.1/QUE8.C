#include<stdio.h>
int main(){
	int num=145,rem,sum=0,i,fact,temp;
	temp=num;
	for(;num>0;num=num/10){
	
	rem=num%10;
	fact=1;

	for(int i=1;i<=rem;i++){
		fact=fact*i;
	}
	 sum=sum+fact;
    }
    if(sum==temp){
    	printf("strong number");
	}else{
		printf("not strong number");
	}
	return 0;

}