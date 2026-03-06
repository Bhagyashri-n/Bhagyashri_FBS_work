#include<stdio.h>

int main()
{
    int n,i;
    int *p;

    printf("Enter number: ");
    scanf("%d",&n);

    p=&n;

    for(i=1;i<=10;i++)
    {
        printf("%d ",(*p)*i);
    }

    return 0;
}