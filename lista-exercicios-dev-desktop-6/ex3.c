#include <stdlib.h>
#include <stdio.h>

int main () {
    int i, num, safeNum = 0;

    for(i = 0; i < 10; i++) {
        printf("Insira um valor:\n");
        scanf("%d", &num);

        if(num > safeNum) {
            safeNum = num;
        }
    }
    printf("O maior numero inserido foi: %d\n", safeNum);
}
