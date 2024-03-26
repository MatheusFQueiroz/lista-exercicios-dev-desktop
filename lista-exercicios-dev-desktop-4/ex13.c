#include <stdlib.h>
#include<stdio.h>

int main () {
    int num = 1, contador;

    printf("Insira um numero: \n");
    scanf("%d", &contador);

    while (contador >= 1) {
        if (num % 2 == 1) {
            printf("%d\n", num);
            contador--;
        }
        num++;
    }
}
