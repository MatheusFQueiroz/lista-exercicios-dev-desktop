#include <stdlib.h>
#include <stdio.h>

int main () {
    int num, i = 1;
    printf("Insira um numero que voce queria saber a tabuada:\n");
    scanf("%d", &num);
    do {
        int calc = num * i;
        printf("%d x %d = %d\n", num, i, calc);
        i++;
    }
    while (i <= 10);
}
