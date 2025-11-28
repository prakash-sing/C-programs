#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (num1 > num2) {
        case 1:
            max = num1;
            break;
        case 0:
            max = num2;
            break;
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
