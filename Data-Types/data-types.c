#include <stdio.h>      // Standard Input/Output library (for printf, etc.)
#include <stdbool.h>    // Boolean support (for 'bool' type)

int main() {
    // ===== VARIABLE DECLARATIONS & FORMAT SPECIFIERS =====
    // Each variable type has a corresponding format specifier for printf()

    // Integer (whole number)
    int age = 22;       // %d (or %i)

    // Floating-point (decimal number, single precision)
    float gpa = 3.9;    // %f (use %.2f for 2 decimal places)

    // Double (decimal number, higher precision than float)
    double pi = 3.1415926535;   // %lf (long float)

    // Character (single letter/symbol)
    char grade = 'A';   // %c

    // String (array of characters)
    char name[50] = "Ibrahim Shukurov"; // %s
    // Note: '50' is the maximum length (including null terminator '\0')

    // Boolean (true/false)
    bool isStudent = true; // %d (prints as 1 for true, 0 for false)


    // ===== PRINTING VARIABLES =====
    printf("I am %d years old. \n", age);  // %d for integers

    printf("My GPA is %.2f. \n", gpa);     // %.2f rounds to 2 decimal places

    printf("Pi (10 digits): %.10lf. \n", pi); // %.10lf prints 10 decimal places

    printf("My grade: %c. \n", grade);     // %c for single character

    printf("My name is %s. \n", name);     // %s for strings

    // Booleans in C are just integers (1=true, 0=false)
    printf("Am I a student? (1=Yes, 0=No): %d \n", isStudent);


    // ===== GOOD PRACTICES =====
    // 1. Always initialize variables.
    // 2. Use descriptive names (like 'isStudent' instead of 'flag').
    // 3. For floats/doubles, specify decimal precision (e.g., %.2f).
    // 4. End main() with 'return 0;' (indicates successful execution).

    return 0;  // Program executed successfully
}