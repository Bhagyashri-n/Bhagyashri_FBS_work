#include<stdio.h>

int main()
{
    int i;
    int *p;

    for(i=1;i<=10;i++)
    {
        p=&i;
        printf("%d ",*p);
    }

    return 0;
}