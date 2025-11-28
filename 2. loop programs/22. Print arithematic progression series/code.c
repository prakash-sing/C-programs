#include <stdio.h>
#include <stdlib.h>

int main() {
    int firstTerm, commonDiff, numTerms;

    printf("Enter the first term (integer): ");
    if (scanf("%d", &firstTerm) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter the common difference (integer): ");
    if (scanf("%d", &commonDiff) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter the number of terms (positive integer): ");
    if (scanf("%d", &numTerms) != 1 || numTerms <= 0) {
        printf("Invalid input. Number of terms must be a positive integer.\n");
        return 1;
    }

    printf("\nArithmetic Progression Series:\n");
    for (int i = 0; i < numTerms; i++) {
        int term = firstTerm + i * commonDiff;
        printf("%d ", term);
    }
    printf("\n");

    return 0;
}
