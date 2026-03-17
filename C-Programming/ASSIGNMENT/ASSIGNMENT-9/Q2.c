#include<stdio.h>

void table(int arr[], int n);

int main()
{
    int arr[1];

    printf("Enter number: ");
    scanf("%d",&arr[0]);

    table(arr,10);
}

void table(int arr[], int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[0]*i);
    }
}