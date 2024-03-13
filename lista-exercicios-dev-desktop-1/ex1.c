#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main () {
    int num1;
    int num2;

    printf("Digite o primeiro numero:\n");
    scanf("%i", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%i", &num2);

    int plus = num1+num2;
    int minus = num1-num2;
    int multiplication = num1*num2;
    float division = num1/num2;

    printf("A soma dos dois valores e: %i \n", plus);
    printf("A subtracao de um numero pelo outro e: %i \n", minus);
    printf("A multiplicacao dos dois numeros e: %i \n", multiplication);
    printf("A divisao do primeiro numero pelo segundo e: %.1f \n", division);

    system("pause");
}
