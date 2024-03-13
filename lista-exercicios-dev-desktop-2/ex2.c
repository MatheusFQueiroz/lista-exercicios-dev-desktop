#include <stdlib.h>
#include <stdio.h>

int main () {
    int celcius;

    printf("Insira a temperatura em Celcius para a conversao\n");
    scanf("%d", &celcius);

    float fahrenheit = (9 * celcius + 160) / 5;

    printf("Esta e a temperatura inserida em Fahrenheit: %.1f", fahrenheit);
}
