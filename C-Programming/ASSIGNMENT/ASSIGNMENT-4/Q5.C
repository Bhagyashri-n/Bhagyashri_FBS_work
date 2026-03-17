#include<stdio.h>
int main()
{
    int num,choice,i,j,flag;
    int rem,reverse,sum,temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n--- MENU ---\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Find Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        // 1. Even or Odd
        case 1:
            if(num % 2 == 0)
                printf("Number is Even");
            else
                printf("Number is Odd");
            break;

        // 2. Prime check (Nested loop)
        case 2:
            if(num <= 1)
                printf("Not Prime");
            else
            {
                flag = 0;

                for(i = 1; i <= num; i++)   // outer loop
                {
                    int count = 0;

                    for(j = 1; j <= i; j++) // inner loop (nested)
                    {
                        if(i == num && num % j == 0)
                            count++;
                    }

                    if(i == num && count == 2)
                        printf("Prime Number");
                    else if(i == num && count != 2)
                        printf("Not Prime");
                }
            }
            break;

        // 3. Palindrome check
        case 3:
            temp = num;
            reverse = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                reverse = reverse * 10 + rem;
                temp = temp / 10;
            }

            if(reverse == num)
                printf("Palindrome Number");
            else
                printf("Not Palindrome");
            break;

        // 4. Positive, Negative or Zero
        case 4:
            if(num > 0)
                printf("Positive Number");
            else if(num < 0)
                printf("Negative Number");
            else
                printf("Zero");
            break;

        // 5. Reverse number
        case 5:
            temp = num;
            reverse = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                reverse = reverse * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse = %d", reverse);
            break;

        // 6. Sum of digits
        case 6:
            temp = num;
            sum = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}