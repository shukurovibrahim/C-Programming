#include <stdio.h>
#include <stdlib.h> // Include the standard library header
#include <time.h>   // Needed for srand()

int main() {
    printf("=== stdlib.h Function Examples ===\n\n");

    // 1. malloc() and free() - Memory Allocation
    printf("1. malloc() and free() - Dynamic Memory:\n");
    int *numbers = (int*)malloc(5 * sizeof(int)); // Allocate memory for 5 integers

    if (numbers == NULL) {
        printf("   Memory allocation failed!\n");
        return 1; // Exit if malloc fails
    }

    printf("   Storing values in dynamically allocated array: ");
    for (int i = 0; i < 5; i++) {
        numbers[i] = i * 10; // Use the allocated memory
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers); // CRUCIAL: Release the memory when done
    numbers = NULL; // Good practice: prevent using freed memory
    printf("   Memory has been freed.\n\n");


    // 2. atoi() - String to Integer Conversion
    printf("2. atoi() - String to Integer:\n");
    char str[] = "1234";
    int num = atoi(str); // Convert the string to an integer
    printf("   The string '%s' as an integer is: %d\n", str, num);
    printf("   Now we can do math: %d + 100 = %d\n\n", num, num + 100);


    // 3. rand() and srand() - Random Numbers
    printf("3. rand() and srand() - Random Numbers:\n");
    srand(time(0)); // "Seed" the random number generator with the current time

    printf("   Five random numbers between 1 and 10: ");
    for (int i = 0; i < 5; i++) {
        int random = (rand() % 10) + 1; // Generate a number between 1-10
        printf("%d ", random);
    }
    printf("\n\n");


    // 4. exit() - Terminate the Program
    printf("4. exit() - Program Termination:\n");
    printf("   About to exit the program gracefully...\n");
    // exit(0); // Uncomment this line to see it exit here
    printf("   (This won't print if exit(0) is called above)\n\n");


    // 5. system() - Execute System Commands
    printf("5. system() - Run System Commands:\n");
    printf("   Listing files in current directory:\n");
    // The next line will run the 'dir' command on Windows or 'ls' on Linux/Mac
    // system("dir");   // Uncomment for Windows
    // system("ls -l"); // Uncomment for Linux/Mac
    printf("   (Uncomment the system() command in code to see it work)\n\n");


    // 6. abs() - Absolute Value
    printf("6. abs() - Absolute Value:\n");
    int negative = -55;
    printf("   The absolute value of %d is %d\n\n", negative, abs(negative));


    return 0; // A normal exit (equivalent to exit(0))
}