#include <stdio.h>

int main() {
    int a, r, n; // a = first term, r = common ratio, n = number of terms
    long long term; 

    printf("Enter first term (a): ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter common ratio (r): ");
    if (scanf("%d", &r) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of terms.\n");
        return 1;
    }

    printf("Geometric Progression Series:\n");
    term = a;
    for (int i = 1; i <= n; i++) {
        printf("%lld ", term);
        term *= r;
    }
    printf("\n");

    return 0;
}
