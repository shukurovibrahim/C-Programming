#include <stdio.h>

int main() {

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator. \n");
    printf("1. Kilogram to Pounds. \n");
    printf("2. Pounds to Kilogram. \n");

    printf("Enter your choice (1 or 2): \n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the weight in kilograms: \n");
        scanf("%f", &kilograms);

        pounds = kilograms * 2.20462;

        printf("\n%.2f kilograms is equal to %.2f pounds.", kilograms, pounds);
    }

    else if (choice == 2) {
        printf("Enter the weight in pounds: \n");
        scanf("%f", &pounds);

        kilograms = pounds / 2.20462;

        printf("\n%.2f pounds is equal to %.2f kilograms.", pounds, kilograms);
    }

    else {
        printf("\nInvalid choice! Please enter 1 or 2.");
    }

    return 0;
}