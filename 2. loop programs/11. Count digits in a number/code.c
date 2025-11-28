#include <stdio.h>

int main() {
    int num, digitCount = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        digitCount = 1;
    } else {
        for (; num != 0; num /= 10) {
            digitCount++;
        }
    }

    printf("Number of digits: %d\n", digitCount);

    return 0;
}