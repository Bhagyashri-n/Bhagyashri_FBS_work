#include<stdio.h>

int main()
{
    int n, temp, rem, sum = 0;
    int *p;

    printf("Enter number: ");
    scanf("%d",&n);

    temp = n;
    p = &temp;

    while(*p != 0)
    {
        rem = (*p) % 10;
        sum = sum + rem*rem*rem;
        *p = (*p) / 10;
    }

    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}