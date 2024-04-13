#include <stdlib.h>
#include <stdio.h>

int main () {
    int i, minimo, maximo, numero, quantidade;

    printf("Insira quantos numero voce deseja inserir\n");
    scanf("%d", &quantidade);

    printf("Insira o primeiro numero\n");
    scanf("%d", &numero);
    maximo = minimo = numero;

    for (i = 2; i <= quantidade; i++) {
        printf("Digite o proximo numero\n");
        scanf("%d", &numero);

        if (numero > maximo) {
            maximo = numero;
        }
        if (numero < minimo) {
            minimo = numero;
        }
    }
    printf("O maior numero digitado foi: %d, e o menor foi: %d", maximo, minimo);
}
