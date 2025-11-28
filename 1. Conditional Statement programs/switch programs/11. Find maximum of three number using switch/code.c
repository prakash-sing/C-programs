#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    switch ((num1 >= num2) && (num1 >= num3)) {
        case 1:
            max = num1;
            break;
        default:
            switch ((num2 >= num1) && (num2 >= num3)) {
                case 1:
                    max = num2;
                    break;
                default:
                    max = num3;
            }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
