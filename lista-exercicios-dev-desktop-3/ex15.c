#include <stdlib.h>
#include <stdio.h>

int main () {
    char a, b, c, d, e;
    int quest = 0;

    printf("Voce telefonou para a vitima? (S ou N)\n");
    printf("Voce esteve no local do crime? (S ou N)\n");
    printf("Voce mora perto da vitima? (S ou N)\n");
    printf("Voce devia para a vitima? (S ou N)\n");
    printf("Voce ja trabalhou com a vitima? (S ou N)\n");
    scanf("%c %c %c %c %c", &a, &b, &c, &d, &e);

    if (tolower(a) == 's') {
        quest = quest + 1;
    }
    if (tolower(b) == 's') {
        quest = quest + 1;
    }
    if (tolower(c) == 's') {
        quest = quest + 1;
    }
    if (tolower(d) == 's') {
        quest = quest + 1;
    }
    if (tolower(e) == 's') {
        quest = quest + 1;
    }

    if (quest < 2) {
        printf("Inocente\n");
    } else if (quest == 2) {
        printf("Suspeito\n");
    } else if (quest >= 3 && quest <= 4) {
        printf("Cumplice\n");
    } else {
        printf("Assasino\n");
    }
}
