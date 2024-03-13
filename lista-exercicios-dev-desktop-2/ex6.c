#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main () {
    float x1, y1, x2, y2;

    printf("Insira um ponto de um plano: \n");
    scanf("%f %f", &x1, &y1);
    printf("Insira outro ponto de um plano: \n");
    scanf("%f %f", &x2, &y2);

    float distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os dois pontos do plano e: %.1f", distancia);

}
