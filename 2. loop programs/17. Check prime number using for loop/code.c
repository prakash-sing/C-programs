#include <stdio.h>

int main() {
   
    int num, i, prime;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("%d is not a prime number.\n", num);
    }
    else {
        prime = 1; 

        for (i = 2; i < num ; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime) {
            printf("%d is a prime number.\n", num);
        }
        else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}