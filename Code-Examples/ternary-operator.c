#include <stdio.h>
#include <stdbool.h>

int main() {

    // Boolean
    bool isStudent = true;

    printf("%s", (isStudent) ? "Yes" : "No");

    // Odd or Even
    int number = 8;

    printf("%d is %s.", number, (number % 2 == 0) ? "Even" : "Odd");
    // Age check
    int age = 22;

    printf("%s", (age >= 18) ? "Adult" : "Child");

    // Time
    int hours = 19;
    int minutes = 27;

    printf("%02d:%02d %s", hours, minutes, (hours >= 12) ? "PM" : "AM");


    return 0;
}