#include <stdio.h>
int main() {
    int num;

    // Ask user to enter a number
    printf("Enter your number to check whether the no. is divisible by 3 and 7: ");
    scanf("%d",&num);

    if(num % 3 == 0 && num % 7 == 0){
        printf("%d is divisible by 3 and 7.\n", num);
    } else {
        printf("%d is not divisible by 3 and 7.\n", num);
    }
    return 0;
}

// Either can be written as (num % 21 == 0)