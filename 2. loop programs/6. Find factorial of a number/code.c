#include <stdio.h>

int main()
{
    int num, i=1, fact=1;
    
    printf("Enter a number: \n");
    scanf("%d", &num);

    while(i <= num)
    {
        fact = fact * i ;
        i++ ;
    }
    printf("Factorial value of %d = %d\n",num, fact );
    return 0 ;
}