#include<stdio.h>
int main(){
	int num=129;
	int original,reverse=0,rem;
	
	original=num;
	
	while(num>0){
		rem=num%10;
		reverse=reverse*10+rem;
		num=num/10;
	}
	if(original==reverse){
		printf("palindrom");
	}else{
		printf("not palindrome");
	}
	return 0;
	
}