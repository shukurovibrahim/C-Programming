#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // ===== PART 1: GAME LOOP USING WHILE =====
    bool isRunning = true;  // Controls game loop
    char response = '\0';   // Stores user input (Y/N)

    // Game loop - runs until user chooses to stop
    while (isRunning) {
        printf("You are playing a game.\n");
        printf("Do you want to stop? Y(yes) or N(no):\n");
        scanf(" %c", &response);  // Space before %c skips whitespace

        // Check if user wants to quit (case-insensitive)
        if (response == 'Y' || response == 'y') {
            isRunning = false;  // Exit loop
        }
    }
    printf("You exited the game.\n");

    // ===== PART 2: NAME INPUT VALIDATION =====
    char name[50] = "";  // Buffer for name input

    // Clear input buffer after scanf (to avoid skipping fgets)
    while (getchar() != '\n');  // Discards leftover characters

    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);  // Safer than scanf for strings
    name[strcspn(name, "\n")] = '\0';  // Remove trailing newline

    // Force user to enter non-empty name
    while (strlen(name) == 0) {
        printf("You must enter your name:\n");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
    }
    printf("Your name is: %s\n", name);

    // ===== PART 3: DO-WHILE EXAMPLE (ADDED DEMO) =====
    int number;
    printf("\n=== DO-WHILE DEMO ===\n");

    // Runs at least once, repeats until valid input
    do {
        printf("Enter a positive number (1-100):\n");
        scanf("%d", &number);
        while (getchar() != '\n');  // Clear input buffer
    } while (number <= 0 || number > 100);  // Validate range

    printf("You entered: %d\n", number);

    return 0;
}