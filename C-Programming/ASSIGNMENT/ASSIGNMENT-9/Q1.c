#include<stdio.h>

void print(int arr[], int n);
int main()
{
    int arr[10], i;

    for(i=0;i<10;i++)
    {
        arr[i]=i+1;
    }

    print(arr,10);
}

void print(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}