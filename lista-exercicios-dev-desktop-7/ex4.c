#include <stdlib.h>
#include <stdio.h>

int verify (int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main () {
    int a, b;

    printf("Insira dois numeros para verificar qual e o maior\n");
    scanf("%d %d", &a, &b);

    printf("O maior numero e: %d", verify(a, b));
}
