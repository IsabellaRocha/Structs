#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"

int main() {
    struct player p = rando();
    display(p);
    modify(&p, "Jonah", 11);
    display(p);
    return 0;
}
