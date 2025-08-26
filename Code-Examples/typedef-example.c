#include <stdio.h>

typedef int Numbers;
typedef char Name[50];
typedef char Initial[3];

int main() {

    Numbers num1 = 27;

    Name name = "Ibrahim Shukurov";

    Initial user = "IS";

    printf("%d\n", num1);
    printf("%s\n", name);
    printf("%s\n", user);

    return 0;
}