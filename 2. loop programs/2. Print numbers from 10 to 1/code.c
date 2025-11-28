#include <stdio.h>

int main()
{
    int i = 10;
    while(i >= 1)
    {
        printf("%d\n", i );
        i = i - 1;
        // can write as :  i--  in the place of i = i - 1 .
    }
    return 0 ;
}