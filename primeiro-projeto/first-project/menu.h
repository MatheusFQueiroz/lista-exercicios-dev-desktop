int menu () {
    int op;
    printf(".......... Menu ..........\n");
    printf("... 1 - exercicio 1 prova \n");
    printf("... 2 - exercicio 2 prova \n");
    printf("... 3 - exercicio 3 prova \n");
    printf("... 4 - exercicio 4 prova \n");
    printf("... 0 - Encerrar programa \n");
    scanf("%d", &op);

    switch (op) {
        case 0:
            break;
        case 1:
            ex1();
            system("pause");
            system("cls");
            return menu();
        case 2:
            ex2();
            system("pause");
            system("cls");
            return menu();
        case 3:
            //ex3();
            return menu();
        case 4:
            //ex4();
            return menu();
        default:
            printf("nao e uma opcao valida\n");
            return menu();
    }

    return 0;
}
