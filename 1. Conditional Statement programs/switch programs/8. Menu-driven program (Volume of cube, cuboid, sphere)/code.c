#include <stdio.h>
#include <math.h> // For M_PI (value of π)

int main() {
    int choice;
    float side, length, breadth, height, radius, volume;

    printf("Menu:\n");
    printf("1. Volume of Cube\n");
    printf("2. Volume of Cuboid\n");
    printf("3. Volume of Sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Volume of Cube
            printf("Enter the side length of the cube: ");
            scanf("%f", &side);
            volume = side * side * side;
            printf("Volume of the cube: %.2f\n", volume);
            break;

        case 2: // Volume of Cuboid
            printf("Enter the length, breadth, and height of the cuboid: ");
            scanf("%f %f %f", &length, &breadth, &height);
            volume = length * breadth * height;
            printf("Volume of the cuboid: %.2f\n", volume);
            break;

        case 3: // Volume of Sphere
            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius);
            volume = (4.0 / 3.0) * M_PI * radius * radius * radius;
            printf("Volume of the sphere: %.2f\n", volume);
            break;

        default: // Invalid choice
            printf("Invalid choice! Please select a valid option (1-3).\n");
    }

    return 0;
}
