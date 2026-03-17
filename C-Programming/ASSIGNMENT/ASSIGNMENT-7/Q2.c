#include<stdio.h>
void isUppercase(char *ch);
void main()
{
	char ch;
	printf("Enter char:");
	scanf("%c",&ch);
	
	isUpppercase(&ch);
	
}
void isUpppercase(char*a)
{
	if(*a>='A'&& *a<='Z')
	{
		printf("Uppercase");
		
	}else if(*a>='a'&& *a<='z')
	{
		printf("Lowercase");
	}
}