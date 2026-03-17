#include<stdio.h>
void palindrome(int arr[]);
int main()
{
    int arr[1];
    printf("Enter number: ");
    scanf("%d",&arr[0]);

    palindrome(arr);
}
void palindrome(int arr[])
{
    int num,rem,rev=0;
    num=arr[0];

    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==arr[0])
    printf("Palindrome");
    else
    printf("Not Palindrome");
}