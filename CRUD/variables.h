#define VARIABLES_H

typedef struct Cliente {
    int cd_cliente;
    char nome[100];
    char cpf[12];
} Cliente;

typedef struct Venda {
    int cd_venda;
    int cd_cliente;
    char dt_venda[11];
} Venda;

typedef struct Item_venda {
    int cd_venda;
    char ds_produto[100];
    float vl_unit;
    float qtd_produto;
} Item_venda;

void inserir_cliente(char *nome, char *cpf);
void criar_venda(int cd_cliente, char *dt_venda);
void inserir_itemvenda(int cd_venda, char *ds_produto, float vl_unit, float qtd_produto);
void excluir_cliente(int cd_cliente);
void excluir_itemvenda(int cd_venda, char *ds_produto);
void atualizar_cliente(int cd_cliente, char *nome, char *cpf);
void atualizar_itemvenda(int cd_venda, char *ds_produto, float vl_unit, float qtd_produto);
