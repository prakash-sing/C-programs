#include <stdio.h>
int main(){
    int n;
    printf("Enter number to calculate sum of squares: ");
    scanf("%d",n);

    int sum=0;

    for(int i=1; i<=n;i++){
        sum = sum + (i*i);
    }

    printf("sum of squares of %d natural numbers is %d\n",n,sum);
    
    return 0;
}