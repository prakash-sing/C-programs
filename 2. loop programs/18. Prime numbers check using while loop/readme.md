# Prime check under while loop with break statement

## Author
Prakash Singh

## Description
This is a program to checking whether a number is prime or not using while loop.
In this program, the moment num%i turns out to be zero,(i.e., num is exactly divisible by i), the message "Not a prime number" is printed and the control breaks out of the while loop. 
Why does the program require the if statement after the while loop at all?
Well, there are two possibilities the control could have reached outside the while loop:
- It jumps out because num turned out to be not a prime.
- The loop came to an end because the value of i became equal to num.