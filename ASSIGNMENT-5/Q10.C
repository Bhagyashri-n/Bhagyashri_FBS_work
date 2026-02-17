#include<stdio.h>
int main(){
	int no=5;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=no;j++)
			if(i==1||i==no||j==1||j==no||i==j)
			printf("* ");
		else{
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}