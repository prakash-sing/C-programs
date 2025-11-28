#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    switch (num % 2) {
        case 0:
            printf("%d is Even.\n", num);
            break;
        case 1:
            printf("%d is Odd.\n", num);
            break;
        default:
            printf("Unexpected error.\n");
    }

    return 0;
}
