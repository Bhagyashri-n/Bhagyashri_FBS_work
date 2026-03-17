#include<stdio.h>

void vote(int *age);
int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    vote(&age);   // address pass kiya
    
    return 0;
}

void vote(int *age)
{
    if(*age >= 18)
    {
        printf("Eligible for vote");
    }
    else
    {
        printf("Not Eligible for vote");
    }
    
}