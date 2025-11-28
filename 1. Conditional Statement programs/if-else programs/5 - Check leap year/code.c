#include <stdio.h>

int main() {
    
    int year;
   
    // Ask user to enter a year
    printf("Enter a year: ");
    scanf("%d",&year);

    //Checks this year is leap year or not
    if((year % 4 == 0 && year % 100 !=0)|| year % 400 == 0){
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}