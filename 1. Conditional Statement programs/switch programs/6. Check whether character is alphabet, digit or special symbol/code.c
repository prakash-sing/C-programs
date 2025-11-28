#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (1) {
        case 1:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                printf("'%c' is an alphabet.\n", ch);
                break;
            }
        case 2:
            if (ch >= '0' && ch <= '9') {
                printf("'%c' is a digit.\n", ch);
                break;
            }
        default:
            printf("'%c' is a special symbol.\n", ch);
    }

    return 0;
}