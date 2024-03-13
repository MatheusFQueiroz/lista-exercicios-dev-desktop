#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main () {
    float weight, height;

    printf("Insira seu peso para o calculo do IMC: (ex: 53.5kg)\n");
    scanf("%f", &weight);

    printf("Insira sua altura para o calculo do IMC: (ex: 1.78m)\n");
    scanf("%f", &height);

    float potencia = pow(height, 2);
    float imc = weight / potencia;

    printf("Este e o IMC dos dados inseridos %.2f", imc);
}
