#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    char municipio[40];
    int eleitoresAptos, candidatoVotos;

    printf("Insira o nome do municipio, a quantidade de eleitores aptos e a quantidade de votos do candidato mais votado: (ex: Cascavel 300 100)\n");
    scanf("%s %d %d", &municipio, &eleitoresAptos, &candidatoVotos);

    if (eleitoresAptos >= 20000 && candidatoVotos <= (eleitoresAptos / 2)) {
        printf("As eleicoes terao segundo turno\n");
    } else {
        printf("As eleicoes nao terao segundo turno\n");
    }
}
