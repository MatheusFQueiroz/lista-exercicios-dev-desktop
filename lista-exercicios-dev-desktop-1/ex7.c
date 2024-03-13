#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main () {
    float num1, num2, num3;

    printf("Escreva a primeira nota: (ex: 8, 7.5, 3)\n");
    scanf("%f", &num1);

    printf("Escreva a segunda nota: \n");
    scanf("%f", &num2);

    printf("Escreva a terceira nota: \n");
    scanf("%f", &num3);

    float media = (num1 + num2 + num3) / 3;
    printf("Esta e a media das notas inseridas: %.2f", media);
}
