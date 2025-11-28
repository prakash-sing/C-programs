#include <stdio.h>
int main() {
    int m1, m2, m3, m4, m5, percent;

    printf("Enter your percent in five subjects: ");
    scanf("%d %d %d %d %d",&m1, &m2, &m3, &m4, &m5);

    percent = ( m1 + m2 + m3 + m4 + m5) / 500 * 100 ;

    if(percent <=100 && percent > 90 ){
        printf("Your grade is 'A'.\n");
    }
     else if (percent > 80){
        printf("Your grade is 'B'.\n");
    }
     else if (percent > 70){
        printf("Your grade is 'C'.\n");
    }
     else if (percent > 60){
        printf("Your grade is 'D'.\n");
    }
     else if (percent > 33){
        printf("You are passed but you need to study more.\n");
    }
     else{
        printf("You are failed.\n");
       }
    return 0;
}