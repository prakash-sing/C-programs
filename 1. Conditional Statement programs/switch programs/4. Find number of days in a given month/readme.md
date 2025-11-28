# Program to find number of days in a given month(1-12)

## Author
Prakash Singh

## Description
Simple C-program to find number of days in a user input month.
Steps to Implement:
- Input the month number from the user (1 for January, 2 for February, etc.).
- Use a switch statement to match the month number.
- Group cases for months with the same number of days.
- Handle February separately as it can have 28 or 29 days.
- Add a default case to handle invalid inputs

## How it works
Grouping cases like case 1: case 3: ensures that any of these values will execute the same block until a break is encountered
February is handled separately since leap years affect its day count.
The default block ensures invalid inputs are caught and reported.