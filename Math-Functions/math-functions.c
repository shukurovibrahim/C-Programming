#include <stdio.h>
#include <math.h>  // Contains all math functions

int main() {
    float x = 45.7;  // Original value
    float result;

    // 1. Square root (√x)
    result = sqrt(x);
    printf("sqrt(%.1f) = %.2f\n", x, result);

    // 2. Power (x^y)
    result = pow(x, 2);  // x squared
    printf("%.1f^2 = %.2f\n", x, result);

    // 3. Round to nearest integer
    result = round(x);
    printf("round(%.1f) = %.1f\n", x, result);

    // 4. Round up (ceiling)
    result = ceil(x);
    printf("ceil(%.1f) = %.1f\n", x, result);

    // 5. Round down (floor)
    result = floor(x);
    printf("floor(%.1f) = %.1f\n", x, result);

    // 6. Absolute value (for integers, use abs(); for floats, use fabs())
    result = fabs(-x);  // Note: fabs() for floats
    printf("fabs(-%.1f) = %.1f\n", x, result);

    // 7. Natural logarithm (base e)
    result = log(x);
    printf("log(%.1f) = %.2f\n", x, result);

    // 8. Trigonometric functions (input in radians!)
    float radians = x * (M_PI / 180.0);  // Convert degrees to radians
    printf("\nTrigonometric functions (%.1f° = %.2f radians):\n", x, radians);

    result = sin(radians);
    printf("sin(%.2f) = %.2f\n", radians, result);

    result = cos(radians);
    printf("cos(%.2f) = %.2f\n", radians, result);

    result = tan(radians);
    printf("tan(%.2f) = %.2f\n", radians, result);

    return 0;
}