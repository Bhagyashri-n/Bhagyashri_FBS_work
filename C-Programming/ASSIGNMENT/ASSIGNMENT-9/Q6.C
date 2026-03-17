#include<stdio.h>
void perfect(int arr[]);
int main()
{
    int arr[1];

    printf("Enter number: ");
    scanf("%d",&arr[0]);

    perfect(arr);
}
void perfect(int arr[])
{
    int i,sum=0;

    for(i=1;i<arr[0];i++)
    {
        if(arr[0]%i==0)
        sum=sum+i;
    }

    if(sum==arr[0])
    printf("Perfect Number");
    else
    printf("Not Perfect");
}