#include <stdlib.h>
#include <stdio.h>

int main () {
    int vet[5], soma, i;

    for(i = 0; i < 5; i++) {
        printf("Insira um numero inteiro:\n");
        scanf("%d", &vet[i]);
        fflush(stdin);
    }
    for(i = 0; i < 5; i++) {
        soma += vet[i];
    }
    printf("A soma dos valores inseridos e: %d", soma);
}
