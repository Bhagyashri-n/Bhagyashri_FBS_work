#include<stdio.h>

int main()
{
    int n,i,flag=0;
    int *p;

    printf("Enter number: ");
    scanf("%d",&n);

    p=&n;

    for(i=2;i<*p;i++)
    {
        if(*p % i == 0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}