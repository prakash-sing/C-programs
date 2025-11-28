#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0; // Initial balance
    float amount;

    do {
        // Display the menu
        printf("\n*** ATM Menu ***\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Deposit
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Amount deposited successfully! New balance: %.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;

            case 2: // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Amount withdrawn successfully! Remaining balance: %.2f\n", balance);
                } else if (amount > balance) {
                    printf("Insufficient balance! Your current balance is: %.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;

            case 3: // Check Balance
                printf("Your current balance is: %.2f\n", balance);
                break;

            case 4: // Exit
                printf("Thank you for using the ATM. Goodbye!\n");
                break;

            default: // Invalid choice
                printf("Invalid choice! Please select a valid option.\n");
        }
    } while (choice != 4); // Exit when user selects option 4

    return 0;
}
