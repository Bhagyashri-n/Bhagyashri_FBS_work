#include<stdio.h>
void main()
{
	int arr[5]={23,78,98,21,69},i,num,found=0;
	
	printf("Enter thee number search=");
	scanf("%d",&num);
	
	for(i=0;i<5;i++)
	{
		if(arr[i]==num)
		{
			printf("Number found at position %d",i+1);
			found=1;
			break;
		}
	}
	if(found==0){
		printf("number not found");
	}
}