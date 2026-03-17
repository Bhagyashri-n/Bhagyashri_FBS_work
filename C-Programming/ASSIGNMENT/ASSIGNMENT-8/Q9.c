#include<stdio.h>
void main()
{
	int arr[6]={12,45,89,5,7,45},i;
	
	for(i=0;i<6/2;i++){
		
		int temp=arr[i];
		arr[i]=arr[6-1-i];
		arr[6-1-i]=temp;
	}
	for(i=0;i<6;i++)
	{
		printf(" %d",arr[i]);
	}
}