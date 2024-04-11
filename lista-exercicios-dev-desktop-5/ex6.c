#include <stdlib.h>
#include <stdio.h>

int main () {
    int type;
    printf("Insira o destino de sua viagem:\n");
    printf("..... regiao norte = 1 ........\n");
    printf("..... regiao nordeste = 2 .....\n");
    printf("..... regiao centro-oeste = 3 .\n");
    printf("..... regiao nordeste = 4 .....\n");
    scanf("%d", &type);

    switch (type) {
        case 1:
            printf("Insira se  viagem e ida e volta:\n");
            printf("........ Apenas ida = 1 ........\n");
            printf("........ Ida e volta = 2 .......\n");
            scanf("%d", &type);
            if (type == 1) {
                printf("Sua passagem para o norte e: R$500,00\n");
                break;
            } else {
                printf("Sua passagem para o norte e: R$900,00\n");
                break;
            }
        case 2:
            printf("Insira se  viagem e ida e volta:\n");
            printf("........ Apenas ida = 1 ........\n");
            printf("........ Ida e volta = 2 .......\n");
            scanf("%d", &type);
            if (type == 1) {
                printf("Sua passagem para o nordeste e: R$350,00\n");
                break;
            } else {
                printf("Sua passagem para o nordeste e: R$650,00\n");
                break;
            }
        case 3:
            printf("Insira se  viagem e ida e volta:\n");
            printf("........ Apenas ida = 1 ........\n");
            printf("........ Ida e volta = 2 .......\n");
            scanf("%d", &type);
            if (type == 1) {
                printf("Sua passagem para o centro-oeste e: R$350,00\n");
                break;
            } else {
                printf("Sua passagem para o centro-oeste e: R$600,00\n");
                break;
            }
        case 4:
            printf("Insira se  viagem e ida e volta:\n");
            printf("........ Apenas ida = 1 ........\n");
            printf("........ Ida e volta = 2 .......\n");
            scanf("%d", &type);
            if (type == 1) {
                printf("Sua passagem para o sul e: R$300,00\n");
                break;
            } else {
                printf("Sua passagem para o sul e: R$550,00\n");
                break;
            }
    }
}
