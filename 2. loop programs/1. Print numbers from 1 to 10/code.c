#include <stdio.h>

int main()
{
    int i = 1;
    while(i <= 10)
    {
        printf("%d\n", i );
        i = i + 1;
        // can write as :  i++ (or i += 1)  in the place of i = i + 1 .
    }
    return 0 ;
}