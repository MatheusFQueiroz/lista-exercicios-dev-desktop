#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main () {
    float amount, dolarPrice;

    printf("Escreva o valor em reais que quer converter: (ex: 100, 125.50, 32.30)\n");
    scanf("%f", &amount);

    printf("Escreva a cotacao do dolar atualmente: (ex: 4.95)\n");
    scanf("%f", &dolarPrice);

    float realToDolar = amount / dolarPrice;

    printf("Este e o valor inserido convertido para o dolar: %.2f", realToDolar);
}
