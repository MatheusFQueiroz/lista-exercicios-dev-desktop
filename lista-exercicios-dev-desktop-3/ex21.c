#include <stdio.h>
#include <math.h>

int equacaoSegundoGrau(int a, int b, int c) {
    if (a == 0) {
        printf("Nao e equaçao de segundo grau.\n");
    } else {
        int delta = b * b - 4 * a * c;
        if (delta >= 0) {
            printf("O valor de Delta e %d\n", delta);
        } else {
            printf("Nao ha raizes reais\n");
        }
    }
}

int main() {
    int a, b, c;

    printf("Digite o valor de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    equacaoSegundoGrau(a, b, c);
}
