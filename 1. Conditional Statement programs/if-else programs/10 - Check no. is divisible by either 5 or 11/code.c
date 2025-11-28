#include <stdio.h>

int main() {
   
    int num;

    // Ask user to enter a number
    printf("Enter your number to check whether the no. is divisible by 5 and 11: ");
    scanf("%d",&num);

    if(num % 5 == 0 || num % 11 == 0){
        printf("%d is divisible by 5 and 11.\n", num);
    }
     else {
        printf("%d is divisible by 5 and 11.\n", num);
    }
    return 0;
}