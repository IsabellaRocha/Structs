#include <stdio.h>
#include <stdlib.h>

struct player { char name[7]; int number; };
char Names[4][7] = {"Dingman, Ryan, Chris, Henry"};
int Numbers[] = {8, 78, 12, 70};

void display(struct player a) {
    printf("Player Name: %c\tPlayer Number: %d\n", a.name, a.number);
}

void displayRando(struct player a) {
    srand(time(NULL));
    int r = rand(4);
    a.Name = Names[r];
    a.Number = Numbers[r];
    printf("Player Name: %c\tPlayer Number: %d\n", a.name, a.number);
}

void modify(struct player a, char newName[], int newNum) {
    a.Name = newName;
    a.Number = newNum;
}

int main() {
    struct player Quarterback;
    Quarterback.name = Names[0];
    Quarterback.number = Numbers[0];
    display(Quarterback);
    displayRando(Quarterback);
    modify(Quarterback, "Jonah", 11);
    display(Quarterback);
}
