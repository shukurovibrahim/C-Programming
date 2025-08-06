#include <stdio.h>

int main() {

    char choice = '\0';
    float celcius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature Conversion Program. \n");
    printf("C. Celsius to Fahrenheit. \n");
    printf("F. Fahrenheit to Celsius. \n");

    printf("Is the temperatute in Celsius (C) or Fahrenheit (F)?: \n");
    scanf("%c", &choice);

    if (choice == 'C') {
        printf("Enter temperature in Celsius: \n");
        scanf("%f", &celcius);

        fahrenheit = (celcius * 9/5) + 32;

        printf("\n%.2f Celsius is equal to %.2f Fahrenheit. \n", celcius, fahrenheit);
    }

    else if (choice == 'F') {
        printf("Enter temperature in Fahrenheit: \n");
        scanf("%f", &fahrenheit);

        celcius = (fahrenheit - 32) * 5/9;

        printf("\n%.2f Fahrenheit is equal to %.2f Celsius. \n", fahrenheit, celcius);
    }

    else {
        printf("You have enter wrong.");
    }

    return 0;
}