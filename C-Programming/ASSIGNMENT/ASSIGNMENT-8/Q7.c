#include<stdio.h>
void main()
{
	int arr[5]={2,5,7,9,3};
	int brr[5]={12,15,17,19,13};
	int crr[5];
	
	for(int i=0;i<5;i++)
	{
	crr[i]=arr[i]+brr[i];
    }
	printf("sum array is:");
	for(int i=0;i<5;i++)
	{
		printf(" |%d",crr[i]);
	}
}