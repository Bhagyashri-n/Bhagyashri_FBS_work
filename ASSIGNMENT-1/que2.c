//palindrom number
#include<stdio.h>
void main(){
	int num=520;
	int r1,r2,r3,a1,reverse;
	
	r1=num/100;//5
	a1=num%100;//20
	r2=a1/10;//2
	r3=a1%10;//0
	
	reverse=r3*100+r2*10+r1;
	
	if(num==reverse){
		printf("%d is palindrom",num);
	}else{
		printf("%d number is not palindrome",num);
	}
}