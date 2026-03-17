//palindrom number
#include<stdio.h>
void palindrome();
void main(){
	
	palindrome();

}void palindrome(){
	int num=121;
	int r1,r2,r3,a1,reverse;
	
	r1=num%10;//5
	a1=num/10;//20
	r2=a1%10;//2
	r3=a1/10;//0
	
	reverse=r1*100+r2*10+r3;
	
	if(num==reverse){
		printf("%d is palindrom",num);
	}else{
		printf("%d number is not palindrome",num);
	}
}