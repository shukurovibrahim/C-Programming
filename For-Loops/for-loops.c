#include <stdio.h>
#include <windows.h>    // For Windows-specific Sleep() function (milliseconds)
#include <unistd.h>     // For Unix-like sleep() function (seconds)

int main() {

    for (int i = 10; i > 0; i--) {
        Sleep(1000);
        printf("%d\n\n", i);
    }

    printf("Happy New Year!!!");

    return 0;
}