#include <stdio.h>

int main() {
    int choice;
    float input, result;

    do {
        // Display the menu
        printf("\n*** Unit Conversion Menu ***\n");
        printf("1. Kilometers to Meters\n");
        printf("2. Meters to Centimeters\n");
        printf("3. Centimeters to Millimeters\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter distance in kilometers: ");
                scanf("%f", &input);
                result = input * 1000; // 1 km = 1000 m
                printf("%.2f kilometers = %.2f meters\n", input, result);
                break;

            case 2:
                printf("Enter distance in meters: ");
                scanf("%f", &input);
                result = input * 100; // 1 m = 100 cm
                printf("%.2f meters = %.2f centimeters\n", input, result);
                break;

            case 3:
                printf("Enter distance in centimeters: ");
                scanf("%f", &input);
                result = input * 10; // 1 cm = 10 mm
                printf("%.2f centimeters = %.2f millimeters\n", input, result);
                break;

            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
