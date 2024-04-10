#include <stdlib.h>
#include <stdio.h>

int num1, num2;
int operationC = 0;

int main () {
    printf("..Escolha a operacao..\n");
    printf("soma = 1 ..............\n");
    printf("subtracao = 2 .........\n");
    printf("multiplicacao = 3 .....\n");
    printf("divisao = 4 ...........\n");
    printf("Encerrar o programa = 5\n");
    scanf("%d", &operationC);

    switch (operationC) {
        case 1:
            printf("Insira os dois numeros para realizar a operacao\n");
            scanf("%d %d", &num1, &num2);
            num1 = num1 + num2;
            printf("Esta e a soma dos valores inseridos: %d\n\n", num1);
            main();
        case 2:
            printf("Insira os dois numeros para realizar a operacao\n");
            scanf("%d %d", &num1, &num2);
            num1 = num1 - num2;
            printf("Esta e a subtracao dos valores inseridos: %d\n\n", num1);
            main();
        case 3:
            printf("Insira os dois numeros para realizar a operacao\n\n");
            scanf("%d %d", &num1, &num2);
            num1 = num1 * num2;
            printf("Esta e a multiplicacao dos valores inseridos: %d\n\n", num1);
            main();
        case 4:
            printf("Insira os dois numeros para realizar a operacao\n\n");
            scanf("%d %d", &num1, &num2);
            num1 = num1 / num2;
            printf("Esta e a divisao dos valores inseridos: %d\n\n", num1);
            main();
        case 5:
            break;
        default:
            printf("Não é uma operação válida\n\n");
            main();

    }
}
