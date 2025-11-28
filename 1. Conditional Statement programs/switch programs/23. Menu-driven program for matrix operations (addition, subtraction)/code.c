#include <stdio.h>

int main() {
    int choice, rows, cols, i, j;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    do {
        printf("\n**Menu**\n");
        printf("1. Addition of matrices\n");
        printf("2. Subtraction of matrices\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Result of matrix addition:\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        result[i][j] = matrix1[i][j] + matrix2[i][j];
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Result of matrix subtraction:\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        result[i][j] = matrix1[i][j] - matrix2[i][j];
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}