#include <stdlib.h>
#include <stdio.h>

int main () {
    int numero, somaPositivos = 0, qntNegativos = 0;

    printf("Insira uma sequencia de numeros:\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0 ) {
            somaPositivos = somaPositivos + numero;
        } else {
            qntNegativos++;
        }
    }

    printf("Soma dos numero positivos: %d\n", somaPositivos);
    printf("Quantidade dos numeros negativos %d\n", qntNegativos);
}
