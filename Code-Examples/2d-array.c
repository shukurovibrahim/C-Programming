#include <stdio.h>

int main() {

    int numpad[][3] = {{'1', '2', '3'},
                       {'4', '5', '6'},
                       {'7', '8', '9'},
                       {'*', '0', '#'}};

    for(int i = 0; i < 4; i++) { // rows
        for(int j = 0; j < 3; j++) { // columns
            printf("%c ", numpad[i][j]);
        }

        printf("\n");
    }

    return 0;
}