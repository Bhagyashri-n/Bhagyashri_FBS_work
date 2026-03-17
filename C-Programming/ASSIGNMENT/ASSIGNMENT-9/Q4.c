#include<stdio.h>
void prime(int arr[]);
int main()
{
    int arr[1],i,count=0;

    printf("Enter number: ");
    scanf("%d",&arr[0]);

    prime(arr);
}
void prime(int arr[])
{
    int i,count=0;

    for(i=1;i<=arr[0];i++)
    {
        if(arr[0]%i==0)
        count++;
    }

    if(count==2)
    printf("Prime");
    else
    printf("Not Prime");
}