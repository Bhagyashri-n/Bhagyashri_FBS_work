#include<stdio.h>
void strong(int arr[]);
int main()
{
    int arr[1];
    printf("Enter number: ");
    scanf("%d",&arr[0]);
    strong(arr);
}
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
void strong(int arr[])
{
    int num,rem,sum=0;
    num=arr[0];
    
    while(num>0)
    {
        rem=num%10;
        sum=sum+factorial(rem);
        num=num/10;
    }
    if(sum==arr[0])
    printf("Strong Number");
    else
    printf("Not Strong");
}