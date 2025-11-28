# Program to check perfect number

## Author
Prakash Singh

## Discription
This is a  C program to check whether a number is a perfect number using a loop.
A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).
Example: 6 → divisors are 1, 2, 3 → sum = 6.

## How it works:
Input validation ensures only positive integers are processed.
The loop runs from 1 to num/2 because no divisor (except the number itself) can be greater than num/2.
If num % i == 0, i is a divisor and is added to sum.
If the sum of divisors equals the number, it’s a perfect number.