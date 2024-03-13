#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float num1, num2, num3;

    printf("Insira 3 valores inteiros e positivos:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    float r = pow((num1 + num2), 2);
    float s = pow((num2 + num3), 2);
    float d = (r + s) / 2;

    printf("Este e o resultado da expressao usando os valores inseridos: %.1f\n", d);
}
