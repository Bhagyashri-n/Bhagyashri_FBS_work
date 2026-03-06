#include<stdio.h>
void evenodd(int*num);
void main()
{
	int num;
	printf("Enter the number-",num);
	scanf("%d",&num);
	
	evenodd(&num);
	
	
}void evenodd(int*a)
{
    
	if(*a%2==0){
		printf("%d is even number",*a);

	}else{
		printf("%d is odd number",*a);
	}
	
}