#include <stdio.h>

int main() {
    int num;

    // Ask user to enter a number
    printf("Enter your number: ");
    scanf("%d",&num);

    //Checks even or odd
    if(num % 2 == 0){
        printf("%d is an even number.\n", num);
    }
     else {
        printf("%d is an odd number.\n", num);
    }
    return 0;
}