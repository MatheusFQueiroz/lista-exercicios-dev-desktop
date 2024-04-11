#include <stdlib.h>
#include <stdio.h>

int main() {
    char tipoCarro;
    float percurso, consumo;

    printf("Digite o percurso em quilômetros: ");
    scanf("%f", &percurso);

    printf("Digite o tipo do carro (A, B ou C): ");
    scanf(" %c", &tipoCarro);
    switch(tipoCarro) {
        case 'A':
        case 'a':
            consumo = percurso / 12;
            break;
        case 'B':
        case 'b':
            consumo = percurso / 9;
            break;
        case 'C':
        case 'c':
            consumo = percurso / 8;
            break;
        default:
            printf("Tipo de carro inválido.\n");
            return 1;
    }

    printf("O consumo estimado de combustível é: %.2f litros\n", consumo);

    return 0;
}
