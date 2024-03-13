#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {
    float base, altura;

    printf("Insira os dados da base e da altura do triangulo \n");
    scanf("%f %f", &base, &altura);

    float area = (base * altura) / 2;

    printf("Esta e a area do triangulo dos dados inseridos: %.1f", area);

}
