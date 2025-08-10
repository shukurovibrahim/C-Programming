#include <stdio.h>
#include <stdbool.h>  // For bool type (C99+)
#include <string.h>   // Included for potential future use

/**
 * Checks if age meets minimum requirement (18+)
 * @param age - The age to check
 * @return true if age >= 18, false otherwise
 */
bool ageCheck(int age) {
    // Simplified return (no need for if-else)
    return age >= 18;  // Expression evaluates to true/false
}

/**
 * Calculates the square of a number
 * @param num - The number to square
 * @return num * num
 */
int square(int num) {
    return num * num;  // Returns the squared value
}

int main() {
    // --- Part 1: ageCheck() demo ---
    int age = 0;
    printf("Enter your age: \n");
    scanf("%d", &age);

    // ageCheck() returns a bool, used directly in if-condition
    if (ageCheck(age)) {
        printf("You may enter.\n");
    } else {
        printf("You must be 18+ to enter.\n");  // More precise message
    }

    // --- Part 2: square() demo ---
    // Shows how return values can be assigned or used directly
    int x = square(2);  // Captures return value (4)
    int y = square(3);  // Captures return value (9)
    int z = square(4);  // Captures return value (16)

    printf("\nSquares:\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;  // Indicates successful execution
}