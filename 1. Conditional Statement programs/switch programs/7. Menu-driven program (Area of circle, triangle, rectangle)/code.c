#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float radius, base, height, length, breadth, area;

    do {
        // Display menu
        printf("\n--- Area Calculator ---\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Triangle\n");
        printf("3. Area of Rectangle\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Circle
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = PI * radius * radius;
                printf("Area of Circle = %.2f\n", area);
                break;

            case 2: // Triangle
                printf("Enter the base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                area = 0.5 * base * height;
                printf("Area of Triangle = %.2f\n", area);
                break;

            case 3: // Rectangle
                printf("Enter the length and breadth of the rectangle: ");
                scanf("%f %f", &length, &breadth);
                area = length * breadth;
                printf("Area of Rectangle = %.2f\n", area);
                break;

            case 4: // Exit
                printf("Exiting the program. Goodbye!\n");
                break;

            default: // Invalid choice
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
