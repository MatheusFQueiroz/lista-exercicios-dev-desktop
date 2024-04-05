#include <stdlib.h>
#include <stdio.h>

int main () {
    int numero, i = 2;
    int primo = 1;

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("Numero invalido. Por favor, digite um numero maior que 1.\n");
        return 1;
    }

    while(i <= numero / 2 && primo) {
        if(numero % i == 0) {
            primo = 0;
        }
        i++;
    }

    if(primo) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }
}
