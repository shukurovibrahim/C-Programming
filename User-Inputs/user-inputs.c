#include <stdio.h>   // For input/output functions (printf, scanf, fgets)
#include <string.h>  // For string handling (strlen)

int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    // Get user's age
    printf("How old are you? \n");
    scanf("%d", &age);    // %d reads an integer. & is address-of operator

    // Get user's GPA
    printf("What is your gpa? \n");
    scanf("%f", &gpa);    // %f reads a float

    // Get user's grade (note space before %c to skip whitespace)
    printf("What is your grade? \n");
    scanf(" %c", &grade); // Space before %c ignores leftover newlines

    // Clear input buffer before reading name
    getchar();            // Consumes the leftover newline from previous input

    // Get user's name (safer than scanf for strings)
    printf("What is your name? \n");
    fgets(name, sizeof(name), stdin); // Reads up to 29 chars + null terminator

    // Remove trailing newline from fgets input
    name[strlen(name) - 1] = '\0';    // Replaces '\n' with '\0'

    // Print all collected data
    printf("\n=== Your Information ===\n");
    printf("Name: %s \n", name);
    printf("Age: %d \n", age);
    printf("GPA: %.1f \n", gpa);
    printf("Grade: %c \n", grade);

    return 0;
}