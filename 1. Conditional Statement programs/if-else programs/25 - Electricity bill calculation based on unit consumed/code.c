#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter electricity units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a non-negative number.\n");
        return 1;
    }

    if (units <= 50) {
        bill = units * 0.50;
    }
    else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}
