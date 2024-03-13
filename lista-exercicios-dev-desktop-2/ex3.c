#include <stdlib.h>
#include <stdio.h>

int main () {
    int totalEleitores, votoBranco, votoNulo, votoValidos;
    float percentVotoBranco, percentVotoNulo, percentVotoValido;

    printf("Insira a quantidade total de eleitores do municipio, votos brancos, votos nulos e votos validos\n");
    scanf("%d %d %d %d", &totalEleitores, &votoBranco, &votoNulo, &votoValidos);

    percentVotoBranco = (100 * votoBranco) / totalEleitores;
    percentVotoNulo = (100 * votoNulo) / totalEleitores;
    percentVotoValido = (100 * votoValidos) / totalEleitores;

    printf("A porcentagem de votos branco e: %.2f%%\n", percentVotoBranco);
    printf("A porcentagem de votos nulos e: %.2f%%\n", percentVotoNulo);
    printf("A porcentagem de votos valido e: %.2f%%\n", percentVotoValido);
}
