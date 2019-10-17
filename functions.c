#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "headers.h"

char Names[4][10] = {"Dingman", "Ryan", "Chris", "Henry"};
int Numbers[] = {8, 78, 12, 70};

void display(struct player a) {
    printf("Player Name: %s\tPlayer Number: %d\n", a.name, a.number);
}

struct player rando() {
    struct player a;
    srand(time(NULL));
    int r = rand() % 4;
    strcpy(a.name, Names[r]);
    a.number = Numbers[r];
    return a;
}

void modify(struct player *a, char *newName, int newNum) {
    strcpy((*a).name, newName);
    (*a).number = newNum;
}
