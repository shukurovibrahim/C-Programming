#include <stdio.h>

// 1. OBJECT-LIKE MACROS (Constants)
// Simple replacement. Use instead of "magic numbers" in your code.
#define PI 3.14159
#define ARRAY_SIZE 10
#define WELCOME_MESSAGE "Hello, World!"

// 2. FUNCTION-LIKE MACROS (With Arguments)
// Be careful! These are not true functions and can have unexpected behavior.
// Always put parentheses around arguments and the whole expression.
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define IS_UPPERCASE(c) ((c) >= 'A' && (c) <= 'Z')

// 3. MULTI-LINE MACROS
// Use a backslash (\) to continue the macro onto the next line.
#define PRINT_SUM(a, b)                         \
    do                                          \
    {                                           \
        int result = (a) + (b);                 \
        printf("%d + %d = %d\n", a, b, result); \
    } while (0) // 'do while(0)' is a common trick to allow a semicolon after the macro and avoid syntax errors.

// 4. MACROS FOR DEBUGGING
// These can be conditionally compiled
#ifdef DEBUG
// __FILE__ and __LINE__ are built-in macros that give the file name and line number
#define DEBUG_PRINT(msg) printf("DEBUG: %s:%d: %s\n", __FILE__, __LINE__, msg)
#else
// If DEBUG is not defined, this macro does nothing
#define DEBUG_PRINT(msg)
#endif

// 5. MACROS FOR COMMON CODE PATTERNS
// Can make code more readable and less error-prone
#define SWAP(type, a, b) \
    do                   \
    {                    \
        type temp = a;   \
        a = b;           \
        b = temp;        \
    } while (0)

int main()
{
    printf("=== Macro Examples ===\n\n");

    // Using object-like macros
    printf("1. Object-like Macros:\n");
    double radius = 5.0;
    double area = PI * SQUARE(radius); // PI and SQUARE are replaced here
    printf("   Area of circle with radius %.2f is %.2f\n", radius, area);
    printf("   Array size is: %d\n", ARRAY_SIZE);
    printf("   Message: %s\n\n", WELCOME_MESSAGE);

    // Using function-like macros
    printf("2. Function-like Macros:\n");
    int num = 5;
    printf("   Square of %d is %d\n", num, SQUARE(num));

    int x = 10, y = 25;
    printf("   The max of %d and %d is %d\n", x, y, MAX(x, y));

    char testChar = 'G';
    printf("   Is '%c' uppercase? %s\n\n", testChar, IS_UPPERCASE(testChar) ? "Yes" : "No");

    // Using multi-line macro
    printf("3. Multi-line Macro:\n");
    PRINT_SUM(15, 27); // This looks like a function call but expands to multiple lines
    printf("\n");

    // Using debugging macro
    printf("4. Debugging Macro:\n");
    DEBUG_PRINT("This is a debug message."); // Will only print if compiled with -DDEBUG flag
    printf("   (Debug message might not be visible)\n\n");

    // Using the SWAP macro
    printf("5. SWAP Macro:\n");
    int a = 100, b = 200;
    printf("   Before swap: a = %d, b = %d\n", a, b);
    SWAP(int, a, b); // Notice we pass the type as an argument
    printf("   After swap: a = %d, b = %d\n\n", a, b);

    // Demonstrating a potential pitfall with function-like macros
    printf("6. Macro Pitfall Example:\n");
    int result = SQUARE(++x); // This becomes ((++x) * (++x)) - x is incremented TWICE!
    printf("   SQUARE(++x) is %d (x is now %d - unexpected!)\n", result, x);
    printf("   This is why real functions are often safer.\n");

    return 0;
}