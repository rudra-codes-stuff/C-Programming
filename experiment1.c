#include <stdio.h>

int main()
{
    int length, width;
    float area, perimeter;
    float celsius, fahrenheit;

    // Input for rectangle
    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Input for temperature
    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Display results
    printf("\n----- RESULTS -----\n");
    printf("Length      : %d\n", length);
    printf("Width       : %d\n", width);
    printf("Area        : %.2f\n", area);
    printf("Perimeter   : %.2f\n", perimeter);
    printf("Celsius     : %.2f C\n", celsius);
    printf("Fahrenheit  : %.2f F\n", fahrenheit);

    return 0;
}