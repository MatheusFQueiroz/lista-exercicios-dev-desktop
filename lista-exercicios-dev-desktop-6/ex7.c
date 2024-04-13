#include <stdlib.h>
#include <stdio.h>

int main () {
    int i, integer, decimal, sum;
    float result;

    for (i = 1000; i <= 9999; i++) {
        integer = i / 100;
        decimal = i % 100;
        sum = integer + decimal;
        result = pow(sum, 2);
        if (result == i) {
            printf("%d + %d = %d^2 = %.0f\n", integer, decimal, sum, result);
        }
    }
}
