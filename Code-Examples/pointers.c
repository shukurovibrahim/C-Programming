#include <stdio.h>

int main() {

    int age = 22;
    int* ptr = &age;

    float gpa = 3.9;
    float* pGPA = &gpa;

    char grade = 'A';
    char* pGrade = &grade;

    char *name = "User";

    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    printf("%p\n", pGPA);
    printf("%.2f\n", *pGPA);

    printf("%p\n", pGrade);
    printf("%c\n", *pGrade);

    printf("%p\n", name);
    printf("%s\n", name);

    return 0;
}