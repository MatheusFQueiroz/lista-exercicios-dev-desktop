#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "variables.h"

Cliente clientes[5];
Venda vendas[100];
Item_venda itens[1000];

int cliente_count = 0;
int venda_count = 0;
int item_count = 0;

void inserir_cliente(char *nome, char *cpf) {
    if (cliente_count < 5) {
        clientes[cliente_count].cd_cliente = cliente_count + 1;
        strcpy(clientes[cliente_count].nome, nome);
        strcpy(clientes[cliente_count].cpf, cpf);
        cliente_count++;
    } else {
        printf("Limite de clientes atingido.\n");
    }
}

void criar_venda(int cd_cliente, char *dt_venda) {
    if (venda_count < 100) {
        vendas[venda_count].cd_venda = venda_count + 1;
        vendas[venda_count].cd_cliente = cd_cliente;
        strcpy(vendas[venda_count].dt_venda, dt_venda);
        venda_count++;
    } else {
        printf("Limite de vendas atingido.\n");
    }
}

void inserir_itemvenda(int cd_venda, char *ds_produto, float vl_unit, float qtd_produto) {
    if (item_count < 1000) {
        itens[item_count].cd_venda = cd_venda;
        strcpy(itens[item_count].ds_produto, ds_produto);
        itens[item_count].vl_unit = vl_unit;
        itens[item_count].qtd_produto = qtd_produto;
        item_count++;
    } else {
        printf("Limite de itens de venda atingido.\n");
    }
}

void excluir_cliente(int cd_cliente) {
    int i, j;
    for (i = 0; i < cliente_count; i++) {
        if (clientes[i].cd_cliente == cd_cliente) {
            for (j = i; j < cliente_count - 1; j++) {
                clientes[j] = clientes[j + 1];
            }
            cliente_count--;
            break;
        }
    }
}

void excluir_itemvenda(int cd_venda, char *ds_produto) {
    int i, j;
    for (i = 0; i < item_count; i++) {
        if (itens[i].cd_venda == cd_venda && strcmp(itens[i].ds_produto, ds_produto) == 0) {
            for (j = i; j < item_count - 1; j++) {
                itens[j] = itens[j + 1];
            }
            item_count--;
            break;
        }
    }
}

void atualizar_cliente(int cd_cliente, char *nome, char *cpf) {
    int i;
    for (i = 0; i < cliente_count; i++) {
        if (clientes[i].cd_cliente == cd_cliente) {
            strcpy(clientes[i].nome, nome);
            strcpy(clientes[i].cpf, cpf);
            break;
        }
    }
}

void atualizar_itemvenda(int cd_venda, char *ds_produto, float vl_unit, float qtd_produto) {
    int i;
    for (i = 0; i < item_count; i++) {
        if (itens[i].cd_venda == cd_venda && strcmp(itens[i].ds_produto, ds_produto) == 0) {
            itens[i].vl_unit = vl_unit;
            itens[i].qtd_produto = qtd_produto;
            break;
        }
    }
}

void exibir_clientes() {
    int i;
    FILE *file = fopen("clientes.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (i = 0; i < cliente_count; i++) {
        printf("ID: %d, Nome: %s, CPF: %s\n", clientes[i].cd_cliente, clientes[i].nome, clientes[i].cpf);
        fprintf(file, "ID: %d, Nome: %s, CPF: %s\n", clientes[i].cd_cliente, clientes[i].nome, clientes[i].cpf);
    }

    fclose(file);
}

void exibir_vendas() {
    int i, j;
    FILE *file = fopen("vendas.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (i = 0; i < venda_count; i++) {
        float total_venda = 0.0;
        printf("\nID Venda: %d, ID Cliente: %d, Data: %s\n", vendas[i].cd_venda, vendas[i].cd_cliente, vendas[i].dt_venda);
        fprintf(file, "ID Venda: %d, ID Cliente: %d, Data: %s\n", vendas[i].cd_venda, vendas[i].cd_cliente, vendas[i].dt_venda);
        printf("Itens da venda:\n");
        fprintf(file, "Itens da venda:\n");
        for (j = 0; j < item_count; j++) {
            if (itens[j].cd_venda == vendas[i].cd_venda) {
                printf("\tProduto: %s, Valor Unitario: %.2f, Quantidade: %.2f\n",
                       itens[j].ds_produto, itens[j].vl_unit, itens[j].qtd_produto);
                fprintf(file, "\tProduto: %s, Valor Unitario: %.2f, Quantidade: %.2f\n",
                        itens[j].ds_produto, itens[j].vl_unit, itens[j].qtd_produto);
                total_venda += itens[j].vl_unit * itens[j].qtd_produto;
            }
        }
        printf("Total da venda: %.2f\n", total_venda);
        fprintf(file, "Total da venda: %.2f\n\n", total_venda);
    }

    fclose(file);
}

void menu() {
    int option, i, j, op_itemvenda;
    do {
        printf("###############################\n");
        printf("########### BIOPOSTO ##########\n");
        printf(" 1 - Inserir cliente \n");
        printf(" 2 - Registrar venda \n");
        printf(" 3 - Inserir item venda \n");
        printf(" 4 - Historico clientes \n");
        printf(" 5 - Historico vendas \n");
        printf(" 6 - Excluir cliente \n");
        printf(" 7 - Excluir item venda \n");
        printf(" 8 - Atualizar cliente \n");
        printf(" 9 - Atualizar item venda \n");
        printf("10 - Encerrar sessao \n");
        printf("###############################\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        int cd_cliente, cd_venda;
        char nome[100], cpf[12], dt_venda[11], ds_produto[100];
        float vl_unit, qtd_produto;

        switch (option) {
            case 1:
                printf("Nome: ");
                fflush(stdin);
                gets(nome);
                printf("CPF: ");
                fflush(stdin);
                gets(cpf);
                inserir_cliente(nome, cpf);
                printf("Cliente %d registrado com sucesso!\n", cliente_count);
                system("pause");
                system("cls");
                break;
            case 2:
                printf("ID do cliente: ");
                fflush(stdin);
                scanf("%d", &cd_cliente);
                printf("Data (YYYY-MM-DD): ");
                fflush(stdin);
                gets(dt_venda);
                criar_venda(cd_cliente, dt_venda);
                printf("Venda %d registrado com sucesso!\n", venda_count);
                system("pause");
                system("cls");
                break;
            case 3:
                do {
                    printf("ID da venda: ");
                    fflush(stdin);
                    scanf("%d", &cd_venda);
                    printf("Descricao do produto: ");
                    fflush(stdin);
                    gets(ds_produto);
                    printf("Valor unitario: ");
                    fflush(stdin);
                    scanf("%f", &vl_unit);
                    printf("Quantidade: ");
                    fflush(stdin);
                    scanf("%f", &qtd_produto);
                    inserir_itemvenda(cd_venda, ds_produto, vl_unit, qtd_produto);
                    printf("Gostaria de inserir mais um produto? (1 - Sim, 2 - Nao)\n");
                    scanf("%d", &op_itemvenda);
                } while (op_itemvenda != 2);
                system("pause");
                system("cls");
                break;
            case 4:
                exibir_clientes();
                system("pause");
                system("cls");
                break;
            case 5:
                exibir_vendas();
                system("pause");
                system("cls");
                break;
            case 6:
                exibir_clientes();
                printf("\nID do cliente a excluir: ");
                fflush(stdin);
                scanf("%d", &cd_cliente);
                excluir_cliente(cd_cliente);
                system("cls");
                break;
            case 7:
                exibir_vendas();
                printf("\nID da venda: ");
                fflush(stdin);
                scanf("%d", &cd_venda);
                printf("Descricao do produto: ");
                fflush(stdin);
                gets(ds_produto);
                excluir_itemvenda(cd_venda, ds_produto);
                system("pause");
                system("cls");
                break;
            case 8:
                printf("ID do cliente a atualizar: ");
                fflush(stdin);
                scanf("%d", &cd_cliente);
                printf("Novo nome: ");
                fflush(stdin);
                gets(nome);
                printf("Novo CPF: ");
                fflush(stdin);
                gets(cpf);
                atualizar_cliente(cd_cliente, nome, cpf);
                system("pause");
                system("cls");
                break;
            case 9:
                printf("ID da venda do item a atualizar: ");
                fflush(stdin);
                scanf("%d", &cd_venda);
                printf("Descricao do produto: ");
                fflush(stdin);
                gets(ds_produto);
                printf("Novo valor unitario: ");
                fflush(stdin);
                scanf("%f", &vl_unit);
                printf("Nova quantidade: ");
                fflush(stdin);
                scanf("%f", &qtd_produto);
                atualizar_itemvenda(cd_venda, ds_produto, vl_unit, qtd_produto);
                system("pause");
                system("cls");
                break;
            case 10:
                printf("Encerrando sessao...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (option != 10);
}

int main() {
    menu();
    return 0;
}
