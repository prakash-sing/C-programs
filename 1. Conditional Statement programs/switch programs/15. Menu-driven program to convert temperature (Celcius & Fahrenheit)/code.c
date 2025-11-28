#include <stdio.h>

int main() {
    int choice;
    double temp, converted;

    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            if (scanf("%lf", &temp) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            converted = (temp * 9.0 / 5.0) + 32.0;
            printf("Temperature in Fahrenheit: %.2lf°F\n", converted);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            if (scanf("%lf", &temp) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            converted = (temp - 32.0) * 5.0 / 9.0;
            printf("Temperature in Celsius: %.2lf°C\n", converted);
            break;

        default:
            printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0;
}