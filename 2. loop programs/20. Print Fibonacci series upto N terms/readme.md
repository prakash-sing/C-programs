# Print fibonacci series upto N terms

## Author
Prakash Singh

## Discription
This is a code to print fibonacci series upto the term user input.
The Fibonacci series is a sequence where each term is the sum of the previous two terms, starting with 0 and 1. Using loops in C makes it efficient to generate the series up to a given number of terms.
Steps to Implement
- Input the number of terms Prompt the user to enter how many terms of the Fibonacci sequence they want to display.
- Initialize variables Set the first two terms (t1 = 0, t2 = 1) and calculate subsequent terms inside a loop.
- Use a loop to generate the series A for loop is commonly used to iterate from the third term up to n and print each term.
- Update values in each iteration After printing a term, update t1 and t2 so that they hold the last two terms for the next calculation.

## How It Works
The first two terms are printed directly.
The loop starts from term 3 and calculates each new term as nextTerm = t1 + t2.
Variables are updated so that t1 becomes the previous t2, and t2 becomes the new term.