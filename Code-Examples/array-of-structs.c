#include <stdio.h>

typedef struct{
    char name[30];
    int year;
    float price;
}Games;

int main() {

    Games games[] = {{"Dark Souls 3", 2016, 49.99},
                   {"Sekiro", 2019, 31.99},
                   {"Elden Ring", 2022, 39.99}};

    int size_of_games = sizeof(games) / sizeof(games[0]);

    for(int i = 0; i < size_of_games; i++) {
        printf("%s %d $%.2f\n", games[i].name, games[i].year, games[i].price);
    }

    return 0;
}