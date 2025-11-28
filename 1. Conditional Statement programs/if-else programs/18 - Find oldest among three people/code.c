#include <stdio.h>

int main(){
   
    int a, b, c;
  
    printf("Enter age of three people one by one: ");
    scanf("%d %d %D", &a, &b, &c);
   
    if(a >= b && a >= c){
        
        printf("First one is oldest and age is %d.\n", a);
    } else if(b >= c){
        
        printf("Second one is oldest and age is %d.\n", b);
    } else {
       
        printf("Third one is oldest and age is %d.\n", c);
    } 
    return 0;
}