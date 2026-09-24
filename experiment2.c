#include <stdio.h>

int main()
{
    int choice;
    int number;
    int a, b, c;
    float num1, num2, result;
    char operator;
    int valid;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Positive / Negative / Zero\n");
        printf("2. Even / Odd\n");
        printf("3. Largest Among Three Numbers\n");
        printf("4. Simple Calculator\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);

                if (number > 0)
                    printf("Result: Positive\n");
                else if (number < 0)
                    printf("Result: Negative\n");
                else
                    printf("Result: Zero\n");

                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &number);

                if (number % 2 == 0)
                    printf("Result: Even\n");
                else
                    printf("Result: Odd\n");

                break;

            case 3:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);

                if (a >= b && a >= c)
                    printf("Largest: %d\n", a);
                else if (b >= a && b >= c)
                    printf("Largest: %d\n", b);
                else
                    printf("Largest: %d\n", c);

                break;

            case 4:
                printf("Enter first number: ");
                scanf("%f", &num1);

                printf("Enter operator (+, -, *, /): ");
                scanf(" %c", &operator);

                printf("Enter second number: ");
                scanf("%f", &num2);

                valid = 1;

                switch (operator)
                {
                    case '+':
                        result = num1 + num2;
                        break;

                    case '-':
                        result = num1 - num2;
                        break;

                    case '*':
                        result = num1 * num2;
                        break;

                    case '/':
                        if (num2 != 0)
                        {
                            result = num1 / num2;
                        }
                        else
                        {
                            printf("Error: Division by zero!\n");
                            valid = 0;
                        }
                        break;

                    default:
                        printf("Invalid operator!\n");
                        valid = 0;
                }

                if (valid)
                    printf("Result: %.2f\n", result);

                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
