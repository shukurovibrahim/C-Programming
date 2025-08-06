#include <stdio.h>

int main() {

    int dayOfWeek = 0;

    printf("Enter the day of the week (1-7): \n");
    scanf("%d", &dayOfWeek);

    switch(dayOfWeek) {

        case 1:
            printf("Today is Monday");
            break;
        case 2:
            printf("Today is Tuesday");
            break;
        case 3:
            printf("Today is Wednesday");
            break;
        case 4:
            printf("Today is Thursday");
            break;
        case 5:
            printf("Today is Friday");
            break;
        case 6:
            printf("Today is Saturday");
            break;
        case 7:
            printf("Today is Sunday");
            break;

        default:
            printf("Please enter the number (1-7).");
            break;
    }

    return 0;
}