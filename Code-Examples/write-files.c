#include <stdio.h>

int main()
{
    FILE* pFile = fopen("C:\\Users\\Ibrahim\\Desktop\\output.txt", "w");

    char text[] = "You should definitely listen to Arctic Monkeys(505 My Favorite)";

    if (pFile == NULL)
    {
        printf("Couldn't open the file!");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully.");

    fclose(pFile);

    return 0;
}
