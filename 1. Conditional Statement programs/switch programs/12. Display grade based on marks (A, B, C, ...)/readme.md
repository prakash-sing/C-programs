# Display grade based on marks (A, B, C, ...) using switch

## Author
Prakash Singh

## Description
Here’s a complete, runnable, and robust C program to display a student’s grade (A, B, C, etc.) based on marks using a switch-case statement.
It includes input validation and handles edge cases.

## How it works
Input Validation: Ensures the user enters an integer between 0 and 100.
Switch Logic: Uses marks / 10 to group marks into ranges:
- 90–100 → A
- 80–89 → B
- 70–79 → C
- 60–69 → D
- 50–59 → E
- <50 → F
Edge Cases Handles marks = 100 correctly.
Rejects negative or >100 marks.