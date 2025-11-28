#include <stdio.h>

int main()
{
    float num;
    
    //User enter number 
    printf("Enter your number: ");
    scanf("%f",&num);

    //checking the number is positive, negative or zero
    if (num > 0) {
        printf("The number is positive.\n");
    }
    else if (num = 0) {
        printf("The number is zero.\n");
    }
    else {
        printf("The number is negative.\n");
    }

    return 0;
}