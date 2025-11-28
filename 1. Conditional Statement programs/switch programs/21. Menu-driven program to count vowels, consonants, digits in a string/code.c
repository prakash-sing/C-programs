#include <stdio.h>
#include<string.h>
int main() {
    char str[200];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // read string including spaces

    while (1) {
        int vowels = 0, consonants = 0, digits = 0;  // reset counters each cycle

        // Count characters each time
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];

            // Check for digits
            if (ch >= '0' && ch <= '9') {
                digits++;
            }
            // Check for alphabet
            else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                // Vowel check
                if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                    ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        printf("\n=== MENU ===\n");
        printf("1. Count Vowels\n");
        printf("2. Count Consonants\n");
        printf("3. Count Digits\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Number of vowels: %d\n", vowels);
                break;

            case 2:
                printf("Number of consonants: %d\n", consonants);
                break;

            case 3:
                printf("Number of digits: %d\n", digits);
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
