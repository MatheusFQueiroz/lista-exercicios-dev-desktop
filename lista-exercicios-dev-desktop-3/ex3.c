#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int num1, num2, num3;

    printf("Insira 3 numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        int safeNum2 = num2;
        num2 = num1;
        num1 = safeNum2;
    }
    if (num2 > num3) {
        int safeNum3 = num3;
        num3 = num2;
        num2 = safeNum3;
    }
    if (num1 > num2) {
        int safeNum2 = num2;
        num2 = num1;
        num1 = safeNum2;
    }
    printf("Esta e a ordem crescente dos numero inserido: %d %d %d", num1, num2, num3);
}
