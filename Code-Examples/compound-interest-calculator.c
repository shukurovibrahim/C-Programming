#include <stdio.h>
#include <math.h>

int main() {

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Enter the principal (P): \n");
    scanf("%lf", &principal);

    printf("Enter the rate (R): \n");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): \n");
    scanf("%d", &years);

    printf("Enter # of times compounded per year (n): \n");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

    printf("\nAfter %d year/s, total will be $%.2lf.", years, total);


    return 0;
}