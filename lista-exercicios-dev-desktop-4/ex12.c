#include <stdlib.h>
#include <stdio.h>

int main () {
    int num = 1, contador = 1;

    while (contador <= 3) {
        if (num % 3 == 0 && num > 3) {
            printf("%d\n", num);
            contador++;
        }
        num++;
    }
}
