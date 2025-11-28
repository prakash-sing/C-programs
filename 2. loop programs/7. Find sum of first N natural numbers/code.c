#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer to calculate sum: ");
    scanf("%d",n);

    int sum=0;

    for(int i=1; i<=n;i++){
        sum = sum + i;
    }

    printf("sum is %d\n", sum);
    
    return 0;
}