#include <stdlib.h>
#include <stdio.h>

int verify (num) {
    if (num > 0) {
        printf("O numero inserido e positivo\n");
    } else if (num < 0) {
        printf("O numero inserido e negativo\n");
    } else {
        printf("O numero inserido e igual a zero\n");
    }
}

int main () {
    int num, op;

    do {
        printf("Insira um valor para verificar se e positivo ou negativo: \n");
        scanf("%d", &num);

        verify(num);

        printf("Deseja fazer outra verificacao? \n");
        printf("..... 1 - Sim .....\n");
        printf("..... 2 - Nao .....\n");
        scanf("%d", &op);
        system("cls");
    } while (op == 1);
}
