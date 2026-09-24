#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int choice;
    int a, b, n;
    float x, y, result;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Prime Check\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                printf("Result = %d\n", add(a, b));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                printf("Result = %d\n", subtract(a, b));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                printf("Result = %d\n", multiply(a, b));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);

                if (y == 0)
                    printf("Error: Division by zero!\n");
                else
                    printf("Result = %.2f\n", divide(x, y));

                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &n);

                if (n < 0)
                    printf("Factorial is not defined for negative numbers.\n");
                else
                    printf("Factorial = %d\n", factorial(n));

                break;

            case 6:
                printf("Enter a number: ");
                scanf("%d", &n);

                if (isPrime(n))
                    printf("Prime: Yes\n");
                else
                    printf("Prime: No\n");

                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}