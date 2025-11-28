# Checking whether a character is uppercase, lowercase, digit or special symbol

## Author
Prakash Singh

## Description
This C-program checks whether is the input character is uppercase, lowercase, digit or special symbol.
This program uses character comparisons with readable character constants, making it easy to understand without directly referring to ASCII values in the first part.
In second part this program is used by referring the ASCII value. 

## Features
- Prompts the user to enter a single character.
- Evaluates if the entered character is uppercase, lowercase, digit or special symbol.
- Prints a clear message indicating the classification.
- easily understandable and simply conditional program.

## how it works 
- The program takes a character as input via 'scanf'.
- Uses `if-else` statements to check the character(In the first part):
 - checks character between `A` and `Z` for uppercase letters.
 - checks character between `a` and `z` for lowercase letters.
 - checks character between `0` and `9` for digit.
 - otherwise it prints that character is special symbol. 
- Uses `if-else` statements by ASCII vaiues to check the character(In the second part). 
 - Each number has its own special values called ASCII values.
 - Appropriate answer will be printed accordingly entered character. 