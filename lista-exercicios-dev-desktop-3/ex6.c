#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    float apples, amount;

    printf("Insira a quantidade de macas que voce quer comprar: \n");
    scanf("%f", &apples);

    if (apples <= 12) {
        amount = apples * 1.3;
        printf("Este e o custo total da compra: R$%.2f", amount);
    } else {
        printf("Este e o custo total da compra: R$%.2f", apples);
    }
}
