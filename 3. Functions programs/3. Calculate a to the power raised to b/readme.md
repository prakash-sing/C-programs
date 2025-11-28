# Calculate a to the power raised to b

## Author
Prakash Singh

## Description
It is a self-contained C program to calculate ( a^b ) (a raised to the power b) using a user-defined function.
It handles positive, zero, and negative exponents without relying on the built-in pow() function.

## How it works
power() function : Loops to multiply the base for positive exponents.
For negative exponents, calculates the reciprocal.Handles the special case of 0 raised to a negative exponent (undefined).
Input validation : Ensures correct numeric input for both base and exponent.
Output formatting : Shows result with 6 decimal places for precision.