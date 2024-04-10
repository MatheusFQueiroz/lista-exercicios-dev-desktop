#include <stdlib.h>
#include <stdio.h>

int main () {
    int lados;

    printf("Insira a quantidade de lados da figura:\n");
    scanf("%d", &lados);

    switch (lados) {
        case 3:
            printf("Esta figura e um triangulo\n");
            break;
        case 4:
            printf("Esta figura e um quadrado\n");
            break;
        case 5:
            printf("Esta figura e um pentagono\n");
        case 6:
            printf("Esta figura e um hexagono\n");
            break;
        default:
            printf("Não encontrado o nome da figura\n");
    }
}
