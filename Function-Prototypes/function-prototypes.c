#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // Function prototype
bool ageCheck(int age); // Function prototype

int main() {

    hello("User", 30);

    if(ageCheck(21)) {
        printf("You are old. \n");
    }

    else {
        printf("You are young. \n");
    }

    return 0;
}

void hello(char name[], int age) {
    printf("Hello %s \n", name);
    printf("You are %d years old. \n", age);
}

bool ageCheck(int age) {
    return age >= 30;
}