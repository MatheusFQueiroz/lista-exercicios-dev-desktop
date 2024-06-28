#include <windows.h>
#include "crud.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VENDAS 100

Venda vendas[MAX_VENDAS];

int contadorVendas = 0;

#define MAX_CLIENTES 100

Cliente clientes[MAX_CLIENTES];

int contadorClientes = 0;

HWND hMainWnd;

LRESULT CALLBACK MainProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CREATE: {
            CreateWindow("BUTTON", "Clientes", WS_VISIBLE | WS_CHILD, 20, 20, 150, 30, hwnd, (HMENU) ID_BTN_LIST_CLIENTES, NULL, NULL);
            CreateWindow("BUTTON", "Vendas", WS_VISIBLE | WS_CHILD, 180, 20, 150, 30, hwnd, (HMENU) ID_BTN_LISTAR_VENDAS, NULL, NULL);
        }
        break;

        case WM_COMMAND: {
            int wmId = LOWORD(wParam);
            switch (wmId) {
                case ID_BTN_LIST_CLIENTES: {
                    HWND hClientesWnd = CreateWindow("ClientesClass", "Clientes", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 700, 600, hwnd, NULL, NULL, NULL);
                    ShowWindow(hClientesWnd, SW_SHOW);
                    ShowWindow(hwnd, SW_HIDE);
                }
                break;

                case ID_BTN_LISTAR_VENDAS: {
                    HWND hVendasWnd = CreateWindow("VendasClass", "Vendas", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 700, 600, hwnd, NULL, NULL, NULL);
                    ShowWindow(hVendasWnd, SW_SHOW);
                    ShowWindow(hwnd, SW_HIDE);
                }
                break;
            }
        }
        break;

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    WNDCLASS wc = {0};
    wc.lpfnWndProc = MainProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = "MainClass";
    RegisterClass(&wc);

    wc.lpfnWndProc = ClientesProc;
    wc.lpszClassName = "ClientesClass";
    RegisterClass(&wc);

    wc.lpfnWndProc = VendasProc;
    wc.lpszClassName = "VendasClass";
    RegisterClass(&wc);

    hMainWnd = CreateWindow("MainClass", "CRUD Sistema", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 700, 600, NULL, NULL, hInstance, NULL);
    ShowWindow(hMainWnd, nCmdShow);

    MSG msg = {0};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}
// -------------------------------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------------------------------

void registrarVenda(int clienteId, char *tipoCombustivel, float quantidade, float preco) {
    if (contadorVendas < MAX_VENDAS) {
        vendas[contadorVendas].id = contadorVendas + 1;
        vendas[contadorVendas].clienteId = clienteId;
        strcpy(vendas[contadorVendas].tipoCombustivel, tipoCombustivel);
        vendas[contadorVendas].quantidade = quantidade;
        vendas[contadorVendas].preco = preco;
        vendas[contadorVendas].total = quantidade * preco;
        contadorVendas++;
    } else {
        printf("Limite de vendas atingido.\n");
    }
}

void listarVendas(HWND hList) {
    int i;
    SendMessage(hList, LB_RESETCONTENT, 0, 0);
    FILE *file = fopen("vendas.txt", "w");
    for (i = 0; i < contadorVendas; i++) {
        char buffer[200];
        sprintf(buffer, "ID: %d, ClienteID: %d, Tipo: %s, Quantidade: %.2f, Preço: %.2f, Total: %.2f",
                vendas[i].id, vendas[i].clienteId, vendas[i].tipoCombustivel, vendas[i].quantidade, vendas[i].preco, vendas[i].total);
        SendMessage(hList, LB_ADDSTRING, 0, (LPARAM) buffer);
        fprintf(file, "%s\n", buffer);
    }
    fclose(file);
}

HWND hClienteIdVenda, hTipoCombustivel, hQuantidade, hPreco, hListVendas;

LRESULT CALLBACK VendasProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CREATE: {
            CreateWindow("STATIC", "Cliente ID:", WS_VISIBLE | WS_CHILD, 20, 20, 100, 20, hwnd, NULL, NULL, NULL);
            hClienteIdVenda = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 120, 20, 200, 20, hwnd, NULL, NULL, NULL);

            CreateWindow("STATIC", "Tipo de Produto:", WS_VISIBLE | WS_CHILD, 20, 50, 150, 20, hwnd, NULL, NULL, NULL);
            hTipoCombustivel = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 180, 50, 200, 20, hwnd, NULL, NULL, NULL);

            CreateWindow("STATIC", "Quantidade:", WS_VISIBLE | WS_CHILD, 20, 80, 100, 20, hwnd, NULL, NULL, NULL);
            hQuantidade = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 120, 80, 200, 20, hwnd, NULL, NULL, NULL);

            CreateWindow("STATIC", "Preço:", WS_VISIBLE | WS_CHILD, 20, 110, 100, 20, hwnd, NULL, NULL, NULL);
            hPreco = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 120, 110, 200, 20, hwnd, NULL, NULL, NULL);

            CreateWindow("BUTTON", "Registrar Venda", WS_VISIBLE | WS_CHILD, 20, 150, 150, 30, hwnd, (HMENU) ID_BTN_REGISTRAR_VENDA, NULL, NULL);
            CreateWindow("BUTTON", "Listar Vendas", WS_VISIBLE | WS_CHILD, 180, 150, 150, 30, hwnd, (HMENU) ID_BTN_LISTAR_VENDAS, NULL, NULL);
            CreateWindow("BUTTON", "Voltar", WS_VISIBLE | WS_CHILD, 340, 150, 150, 30, hwnd, (HMENU) ID_BTN_BACK, NULL, NULL);

            hListVendas = CreateWindow("LISTBOX", "", WS_VISIBLE | WS_CHILD | WS_BORDER | WS_VSCROLL | LBS_NOTIFY, 20, 200, 450, 200, hwnd, NULL, NULL, NULL);
        }
        break;

        case WM_COMMAND: {
            int wmId = LOWORD(wParam);
            switch (wmId) {
                case ID_BTN_REGISTRAR_VENDA: {
                    char clienteIdStr[10];
                    char tipoCombustivel[50];
                    char quantidadeStr[20];
                    char precoStr[20];

                    GetWindowText(hClienteIdVenda, clienteIdStr, 10);
                    GetWindowText(hTipoCombustivel, tipoCombustivel, 50);
                    GetWindowText(hQuantidade, quantidadeStr, 20);
                    GetWindowText(hPreco, precoStr, 20);

                    int clienteId = atoi(clienteIdStr);
                    float quantidade = atof(quantidadeStr);
                    float preco = atof(precoStr);

                    registrarVenda(clienteId, tipoCombustivel, quantidade, preco);
                    MessageBox(hwnd, "Venda registrada com sucesso!", "Sucesso", MB_OK);
                }
                break;

                case ID_BTN_LISTAR_VENDAS: {
                    listarVendas(hListVendas);
                }
                break;

                case ID_BTN_BACK:
                    ShowWindow(hMainWnd, SW_SHOW);
                    ShowWindow(hwnd, SW_HIDE);
                    break;
            }
        }
        break;

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------

void adicionarCliente(char *nome) {
    if (contadorClientes < MAX_CLIENTES) {
        clientes[contadorClientes].id = contadorClientes + 1;
        strcpy(clientes[contadorClientes].nome, nome);
        contadorClientes++;
    } else {
        printf("Limite de clientes atingido.\n");
    }
}

void listarClientes(HWND hList) {
    int i;
    SendMessage(hList, LB_RESETCONTENT, 0, 0);
    FILE *file = fopen("clientes.txt", "w");
    for (i = 0; i < contadorClientes; i++) {
        char buffer[100];
        sprintf(buffer, "ID: %d, Nome: %s", clientes[i].id, clientes[i].nome);
        SendMessage(hList, LB_ADDSTRING, 0, (LPARAM) buffer);
        fprintf(file, "%s\n", buffer);
    }
    fclose(file);
}

void atualizarCliente(int id, char *nome) {
    int i;
    for (i = 0; i < contadorClientes; i++) {
        if (clientes[i].id == id) {
            strcpy(clientes[i].nome, nome);
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}

void excluirCliente(int id) {
    int i, j;
    for (i = 0; i < contadorClientes; i++) {
        if (clientes[i].id == id) {
            for (j = i; j < contadorClientes - 1; j++) {
                clientes[j] = clientes[j + 1];
            }
            contadorClientes--;
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}


HWND hNomeCliente, hIDCliente, hListClientes;

LRESULT CALLBACK ClientesProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CREATE: {
            CreateWindow("STATIC", "Nome:", WS_VISIBLE | WS_CHILD, 20, 20, 100, 20, hwnd, NULL, NULL, NULL);
            hNomeCliente = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 120, 20, 200, 20, hwnd, NULL, NULL, NULL);

            CreateWindow("STATIC", "ID (para atualizar/excluir):", WS_VISIBLE | WS_CHILD, 20, 50, 200, 20, hwnd, NULL, NULL, NULL);
            hIDCliente = CreateWindow("EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 220, 50, 100, 20, hwnd, NULL, NULL, NULL);

            CreateWindow("BUTTON", "Adicionar Cliente", WS_VISIBLE | WS_CHILD, 20, 80, 150, 30, hwnd, (HMENU) ID_BTN_ADD_CLIENTE, NULL, NULL);
            CreateWindow("BUTTON", "Atualizar Cliente", WS_VISIBLE | WS_CHILD, 180, 80, 150, 30, hwnd, (HMENU) ID_BTN_UPDATE_CLIENTE, NULL, NULL);
            CreateWindow("BUTTON", "Excluir Cliente", WS_VISIBLE | WS_CHILD, 340, 80, 150, 30, hwnd, (HMENU) ID_BTN_DELETE_CLIENTE, NULL, NULL);
            CreateWindow("BUTTON", "Listar Clientes", WS_VISIBLE | WS_CHILD, 20, 120, 150, 30, hwnd, (HMENU) ID_BTN_LIST_CLIENTES, NULL, NULL);
            CreateWindow("BUTTON", "Voltar", WS_VISIBLE | WS_CHILD, 200, 120, 150, 30, hwnd, (HMENU) ID_BTN_BACK, NULL, NULL);

            hListClientes = CreateWindow("LISTBOX", "", WS_VISIBLE | WS_CHILD | WS_BORDER | WS_VSCROLL | LBS_NOTIFY, 20, 160, 450, 200, hwnd, NULL, NULL, NULL);
        }
        break;

        case WM_COMMAND: {
            int wmId = LOWORD(wParam);
            switch (wmId) {
                case ID_BTN_ADD_CLIENTE: {
                    char nome[50];
                    GetWindowText(hNomeCliente, nome, 50);
                    adicionarCliente(nome);
                    MessageBox(hwnd, "Cliente adicionado com sucesso!", "Sucesso", MB_OK);
                }
                break;

                case ID_BTN_UPDATE_CLIENTE: {
                    char idStr[10];
                    char nome[50];
                    GetWindowText(hIDCliente, idStr, 10);
                    GetWindowText(hNomeCliente, nome, 50);

                    int id = atoi(idStr);
                    atualizarCliente(id, nome);
                    MessageBox(hwnd, "Cliente atualizado com sucesso!", "Sucesso", MB_OK);
                }
                break;

                case ID_BTN_DELETE_CLIENTE: {
                    char idStr[10];
                    GetWindowText(hIDCliente, idStr, 10);
                    int id = atoi(idStr);
                    excluirCliente(id);
                    MessageBox(hwnd, "Cliente excluído com sucesso!", "Sucesso", MB_OK);
                }
                break;

                case ID_BTN_LIST_CLIENTES: {
                    listarClientes(hListClientes);
                }
                break;

                case ID_BTN_BACK:
                    ShowWindow(hMainWnd, SW_SHOW);
                    ShowWindow(hwnd, SW_HIDE);
                    break;
            }
        }
        break;

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

