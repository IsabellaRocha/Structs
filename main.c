#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"

int main() {
    struct player p = rando();
    display(p);
    modify(&p, "Wagner", 54);
    display(p);
    return 0;
}
