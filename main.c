#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main() {
    struct player Quarterback;
    Quarterback.name = Names[0];
    Quarterback.number = Numbers[0];
    display(Quarterback);
    displayRando(Quarterback);
    modify(Quarterback, "Jonah", 11);
    display(Quarterback);
}
