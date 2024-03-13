#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main () {
    float trip, gas;

    printf("Insira a distancia percorrida: (ex: 100, 125.5)\n");
    scanf("%f", &trip);

    printf("Insira o consumo total de combustivel: (ex: 5, 16.4)\n");
    scanf("%f", &gas);

    float media = trip / gas;
    printf("A media de consumo foi: %.2f km por litro \n", media);
}
