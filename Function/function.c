#include <stdio.h>
#include <string.h>

// Function Declaration: Clear purpose with parameters documented
/**
 * Sings "Happy Birthday" and prints personalized details.
 * @param name - The celebrant's name (string)
 * @param age  - The celebrant's age (integer)
 */
void happyBirthday(char name[], int age) {
    printf("\nHappy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday dear %s!\n", name);  // Personalized line
    printf("Happy birthday to you!\n");
    printf("You are now %d years old!\n", age); // Age emphasized with "now"
}

int main() {
    // Initialize variables with descriptive names
    char celebrantName[50] = "";  // More semantic than just 'name'
    int celebrantAge = 0;

    printf("Enter your name: \n");
    fgets(celebrantName, sizeof(celebrantName), stdin);
    celebrantName[strlen(celebrantName) - 1] = '\0';

    printf("Enter your age: \n");
    scanf("%d", &celebrantAge);

    // Call the function multiple times to show reusability
    happyBirthday(celebrantName, celebrantAge);  // Call 1
    happyBirthday(celebrantName, celebrantAge);  // Call 2
    happyBirthday(celebrantName, celebrantAge);  // Call 3

    return 0;  // Indicates successful execution
}