#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int accountNum, option = 0, saldo = 0;
char name[80];

int menu () {
    printf("........... Menu ...........\n");
    printf(".. Conferir meus dados = 1 .\n");
    printf(".. Deposito = 2 ............\n");
    printf(".. Saque = 3 ...............\n");
    printf(".. Verificar meu saldo = 4..\n");
    printf(".. Encerrar sessao = 5 .....\n");
    scanf("%d", &option);
    return option;
}

int main () {
    int deposit;
    if (option == 0) {
        printf("Insira seu nome completo para criar uma conta:\n");
        fgets(name, 80, stdin);
        printf("\n");
        accountNum = rand() * rand();
    }

    menu();

    switch (option) {
        case 1:
            printf("Dados Bancarios\n");
            printf("Nome: %s", name);
            printf("Numero da conta: %d\n", accountNum);
            printf("\n");
            return main();
        case 2:
            printf("Insira o valor de deposito:\n");
            scanf("%d", &deposit);
            saldo = saldo + deposit;
            printf("\n");
            return main();
        case 3:
            printf("Insira o valor de saque:\n");
            scanf("%d", &deposit);
            saldo = saldo - deposit;
            printf("\n");
            return main();
        case 4:
            printf("..... Saldo .....\n");
            printf(".. R$%d", saldo);
            printf("\n");
            return main();
        case 5:
            break;
        default:
            return main();
    }
}
