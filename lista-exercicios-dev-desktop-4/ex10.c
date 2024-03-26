#include <stdio.h>
#include <stdlib.h>

int main() {
    int y, x;
    printf("Digite a altura: ");
    scanf("%d", &y);
    printf("Digite a largura: ");
    scanf("%d", &x);

    int i = 0;
    while(i < y) {
        int j = 0;
        while(j < x) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}
