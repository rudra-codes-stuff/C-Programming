#include <stdio.h>

int main()
{
    int choice;
    int number;
    int n;
    int factorial;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Multiplication Table\n");
        printf("2. Factorial\n");
        printf("3. Star Pattern\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);

                printf("\nMultiplication Table of %d:\n", number);

                for (int i = 1; i <= 10; i++)
                {
                    printf("%d x %d = %d\n",
                           number, i, number * i);
                }

                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);

                if (n < 0)
                {
                    printf("Factorial is not defined for negative numbers.\n");
                }
                else
                {
                    factorial = 1;

                    for (int i = 1; i <= n; i++)
                    {
                        factorial = factorial * i;
                    }

                    printf("%d! = %d\n", n, factorial);
                }

                break;

            case 3:
                printf("Enter number of rows: ");
                scanf("%d", &n);

                if (n <= 0)
                {
                    printf("Number of rows must be positive.\n");
                }
                else
                {
                    for (int i = 1; i <= n; i++)
                    {
                        for (int j = 1; j <= i; j++)
                        {
                            printf("* ");
                        }

                        printf("\n");
                    }
                }

                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
