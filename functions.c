#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void display(struct player a) {
    printf("Player Name: %c\tPlayer Number: %d\n", a.name, a.number);
}

void displayRando(struct player a) {
    char Names[4][7] = {"Dingman", "Ryan", "Chris", "Henry"};
    int Numbers[] = {8, 78, 12, 70};
    int r = rand()%4;
    a.name = Names[r];
    a.number = Numbers[r];
    printf("Player Name: %c\tPlayer Number: %d\n", a.name, a.number);
}

void modify(struct player a, char newName[], int newNum) {
    a.name = newName;
    a.number = newNum;
}
