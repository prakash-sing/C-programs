#include <stdio.h>

int main(){
    
    float a, b;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
   
    if(a > b){
        printf("%.2f is large number.\n", a);
    }
     else if(b > a){
        printf("%.2f is large number.\n", b);
    }
     else {
        printf("Both numbers are equal.\n");
    }
    return 0;
}