#include <stdio.h>

int main() {

    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // ===== 1. Multiple if statements (all checked) =====
    printf("\n1. Multiple if statements:\n");
    if (number > 0) {
        printf("-> %d is positive.\n", number);
    }
    if (number % 2 == 0) {
        printf("-> %d is even.\n", number);
    }
    if (number > 100) {
        printf("-> %d is large (over 100).\n", number);
    }

    // ===== 2. Nested if statements (if inside if) =====
    printf("\n2. Nested if statements:\n");
    if (number > 0) {
        printf("-> %d is positive.\n", number);
        if (number % 2 == 0) {
            printf("-> And it's even.\n");
        } else {
            printf("-> And it's odd.\n");
        }
    }

    // ===== 3. if-else if-else (mutually exclusive) =====
    printf("\n3. if-else if-else ladder:\n");
    if (number > 0) {
        printf("-> %d is positive.\n", number);
    }
    else if (number < 0) {
        printf("-> %d is negative.\n", number);
    }
    else {
        printf("-> You entered zero.\n");
    }

    return 0;
}