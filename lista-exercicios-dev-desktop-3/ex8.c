#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    float productValue;

    printf("Insira o valor do produto: \n");
    scanf("%f", &productValue);

    if(productValue < 20) {
        float valorVenda = productValue * 1.45;
        printf("O valor da venda e: R$%.2f \n", valorVenda);
    } else {
        float valorVenda = productValue * 1.3;
        printf("O valor da venda e: R$%.2f \n", valorVenda);
    }
}
