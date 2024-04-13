#include <stdlib.h>
#include <stdio.h>

int main () {
    int i, num;

    printf("Insira um valor para o limite\n");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (i % 2 == 1) {
            printf("%d\n", i);
        }
    }
}
