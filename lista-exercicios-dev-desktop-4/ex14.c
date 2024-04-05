#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, soma = 0, i = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while(i <= numero / 2) {
        if(numero % i == 0) {
            soma = soma + i;
        }
        i++;
    }

    printf("A soma dos divisores de %d, com excecaoo dele proprio, e: %d\n", numero, soma);
}
