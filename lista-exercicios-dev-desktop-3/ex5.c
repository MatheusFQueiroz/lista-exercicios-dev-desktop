#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int num;

    printf("Insira um numero:\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        num = num / 2;
        printf("Esta e a metade do numero inserido: %d\n", num);
    } else {
        double dNum = num;
        dNum = sqrt(dNum);
        printf("Esta e a raiz quadrada do numero inserido: %f\n", dNum);
    }
}
