#include <stdlib.h>
#include <stdio.h>

int main () {
    int i, num, tabuada = 0;

    printf("Insira um valor que voce deseja saber a tabuada\n");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        tabuada = num * i;
        printf("%d x %d = %d\n", num, i, tabuada);
    }
}
