#include <stdio.h>
int main() 
{
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);
    
    if(age > 18){
        printf("You are eligible to drive .\n");
    } else if (age > 14){
        printf("You can only ride or drive two-wheeler with a speed limit.");
    }
    else {
        printf("You are not eligible to drive.\n");
    }
    return 0;
}