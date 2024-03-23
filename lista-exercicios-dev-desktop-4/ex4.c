#include <stdlib.h>
#include <stdio.h>

int main () {
    float num = 0;
    int whileNum = 1;
    do {
        float insertNum;
        printf("Insira um número: \n");
        scanf("%f", &insertNum);
        if (num < insertNum) {
            num = insertNum;
        }
        whileNum++;
    }
    while (whileNum <= 10);

    printf("Este e o maior numero inserido: %.1f", num);
}
