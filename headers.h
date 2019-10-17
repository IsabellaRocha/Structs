struct player { char name[10]; int number; };

void display(struct player a);
struct player rando();
void modify(struct player *a, char *newName, int newNum);
