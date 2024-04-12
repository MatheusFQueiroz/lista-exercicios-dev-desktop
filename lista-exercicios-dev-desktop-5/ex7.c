#include <stdlib.h>
#include <stdio.h>

int main () {
    int type;
    float weight;

    printf("Selecione um planeta \n");
    printf("..... Mercurio = 1 ..\n");
    printf("..... Venus = 2 .....\n");
    printf("..... Marte = 3 .....\n");
    printf("..... Jupiter = 4 ...\n");
    printf("..... Saturno = 5 ...\n");
    printf("..... Urano = 6 .....\n");
    printf("..... Plutao = 7 ....\n");
    scanf("%d", &type);

    switch (type) {
        case 1:
            printf("Insira seu peso:\n");
            scanf("%f", &weight);
            weight = weight * 0.37;
            printf("Este sera seu peso em Mercurio: %.1f kg", weight);
            break;
        case 2:
            printf("Insira seu peso:\n");
            scanf("%f", &weight);
            weight = weight * 0.88;
            printf("Este sera seu peso em Venus: %.1f kg", weight);
            break;
        case 3:
            printf("Insira seu peso:\n");
            scanf("%f", &weight);
            weight = weight * 0.38;
            printf("Este sera seu peso em Marte: %.1f kg", weight);
            break;
        case 4:
            printf("Insira seu peso:\n");
            scanf("%f", &weight);
            weight = weight * 2.64;
            printf("Este sera seu peso em Jupter: %.1f kg", weight);
            break;
        case 5:
            printf("Insira seu peso:\n");
            scanf("%f", &weight);
            weight = weight * 1.15;
            printf("Este sera seu peso em Saturno: %.1f kg", weight);
            break;
        case 6:
            printf("Insira seu peso:\n");
            scanf("%f", &weight);
            weight = weight * 1.17;
            printf("Este sera seu peso em Urano: %.1f kg", weight);
            break;
        case 7:
            printf("Insira seu peso:\n");
            scanf("%f", &weight);
            weight = weight * 0.06;
            printf("Este sera seu peso em Plutao: %.1f kg", weight);
            break;
    }
}
