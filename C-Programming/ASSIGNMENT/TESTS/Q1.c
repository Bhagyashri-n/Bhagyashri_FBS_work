#include<stdio.h>
void main(){
	int start,end,i,isprime,sum=0,j;
	
	printf("enter start of range");
    scanf("%d",&start);
    
    printf("enter end of range");
    scanf("%d",&end);
    
    for(i=start;i<=end;i++){
    	if(i<2)
    		continue;
		isprime=1;
		
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime==1)
		 sum=sum+i;
	
    }
    printf("sum of prime number=%d",sum);
    
}
