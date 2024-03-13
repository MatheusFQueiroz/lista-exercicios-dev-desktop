#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main () {
    float num1, num2, num3;

    printf("Insira a primeira nota: (ex: 8, 8.5, 5.4)\n");
    scanf("%f", &num1);

    printf("Insira a segunda nota: \n");
    scanf("%f", &num2);

    printf("Insira a terceira nota: \n");
    scanf("%f", &num3);

    float media = ((num1 * 2) + (num2 * 3) + (num3 * 5)) / 10;

    printf("Esta e a media ponderada das notas inseridas: %.2f \n", media);
}
