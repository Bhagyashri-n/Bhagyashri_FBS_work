#include<stdio.h>
int main(){
	int no=5;
	
	for(int i=no;i>=1;i--){
		for(int k=1;k<=no-i;k++ ){
			printf(" ");
		}
		
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}