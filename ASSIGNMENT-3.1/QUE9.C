#include<stdio.h>
int main(){
	int num=121;
	int original,reverse=0,rem;
	original=num;
	
	for(;num>0;num=num/10){
		rem=num%10;
		reverse=reverse*10+rem;
	}
	if(original==reverse){
		printf("palindrome");
	}else{
		printf("not palindrome");
	}

	return 0;
}