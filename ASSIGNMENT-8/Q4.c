#include<stdio.h>
void main(){
	int arr[5]={1,8,6,3,5},i;
	
	printf("even numbers are=");
	for(int i=0;i<5;i++)
	{
	if(arr[i]%2==0 ){
		printf(" %d",arr[i]);
	}
	}
	printf("\nodd numbers are=");
	for(int i=0;i<5;i++)
	{
	if(arr[i]%2!=0 ){
		printf(" %d",arr[i]);
	}
	}
    
}