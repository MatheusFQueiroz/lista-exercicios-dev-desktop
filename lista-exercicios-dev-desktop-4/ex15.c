#include <stdio.h>
#include <stdlib.h>

int main () {
    int saque, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    notas100 = notas50 = notas20 = notas10 = notas5 = notas2 = notas1 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    while(saque > 0) {
        if(saque >= 100) {
            notas100 = saque / 100;
            saque %= 100;
        } else if(saque >= 50) {
            notas50 = saque / 50;
            saque %= 50;
        } else if(saque >= 20) {
            notas20 = saque / 20;
            saque %= 20;
        } else if(saque >= 10) {
            notas10 = saque / 10;
            saque %= 10;
        } else if(saque >= 5) {
            notas5 = saque / 5;
            saque %= 5;
        } else if(saque >= 2) {
            notas2 = saque / 2;
            saque %= 2;
        }
    }

    printf("Notas de R$100: %d\n", notas100);
    printf("Notas de R$50: %d\n", notas50);
    printf("Notas de R$20: %d\n", notas20);
    printf("Notas de R$10: %d\n", notas10);
    printf("Notas de R$10: %d\n", notas5);
    printf("Notas de R$2: %d\n", notas2);

}
