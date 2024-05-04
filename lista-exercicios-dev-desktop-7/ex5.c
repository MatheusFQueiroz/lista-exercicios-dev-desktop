#include <stdlib.h>
#include <stdio.h>

void converterParaOutrasMedidas(float metros) {
    float decimetros, centimetros, milimetros;


    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;


    printf("%.2f metros correspondem a:\n", metros);
    printf("%.2f decimetros\n", decimetros);
    printf("%.2f centimetros\n", centimetros);
    printf("%.2f milimetros\n", milimetros);
}

int main () {
    float metros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    converterParaOutrasMedidas(metros);
}
