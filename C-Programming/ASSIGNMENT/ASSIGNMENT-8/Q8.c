#include<stdio.h>
void main()
{
	int arr[6]={1,3,4,5,6,7};
	int brr[5]={15,14,13,12,11};
	int i;

	
	int s3=6+5;
	int crr[s3];
	
	for( i=0;i<6;i++)
	{
		crr[i]=arr[i];
	}
	for( i=0;i<5;i++){
		crr[6+i]=brr[i];
	}
	for( i=0;i<s3;i++)
	{
	printf(" |%d",crr[i]);
    }
}