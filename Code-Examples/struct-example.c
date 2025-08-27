#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);

int main() {

    Student student1 = {"Alpha", 22, 3.9, true};

    Student student2 = {0};

    strcpy(student2.name, "Beta");
    student2.age = 20;
    student2.gpa = 1.0;
    student2.isFullTime = false;

    printStudent(student1);
    printStudent(student2);

    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}