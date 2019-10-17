struct player { char *name; int number; };

void display(struct player a);
struct player rando();
void modify(struct player *a, char *newName, int newNum);
