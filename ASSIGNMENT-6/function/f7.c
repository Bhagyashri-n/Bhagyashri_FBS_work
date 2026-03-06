
#include<stdio.h>
void evenodd();
void main(){
	
	evenodd();

}void evenodd(){
	int num=12;
	
	if(num%2==0){
		printf("%d number is even number",num);
	}else{
		printf("%d number is odd number",num);
	}
}