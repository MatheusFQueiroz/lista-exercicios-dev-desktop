#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Digite o tamanho do triangulo retangulo: ");
    scanf("%d", &x);

    while(x >= 1) {
        int j = 0;
        while(j < x) {
            printf("*");
            j++;
        }
        printf("\n");
        x--;
    }
}
