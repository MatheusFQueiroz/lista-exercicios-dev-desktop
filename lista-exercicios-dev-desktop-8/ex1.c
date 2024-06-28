#include <stdlib.h>
#include <stdio.h>

int main () {
    int vet[6] = {1, 0 , 5, -2, -5, 7}, soma, i;
    // Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma
    soma = vet[0] + vet[1] + vet[5];
    printf("soma: %d \n", soma);
    vet[4] = 100;
    for(i = 0; i < 6; i++) {
        printf("array[%d]: %d \n", i, vet[i]);
    }
}
