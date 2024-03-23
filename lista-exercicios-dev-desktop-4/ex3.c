#include <stdlib.h>
#include <stdio.h>

int main () {
    float num = 0;
    int whileNum = 1;
    do {
        float insertNum;
        printf("Insira um número: \n");
        scanf("%f", &insertNum);
        num = num + insertNum;
        whileNum++;
    }
    while (whileNum <= 10);

    num = num / 10;
    printf("Esta e a media dos numero inseridos %.1f\n", num);
}
