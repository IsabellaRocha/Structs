#include <stdio.h>
#include <stdlib.h>

char[][] Names = {"Dingman, Ryan, Chris, Henry"};
int[] Numbers = {8, 78, 12, 70};

void display(struct player a) {
    printf("Player Name: %c\tPlayer Number: %d\n", a.name, a.number);
}

void displayRando(struct player a) {
    srand(time(NULL));
    int r = rand();
    a.Name = Names[r];
    a.Number = Numbers[r];
    printf("Player Name: %c\tPlayer Number: %d\n", a.name, a.number);
}
