#include <stdio.h>

int main()
{
    int n, original, digit;
    int reverse = 0, sum = 0;
    int i, prime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    // Reverse and sum of digits
    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Reverse = %d\n", reverse);
    printf("Sum of digits = %d\n", sum);

    // Palindrome check
    if (original == reverse)
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");

    // Prime check
    prime = 1;

    if (original <= 1)
        prime = 0;
    else
    {
        for (i = 2; i < original; i++)
        {
            if (original % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1)
        printf("Prime: Yes\n");
    else
        printf("Prime: No\n");

    return 0;
}