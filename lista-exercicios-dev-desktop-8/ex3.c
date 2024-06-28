#include <stdlib.h>
#include <stdio.h>

int main () {
    int vet[8], i;

    for(i = 0; i < 8; i++) {
        printf("Insira um numero inteiro:\n");
        scanf("%d", &vet[i]);
        fflush(stdin);
    }
    for(i = 7; i >= 0; i--) {
        printf("array[%d]: %d\n", i, vet[i]);
    }
}
