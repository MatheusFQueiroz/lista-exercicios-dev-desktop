#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main () {
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    int antecessor = num-1;
    int sucessor = num+1;

    printf("O numero antecessor e: %d \n", antecessor);
    printf("O numero sucessor e: %d \n", sucessor);
}
