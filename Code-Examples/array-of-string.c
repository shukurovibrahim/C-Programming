#include <stdio.h>
#include <string.h>

int main() {

    char names[4][30] = {0};

    int rows = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < rows; i++) {
        printf("Enter your name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for(int i = 0; i < rows; i++) {
        printf("%s\n", names[i]);
    }

    // To display names by characters
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 30; j++) {
            printf("%c ", names[i][j]);
        }
        printf("\n");
    }

    return 0;
}