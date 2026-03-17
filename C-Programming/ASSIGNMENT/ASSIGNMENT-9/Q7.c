#include<stdio.h>
void fact(int arr[]);
int main()
{
    int arr[1];

    printf("Enter number: ");
    scanf("%d",&arr[0]);

    fact(arr);
}
void fact(int arr[])
{
    int i,f=1;
    for(i=1;i<=arr[0];i++)
    {
        f=f*i;
    }
    printf("Factorial = %d",f);
}