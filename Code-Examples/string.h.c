#include <stdio.h>
#include <string.h>

int main()
{
    printf("=== string.h Function Examples ===\n\n");

    printf("1. strlen (String Length):\n");
    char greeting[] = "Hello";
    int length = strlen(greeting);
    printf("   '%s' is %d characters long.\n\n", greeting, length);


    printf("2. strcpy (String Copy):\n");
    char source[] = "I am the source.";
    char destination[50];

    strcpy(destination, source);
    printf("   Source: %s\n", source);
    printf("   Destination after copy: %s\n\n", destination);

    printf("3. strncpy (Safe String Copy):\n");
    char long_source[] = "This is a very long string that we might not want to copy completely.";
    char safe_destination[20];

    strncpy(safe_destination, long_source, sizeof(safe_destination) - 1);
    safe_destination[sizeof(safe_destination) - 1] = '\0';
    printf("   Safe Destination: '%s'\n\n", safe_destination);

    printf("4. strcat (String Concatenate):\n");
    char str1[50] = "Hello ";
    char str2[] = "World!";

    strcat(str1, str2);
    printf("   After strcat: %s\n\n", str1);

    printf("5. strcmp (String Compare):\n");
    char word1[] = "apple";
    char word2[] = "banana";
    char word3[] = "apple";

    int result1 = strcmp(word1, word2);
    int result2 = strcmp(word1, word3);

    printf("   strcmp('%s', '%s') = %d (Negative means first is less)\n", word1, word2, result1);
    printf("   strcmp('%s', '%s') = %d (Zero means they are equal)\n\n", word1, word3, result2);

    printf("6. strchr (Find Character):\n");
    char sentence[] = "The quick brown fox";
    char* ptr = strchr(sentence, 'q');

    if (ptr != NULL)
    {
        printf("   Found 'q' at position: %ld\n", ptr - sentence);
        printf("   The rest of the string is: '%s'\n\n", ptr);
    }

    printf("7. strstr (Find Substring):\n");
    char text[] = "C programming is powerful!";
    char search[] = "is";
    ptr = strstr(text, search);

    if (ptr != NULL)
    {
        printf("   Found '%s' at position: %ld\n", search, ptr - text);
        printf("   The rest of the string is: '%s'\n\n", ptr);
    }

    printf("8. strtok (Split String into Tokens):\n");
    char data[] = "John,Doe,25,USA";
    const char delimiter[] = ",";

    char* token = strtok(data, delimiter);

    printf("   Tokens:\n");
    while (token != NULL)
    {
        printf("   - %s\n", token);
        token = strtok(NULL, delimiter);
    }

    return 0;
}
