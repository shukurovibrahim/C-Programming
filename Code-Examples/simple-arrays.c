#include <stdio.h>

int main() {

    int numbers[] = {10, 20, 30, 40, 50}; // Array of numbers
    char grades[] = {'A', 'B', 'C', 'D', 'F'}; // Array of single characters
    char name[] = "Ibrahim Shukurov"; // Array of Strings

    numbers[0] = 100; // We can change value of the element

    int numbers_length = sizeof(numbers) / sizeof(numbers[0]); // strlen doesn't work with arrays

    for(int i = 0; i < numbers_length; i++){
        printf("%d\n", numbers[i]);
    }

    return 0;
}