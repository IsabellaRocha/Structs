#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

char Names[4][7] = {"Dingman", "Ryan", "Chris", "Henry"};
int Numbers[] = {8, 78, 12, 70};


int main() {
    struct player Quarterback;
    Quarterback.name = Names[0];
    Quarterback.number = Numbers[0];
    display(Quarterback);
    displayRando(Quarterback);
    modify(Quarterback, "Jonah", 11);
    display(Quarterback);
}
