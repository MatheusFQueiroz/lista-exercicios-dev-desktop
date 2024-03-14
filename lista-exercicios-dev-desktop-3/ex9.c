#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    float nota1, nota2;

    printf("Insira duas notas:\n");
    scanf("%f %f", &nota1, &nota2);

    float media = (nota1 + nota2) / 2;

    if (media >= 0 && media <= 5) {
        printf("%.1f: Reprovado", media);
    } else if (media >= 5.1 && media <= 6.9) {
        printf("%.1f: Exame", media);
    } else {
        printf("%.1f: Aprovado", media);
    }
}
