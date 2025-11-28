#include <stdio.h>

int main() {
    int n;
    long long first = 0, second = 1, next, sum = 0;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            next = first;
        } else if (i == 2) {
            next = second;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld ", next);
        sum += next;
    }

    printf("\nSum of Fibonacci series up to %d terms: %lld\n", n, sum);

    return 0;
}
