#include <stdio.h>

int main() {
    
    int num, absVal;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        absVal = -num;  // Multiply by -1 to get positive value
    }
     else {
        absVal = num;   // Number is already positive or zero

    printf("Absolute value: %d\n", absVal);
    }

    return 0;
}