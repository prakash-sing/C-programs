#include <stdio.h>
int square(int num) {
    return (num * num);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The square of %d is: %d", num, square(num));
    return 0;
}