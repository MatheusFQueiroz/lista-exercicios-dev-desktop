#include <stdlib.h>
#include <stdio.h>

int main () {
    float wages;

    printf("Insira o seu salario:\n");
    scanf("%f", &wages);

    if (wages <= 280) {
        float increase = wages * 0.20;
        printf("%.2f \n20%% de aumento \n%.2f", wages, increase);
    } else if (wages > 280 && wages <= 700) {
        float increase = wages * 0.15;
        printf("%.2f \n15%% de aumento \n%.2f", wages, increase);
    } else if (wages > 700 && wages <= 1500) {
        float increase = wages * 0.1;
        printf("%.2f \n10%% de aumento \n%.2f", wages, increase);
    } else {
        float increase = wages * 0.05;
        printf("%.2f \n5%% de aumento \n%.2f", wages, increase);
    }
}
