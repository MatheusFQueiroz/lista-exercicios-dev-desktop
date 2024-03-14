#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int age, weight;

    printf("Insira a sua idade e o seu peso:\n");
    scanf("%d %d", &age, &weight);

    if (age >= 18 && age <= 67) {
        if (weight >= 50) {
            printf("Voce pode doar sangue\n");
        } else {
            printf("Voce nao pode doar sangue\n");
        }
    } else {
        printf("Voce nao pode doar sangue\n");
    }
}
