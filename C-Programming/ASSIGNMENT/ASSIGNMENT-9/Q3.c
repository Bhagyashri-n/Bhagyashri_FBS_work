#include<stdio.h>

void sum(int arr[], int n);
int main()
{
    int arr[5]={1,2,3,4,5};
    sum(arr,5);
}

void sum(int arr[], int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    printf("Sum = %d",s);
}