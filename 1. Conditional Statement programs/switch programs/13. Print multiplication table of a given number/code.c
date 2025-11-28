#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, num, i;

    printf("=== Multiplication Table Program ===\n");
    printf("1. Print multiplication table of a number\n");
    printf("2. Exit\n");
    printf("Enter your choice (1-2): ");

    // Validate menu choice input
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("Enter an integer for the multiplication table: ");
            if (scanf("%d", &num) != 1) {
                printf("Invalid input. Please enter a valid integer.\n");
                return 1;
            }

            // Handle zero separately
            if (num == 0) {
                printf("Multiplication table of 0 is always 0.\n");
            } else {
                printf("\nMultiplication Table of %d:\n", num);
                for (i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", num, i, num * i);
                }
            }
            break;

        case 2:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0;
}
