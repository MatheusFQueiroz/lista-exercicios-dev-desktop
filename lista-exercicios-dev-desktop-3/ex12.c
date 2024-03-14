#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int cateto1, cateto2;

    printf("Insira os lados de um triangulo retangulo: (ex: 3 5)\n");
    scanf("%d %d", &cateto1, &cateto2);

    double hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    if (hipotenusa >= 100) {
        printf("Hipotenusa excede o tamanho permitido para area\n");
    } else {
        printf("Hipotenusa aceita\n");
    }
}
