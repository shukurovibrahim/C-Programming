#include <stdio.h>

// EXTERN STORAGE CLASS
// This variable is declared here, but it will be DEFINED (memory allocated) in another file.
// For this example, we will define it in this file using the 'globalVar' definition below.
extern int externGlobalVar; // Declaration: "This variable exists somewhere."

// Definition of the extern variable (memory allocated here)
// This is usually in a separate .c file. We put it here for simplicity.
int externGlobalVar = 50;

// Function prototype
void demoFunction();

int main() {
    printf("=== Demonstrating C Storage Classes ===\n\n");

    // AUTO STORAGE CLASS (DEFAULT)
    // 'auto' is the default for local variables. You rarely see the keyword used.
    // Lifetime: Within the block {} they are declared in.
    // Scope: Within the block {} they are declared in.
    printf("1. AUTO (local variables):\n");
    auto int autoVar = 10; // The 'auto' keyword is optional here.
    printf("   autoVar value: %d\n", autoVar);
    printf("   (autoVar is destroyed when main() ends)\n\n");


    // REGISTER STORAGE CLASS
    // A suggestion to the compiler to store the variable in a CPU register for faster access.
    // The compiler may or may not obey this suggestion.
    // You cannot take the address of a register variable (&registerVar is invalid).
    printf("2. REGISTER:\n");
    register int registerVar = 20;
    printf("   registerVar value: %d\n", registerVar);
    // printf("Address: %p\n", &registerVar); // THIS LINE WOULD CAUSE A COMPILE ERROR!
    printf("   (Compiler may put registerVar in a CPU register for speed)\n\n");


    // STATIC STORAGE CLASS (inside a function)
    // Lifetime: Persists for the entire program runtime.
    // Scope: Still only within the function it is declared in.
    printf("3. STATIC (inside a function):\n");
    demoFunction(); // Count = 1
    demoFunction(); // Count = 2
    demoFunction(); // Count = 3
    printf("   (staticVar persists between function calls)\n\n");


    // EXTERN STORAGE CLASS (Global Variable)
    // Lifetime: Entire program runtime.
    // Scope: The entire program (can be used in any file that declares it with 'extern').
    printf("4. EXTERN (global variable):\n");
    printf("   externGlobalVar value (from main): %d\n", externGlobalVar);
    demoFunction(); // The function will also print this variable
    printf("   (externGlobalVar is defined once, but can be used across files)\n\n");


    return 0;
}

// A function to demonstrate 'static' and 'extern'
void demoFunction() {
    // STATIC STORAGE CLASS
    // This variable is initialized only once and remembers its value between calls.
    static int staticVar = 0; // Initialization happens only the first time.
    staticVar++; // Increment each time the function is called.

    // EXTERN STORAGE CLASS
    // We can also access the global variable declared at the top here.
    extern int externGlobalVar; // This is optional in the same file, but good practice.

    printf("   Inside demoFunction() - staticVar = %d, externGlobalVar = %d\n", staticVar, externGlobalVar);
}