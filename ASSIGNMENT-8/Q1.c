#include<stdio.h>
void main()
{
	int arr[5]={23,78,98,21,69},i;
	
	int max=arr[0];
	int min=arr[0];
	for(i=0;i<5;i++){
		if(arr[i]>max)
		  max=arr[i];

		if(arr[i]<min)
		  min=arr[i];
    }
	printf("the maximum element in array is= %d\n",max);
	printf("the minimum element in array is= %d",min);
}