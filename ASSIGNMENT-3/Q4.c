#include<stdio.h>
int main(){
	int num=7,i=2,flag=1;
	
	if(num<=1){
		flag=0;
	}else{
		while(i<=num/2){
			if(num%i==0){
				flag=0;
				break;
				
			}
			i++;
							
		}
	}
	
	if(flag==1)
	  printf("prime");
    else
	  printf("not prime");
	  return 0;	  
}