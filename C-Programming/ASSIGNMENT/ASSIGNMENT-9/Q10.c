#include<stdio.h>
void sum(int arr[]);
int main()
{
    int arr[1];
    printf("Enter number: ");
    scanf("%d",&arr[0]);

    sum(arr);
}
void sum(int arr[])
{
    int first,last,num;
    num=arr[0];
    last=num%10;

    while(num>=10)
    {
        num=num/10;
    }
    first=num;
    printf("Sum = %d",first+last);
}