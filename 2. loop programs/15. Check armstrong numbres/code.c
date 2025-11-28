#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a 3-digit integer: ");
    if (scanf("%d", &num) != 1) { 
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num < 100 || num > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 0;
    }

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder; 
        num /= 10;
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
