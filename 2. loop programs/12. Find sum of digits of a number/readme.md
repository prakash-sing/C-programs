# Calculate the sum of digits of a number

## Author
Prakash Singh

## Discription
This is a program to calculate sum of digits in a number.
For example, if the input is 1234, the output will be 10 (since 1 + 2 + 3 + 4 = 10).

## How It Works

Input: The program prompts the user to enter a positive integer.
Logic: Extract the last digit using num % 10. Add it to sum. Remove the last digit using integer division (num /= 10). Repeat until num becomes 0.
Output: The final value of sum is printed.