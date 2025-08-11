#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool numberCheck(int number) {

    return number % 2 == 0;
}

int main() {

    int number = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);

    if(numberCheck(number)) {
        printf("Even \n");
    }
    else {
        printf("Odd \n");
    }

    return 0;
}