#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main () {
    int vet1[5], vet2[5], vet3[5], i;
    srand(time(NULL));
    for(i = 0; i < 5; i++) {
        vet1[i] = 1 + rand() % 10;
        vet2[i] = 1 + rand() % 10;
        printf("%d %d\n", vet1[i], vet2[i]);
    }

}
