#include <stdlib.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main () {
    int radius;

    printf("Insira o raio do circulo\n");
    scanf("%d", &radius);

    double areaCircle = M_PI * pow(radius, 2);

    printf("A area do circulo e: %f", areaCircle);
}
