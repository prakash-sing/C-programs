#include <stdio.h>

int main() {
    int choice, a, b;

    while (1) {
        printf("\n=== Calculator Menu ===\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);

        switch (choice) {
            case 1:
                printf("Result: %d\n", a + b);
                break;
            case 2:
                printf("Result: %d\n", a - b);
                break;
            case 3:
                printf("Result: %d\n", a * b);
                break;
            case 4:
                if (b == 0)
                    printf("Error: Division by zero!\n");
                else
                    printf("Result: %d\n", a / b);
                break;
            case 5:
                if (b == 0)
                    printf("Error: Modulus by zero!\n");
                else
                    printf("Result: %d\n", a % b);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
