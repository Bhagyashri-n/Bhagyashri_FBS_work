#include<stdio.h>
void main()
{
	int arr[5]={20,78,55,32,4},i,sum=0;
	
	for(i=0;i<5;i++){
		sum=sum+arr[i];
	}
	printf("sum of element = %d",sum);
}