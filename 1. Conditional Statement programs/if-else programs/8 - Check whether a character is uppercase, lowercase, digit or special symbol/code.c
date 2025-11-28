#include <stdio.h>

int main()
{
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    
    if(ch >= 'A' && ch <= 'Z') {
        printf("The character %c is an uppercase letter.\n", ch);
    }
     else if(ch >= 'a' && ch <= 'z'){
        prinf("The character %c is a lowercase letter.\n", ch);
    }
     else if(ch >= '0' && ch <= '9'){
        printf("The character %c is a digit.\n", ch);
    }
     else{
        printf("The character %c is a special symbol.\n", ch);
    }
    return 0;
}

/*
// By another type...    Using ASCII values of the numbers

int main()
{
    char ch;
    printf("Enter a character from the keyboard: ");
    scanf("%c", &ch);
    if(ch >= 65 && ch <= 90){
       printf("The character %c is an uppercase letter.\n", ch);
    }else if(ch >= 97 && ch <= 122){
        prinf("The character %c is a lowercase letter.\n", ch);
    }
     else if(ch >= 48 && ch <= 57){
        printf("The character %c is a digit.\n", ch);
    }
     else((ch >= 0 && ch 48 ) || (ch > 57 && ch<65) || (ch > 90 && ch < 97) || ch > 122){
        printf("The character %c is a special symbol.\n", ch);
    }
    return 0;
}

*/