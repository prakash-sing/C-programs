#include <stdio.h>

int main() {
    int arr[100], n, choice, i, sum = 0, max, min;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Calculate Sum\n");
        printf("2. Find Maximum\n");
        printf("3. Find Minimum\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sum = 0; // Reset sum
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum of array elements: %d\n", sum);
                break;

            case 2:
                max = arr[0]; // Assume first element is max
                for (i = 1; i < n; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                printf("Maximum element: %d\n", max);
                break;

            case 3:
                min = arr[0]; // Assume first element is min
                for (i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                printf("Minimum element: %d\n", min);
                break;

            case 4:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
