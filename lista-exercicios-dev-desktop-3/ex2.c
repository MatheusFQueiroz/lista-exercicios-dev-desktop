#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int age;

    printf("Insira sua idade:\n");
    scanf("%d", &age);

    switch (age) {
        case 0 ... 15:
            printf("Voce nao pode votar\n");
            break;
        case 16 & 17:
            printf("O seu voto e facultativo\n");
            break;
        case 18 ... 69:
            printf("O seu voto e obrigatorio\n");
            break;
        case 70 ... 200:
            printf("O seu voto e facultativo\n");
            break;
    };
}
