# Reverse a number

## Author
Prakash Singh

## Discription
This is a code to reverse a number.
The program extracts the last digit of the number using the modulo operator (%).
It appends this digit to the reversed number by multiplying the current reversed value by 10 and adding the extracted digit.
The original number is reduced by dividing it by 10 (num /= 10), effectively removing its last digit.
The process repeats until the original number becomes 0.