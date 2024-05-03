#include <stdlib.h>
#include <stdio.h>

int delta (int a, int b, int c) {
    int delta = (b * b) - (4 * a * c);
    printf("O valor do delta é: %d\n", delta);
}

int main () {
    int a, b, c, op;

    do {
        printf("Insira os valores de a, b e c\n");
        scanf("%d %d %d", &a, &b, &c);

        delta(a, b, c);

        printf("Deseja fazer outra verificacao? \n");
        printf("..... 1 - Sim .....\n");
        printf("..... 2 - Nao .....\n");
        scanf("%d", &op);
        system("cls");
    } while (op == 1);
}
