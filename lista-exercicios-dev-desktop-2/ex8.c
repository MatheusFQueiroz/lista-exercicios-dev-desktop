#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {
    float aresta;

    printf("Insira o valor da aresta do tetraedro\n");
    scanf("%f",&aresta);

    float area = sqrt(3) * pow(aresta, 2);

    printf("Esta e a area do tetraedro dos dados inseridos: %.1f\n", area);

}
