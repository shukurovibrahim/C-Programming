#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdrawMoney(float balance);

int main() {

    int choice = 0;
    float balance = 0.0f;

    printf("*** WELCOME TO THE BANK ***");

    do {
        printf("\n\nSelect an option:\n");
        printf("\n1. Check balance.\n");
        printf("2. Deposit money.\n");
        printf("3. Withdraw money.\n");
        printf("4. Exit.\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdrawMoney(balance);
                break;
            case 4:
                printf("Thank you for using the bank!");
                break;
            default:
                printf("\nInvalid choice!\n");
                printf("Please select 1-4:\n");
                break;
        }

    }while(choice != 4);

    return 0;
}

void checkBalance(float balance) {
    printf("\nYour current balance is: $%.2f", balance);
}

float deposit() {

    float amount = 0.0f;

    printf("\nEnter the amount to deposit: $");
    scanf("%f", &amount);

    if(amount < 0) {
        printf("Invalid amount");
        return 0.0f;
    }
    else {
        printf("Successfully deposited $%.2f", amount);
        return amount;
    }

    return 0.0f;
}

float withdrawMoney(float balance) {

    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");
    scanf("%f", &amount);

    if(amount < 0) {
        printf("Invalid amount");
        return 0.0f;
    }
    else if (amount > balance) {
        printf("Insufficient funds!\n");
        printf("You balance is %.2f\n", balance);
        return 0.0f;
    }
    else {
        printf("Successfully withdrew $%.2f", amount);
        return amount;
    }

    return 0.0f;
}