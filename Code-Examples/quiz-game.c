#include <stdio.h>

int main() {

    char questions[][100] = {
        "Which animal is known as the 'King of the Jungle'?",
        "What is the largest ocean on Earth?",
        "How many bones are in the human body?",
        "Which planet is known as the Red Planet?",
        "What is the capital of Japan?"
    };

    char options[][100] = {
        "A. Lion\nB. Tiger\nC. Elephant\nD. Gorilla",
        "A. Atlantic Ocean\nB. Indian Ocean\nC. Arctic Ocean\nD. Pacific Ocean",
        "A. 106\nB. 206\nC. 306\nD. 406",
        "A. Venus\nB. Mars\nC. Jupiter\nD. Saturn",
        "A. Seoul\nB. Beijing\nC. Tokyo\nD. Bangkok"
    };

    char answerKey[] = {'A', 'D', 'B', 'B', 'C'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;

    printf("*** GENERAL KNOWLEDGE QUIZ ***\n");

    for(int i = 0; i < questionCount; i++) {
        printf("\nQuestion %d/%d:\n", i+1, questionCount);
        printf("%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice (A/B/C/D): ");
        scanf(" %c", &guess);

        if(guess == answerKey[i]) {
            printf("\nCORRECT!\n");
            score++;
        }
        else {
            printf("\nWRONG! Correct answer was %c.\n", answerKey[i]);
        }
    }

    printf("\nYou scored %d out of %d!\n", score, questionCount);

    return 0;
}