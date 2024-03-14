#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    float salario;

    printf("Insira o seu salaro: \n");
    scanf("%f", &salario);

    if (salario <= 600) {
        printf("O seu salario e isento de descontos\n");
    } else if (salario > 600 && salario <= 1200) {
        float desconto = salario - (salario * 0.2);
        printf("O seu salario tem um desconto de 20%% e ficara: R$%.2f", desconto);
    } else if (salario > 1200 && salario <= 2000) {
        float desconto = salario - (salario * 0.25);
        printf("O seu salario tem um desconto de 25%% e ficara: R$%.2f", desconto);
    } else {
        float desconto = salario - (salario * 0.3);
        printf("O seu salario tem um desconto de 30%% e ficara: R$%.2f", desconto);
    }
}
