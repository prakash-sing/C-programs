#include <stdio.h>

int main() {
    int choice, n;

    while (1) {
        printf0("\n\tThis is a program for pattern printing\t\n");
        printf("1. Square Pattern\n");
        printf("2. Triangle Pattern\n");
        printf("3. Pyramid Pattern\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting program...\n");
            break;
        }

        printf("Enter the size (number of rows): ");
        scanf("%d", &n);

        switch (choice) {
            case 1:
                // Square Pattern
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }
                break;

            case 2:
                // Right Triangle Pattern
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= i; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }
                break;

            case 3:
                // Pyramid Pattern
                for (int i = 1; i <= n; i++) {
                    for (int s = 1; s <= n - i; s++) {
                        printf(" ");
                    }
                    for (int j = 1; j <= (2*i - 1); j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
