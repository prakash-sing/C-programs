# include <stdio.h>

int main()
{
    
    int a, b,c;
    
    printf("Enter three sides of a triangle :");
    scanf("%d %d %d", a, b, c );
    
    if (a==b && b==c){
    
        printf("\nIt is an equilateral triangle.");
    } else if ( a==b || a==c || b==c){
        
        printf("\nIt is an isoscale triangle.");
    } else {
    
        printf("\nIt is a scalene triangle.");
    }
    return 0;
}