#include <stdio.h>

int main() {

    float price = 10.00;
    bool isStudent = false;
    bool isSenior = false;

    if (isStudent) {
        if (isSenior) {
            printf("You get student discount of 10%. \n");
            printf("You get senior discount of 20%. \n");

            price *= 0.7;
        }
        else {
            printf("You get student discount of 10%. \n");

            price *= 0.9;
        }
    }
    else {
        if (isSenior) {
            printf("You get senior discount of 20%. \n");

            price *= 0.8;
        }
    }

    printf("Your price of a ticket is $%.2f. \n", price);

    return 0;
}