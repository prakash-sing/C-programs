#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter marks (0-100): ");
    if (scanf("%d", &marks) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (marks < 0 || marks > 100) {
        printf("Marks must be between 0 and 100.\n");
        return 1;
    }

    switch (marks / 10) {
        case 10: // For marks = 100
        case 9:  // 90-99
            grade = 'A';
            break;
        case 8:  // 80-89
            grade = 'B';
            break;
        case 7:  // 70-79
            grade = 'C';
            break;
        case 6:  // 60-69
            grade = 'D';
            break;
        case 5:  // 50-59
            grade = 'E';
            break;
        default: // Below 50
            grade = 'F';
            break;
    }
    printf("Marks: %d → Grade: %c\n", marks, grade);

    return 0;
}
