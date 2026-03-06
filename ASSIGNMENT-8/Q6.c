#include<stdio.h>
void main()
{
	int arr[10],i,j,count;
	
	printf("enter the 6 numbers-");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("prime numbers in arrays are=");
	for(i=0;i<6;i++)
	{
		if(arr[i]<=1)
			continue;
			
		count=0;
		
		for(j=1;j<=arr[i];j++)
		{
			if(arr[i]%j==0)
			count++;
			
		}
		
		if(count==2)
		printf(" %d",arr[i]);
	}

}