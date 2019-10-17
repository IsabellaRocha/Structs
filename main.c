#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "headers.h"

int main() {
    struct player Quarterback;
    Quarterback.name = "Dingman";
    Quarterback.number = 8;
    display(Quarterback);
    struct player p = rando();
    display(p);
    modify(&Quarterback, "Jonah", 11);
    display(Quarterback);
    return 0;
}
