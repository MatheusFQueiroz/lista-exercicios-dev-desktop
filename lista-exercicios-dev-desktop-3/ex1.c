#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int num;

    printf("Insira um numero inteiro: \n");
    scanf("%d", &num);

    if (num > 0 ) {
        num = num * 3;
    } else {
        num = pow(num, 2);
    }

    printf("%d", num);
}
