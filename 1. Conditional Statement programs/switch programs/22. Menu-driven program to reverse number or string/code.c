#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    printf("Menu:\n");
    printf("1. Reverse a Number\n");
    printf("2. Reverse a String\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int num, reversed = 0, remainder;
            printf("Enter a number: ");
            scanf("%d", &num);

            while (num != 0) {
                remainder = num % 10;
                reversed = reversed * 10 + remainder;
                num /= 10;
            }

            printf("Reversed Number: %d\n", reversed);
            break;
        }
        case 2: {
            char str[100], reversed[100];
            int len, i, j = 0;

            printf("Enter a string: ");
            scanf(" %[^\n]s", str);  // To read a string with spaces
            len = strlen(str);

            for (i = len - 1; i >= 0; i--) {
                reversed[j++] = str[i];
            }
            reversed[j] = '\0';  // Null-terminate the reversed string

            printf("Reversed String: %s\n", reversed);
            break;
        }
        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
