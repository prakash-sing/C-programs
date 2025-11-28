#include <stdio.h>

int main(){
    
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        printf("%c is an alphabet,\n", ch);
        
        if (ch == A)||(ch==E)||(ch==I)||(ch==O)||(ch==U)||(ch==a)||(ch==e)||(ch==i)||(ch==o)||(ch==u){
            printf("And it is a vovel.\n")
        }
        else{
            printf("And it is a consonant.\n")
        }
    } 
    else{
        prinf("%c is not an alphabet.\n", ch);
    }
    return 0;
}