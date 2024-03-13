#include <stdio.h>
#include <stdlib.h>

int main () {
    float baseMenor, baseMaior, altura;

    printf("Insira o valor da base menor, base maior e altura:\n");
    scanf("%f %f %f", &baseMenor, &baseMaior, &altura);

    float areaTrapezio = (baseMaior + baseMenor) / 2 * altura;

    printf("Esta e a area das medidas inseridas de um trapezio: %.1f", areaTrapezio);

}
