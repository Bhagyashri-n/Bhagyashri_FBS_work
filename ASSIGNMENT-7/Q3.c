#include<stdio.h>
void palindrome(int*num);
void main()
{
	
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	
	palindrome(&num);
	
}
void palindrome(int*c) 
{   
    int num,rem,sum=0,original;
    num=*c;
    original=*c;
    
    while(num>0)
    
	{
	rem=num%10;
	sum=sum*10+rem;//20
	num=num/10;	
    }
    if(original==sum)
      printf("Palindrome");
    else
      printf("Not palindrome");
}