#include <stdio.h>
int main() {
   int num1, num2;
   char op;
   float result;
   
   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);
   printf("Enter an operator (+, -, *, /): ");
   scanf(" %c", &op); 
   
   switch (op) {
       case '+':
           result = num1 + num2;
           break;
       case '-':
           result = num1 - num2;
           break;
       case '*':
           result = num1 * num2;
           break;
       case '/':
           if (num2 == 0) {
               printf("Error! Division by zero is not allowed.\n");
               return 1; 
           }
           result = (float)num1 / num2; 
           break;
       default:
           printf("Invalid operator! Please use +, -, *, or /.\n");
           return 1; 
   }
   printf("%d %c %d = %.2f\n", num1, op, num2, result);
   return 0;
}