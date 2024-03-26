#include <stdio.h>
#include <stdlib.h>

int main() {
    float renda;
    char opcao;

    do {
        printf("Digite a renda mensal: ");
        scanf("%f", &renda);

        if (renda <= 1637.11) {
            printf("Isento de imposto de renda.\n");
        } else if (renda <= 2453.50) {
            printf("Imposto de renda: R$ %.2f\n", renda * 0.075);
        } else if (renda <= 3271.38) {
            printf("Imposto de renda: R$ %.2f\n", renda * 0.15);
        } else if (renda <= 4087.65) {
            printf("Imposto de renda: R$ %.2f\n", renda * 0.225);
        } else {
            printf("Imposto de renda: R$ %.2f\n", renda * 0.275);
        }

        printf("Deseja fazer outra consulta? (S/N): ");
        scanf(" %c", &opcao);
    } while (tolower(opcao) == 's');
}
