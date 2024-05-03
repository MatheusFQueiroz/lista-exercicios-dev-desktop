#include <stdlib.h>
#include <stdio.h>

int verify (num) {
    if (num % 2 == 0) {
        printf("O numero inserido e par\n");
    } else {
        printf("O numero inserido e impar\n");
    }
}

int main () {
    int num, op;

    do {
        printf("Insira um valor para verificar se e par ou impar: \n");
        scanf("%d", &num);

        verify(num);

        printf("Deseja fazer outra verificacao? \n");
        printf("..... 1 - Sim .....\n");
        printf("..... 2 - Nao .....\n");
        scanf("%d", &op);
        system("cls");
    } while (op == 1);
}
