#ifndef CRUD_H
#define CRUD_H

#include <windows.h>


typedef struct {
    int id;
    char nome[50];
} Cliente;

typedef struct {
    int id;
    int clienteId;
    char tipoCombustivel[50];
    float quantidade;
    float preco;
    float total;
} Venda;

void adicionarCliente(char *nome);
void listarClientes(HWND hList);
void atualizarCliente(int id, char *nome);
void excluirCliente(int id);

void registrarVenda(int clienteId, char *tipoCombustivel, float quantidade, float preco);
void listarVendas(HWND hList);

#define ID_BTN_ADD_CLIENTE 1
#define ID_BTN_UPDATE_CLIENTE 2
#define ID_BTN_DELETE_CLIENTE 3
#define ID_BTN_LIST_CLIENTES 4
#define ID_BTN_BACK 5

#define ID_BTN_REGISTRAR_VENDA 6
#define ID_BTN_LISTAR_VENDAS 7

LRESULT CALLBACK ClientesProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK VendasProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

#endif // CRUD_H
