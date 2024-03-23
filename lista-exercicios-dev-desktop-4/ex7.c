#include <stdlib.h>
#include <stdio.h>

int main () {
    int soma = 0, whileN = 1;

    while (whileN <= 500) {
        if (whileN % 2 != 0 && whileN % 3 == 0) {
            soma = soma + whileN;
        }
        whileN++;
    }

    printf("Esta e a soma de todos os numero multiplos de 3 entre 1 e 500: %d\n", soma);
}
