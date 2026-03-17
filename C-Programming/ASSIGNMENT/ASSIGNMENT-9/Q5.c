#include<stdio.h>
void armstrong(int arr[]);
int main()
{
    int arr[1];
    printf("Enter number: ");
    scanf("%d",&arr[0]);

    armstrong(arr);
}
void armstrong(int arr[])
{
    int num,rem,sum=0;
    num=arr[0];
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(sum==arr[0])
    printf("Armstrong");
    else
    printf("Not Armstrong");
}