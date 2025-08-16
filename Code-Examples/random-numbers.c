#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int min = 10;
    int max = 100;

    int randomNumber1 = (rand() % (max - min +1)) + min;
    int randomNumber2 = (rand() % (max - min +1)) + min;
    int randomNumber3 = (rand() % (max - min +1)) + min;

    printf("%d\n%d\n%d\n", randomNumber1, randomNumber2, randomNumber3);

    return 0;
}