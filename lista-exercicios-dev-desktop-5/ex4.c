#include <stdlib.h>
#include <stdio.h>

int main() {
    int idade;
    float valorPlano = 100.0;

    printf("Digite a idade do conveniado: \n");
    scanf("%d", &idade);

    switch (idade) {
        case 0 ... 9:
            valorPlano += 80;
            break;
        case 10 ... 29:
            valorPlano += 50;
            break;
        case 30 ... 39:
            break;
        case 40 ... 60:
            valorPlano += 95;
            break;
        default:
            if (idade > 60) {
                valorPlano += 130;
            } else {
                printf("Idade invalida.\n");
                return 1;
            }
    }

    printf("O valor a ser pago pelo plano de saude e: R$ %.2f\n", valorPlano);

    return 0;
}
