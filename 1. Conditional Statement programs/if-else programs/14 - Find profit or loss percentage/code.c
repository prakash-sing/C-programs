#include <stdio.h>
int main()
{
    int buy, sell ;
    float result;
    
    printf("Enter original value or purchasing price: ");
    scanf("%d", &buy);
    
    printf("Enter selling price: ");
    scanf("%d", &sell);

    if( buy < sell ){
        result = (sell-buy)*100/buy;
        printf("You got a profit of %.2f percentage.", result);
    }else if ( buy > sell ){
        result = (buy - sell)*100/buy;
        printf("You got a loss of %.2f percentage.", result);
    }else {
        printf("You are not in any profit or loss.");
    }
    return 0;
}