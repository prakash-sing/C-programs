#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float principal, rate, time, simpleInterest, compoundInterest;

    do {
        // Display menu
        printf("\n*** Interest Calculation Menu ***\n");
        printf("1. Calculate Simple Interest\n");
        printf("2. Calculate Compound Interest\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Simple Interest Calculation
                printf("\nEnter Principal Amount: ");
                scanf("%f", &principal);
                printf("Enter Rate of Interest (in %%): ");
                scanf("%f", &rate);
                printf("Enter Time (in years): ");
                scanf("%f", &time);

                simpleInterest = (principal * rate * time) / 100;
                printf("Simple Interest = %.2f\n", simpleInterest);
                break;

            case 2:
                // Compound Interest Calculation
                printf("\nEnter Principal Amount: ");
                scanf("%f", &principal);
                printf("Enter Rate of Interest (in %%): ");
                scanf("%f", &rate);
                printf("Enter Time (in years): ");
                scanf("%f", &time);

                compoundInterest = principal * pow((1 + rate / 100), time) - principal;
                printf("Compound Interest = %.2f\n", compoundInterest);
                break;

            case 3:
                // Exit
                printf("Exiting the program. Thank you!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
