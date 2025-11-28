#include <stdio.h>

int main() {
    int choice;
    float side1, side2, side3;

    do {
        printf("\n*** Triangle Type Checker ***\n");
        printf("1. Check Triangle Type\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the three sides of the triangle: ");
                scanf("%f %f %f", &side1, &side2, &side3);

                if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
                    if (side1 == side2 && side2 == side3) {
                        printf("The triangle is Equilateral.\n");
                    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
                        printf("The triangle is Isosceles.\n");
                    } else {
                        printf("The triangle is Scalene.\n");
                    }
                } else {
                    printf("The given sides do not form a valid triangle.\n");
                }
                break;

            case 2:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 2);

    return 0;
}
