#include <stdio.h>

int main() {
    long long num;
    long long product = 1;

    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) num = -num;   // Make positive manually
    if (num == 0) {            // Special case
        printf("Product of digits: 0\n");
        return 0;
    }

    while (num > 0) {
        product *= num % 10;   // Multiply last digit
        num /= 10;             // Remove last digit
    }

    printf("Product of digits: %lld\n", product);
    return 0;
}
