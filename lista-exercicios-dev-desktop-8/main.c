#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // 1. Registrar a classe da janela
    const char CLASS_NAME[] = "Home";

    WNDCLASS wc = {0};
    wc.lpfnWndProc   = WindowProc;
    wc.hInstance     = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    // 2. Criar a janela
    HWND hwnd = CreateWindowEx(
        0,                              // Estilo opcional da janela
        CLASS_NAME,                     // Nome da classe da janela
        "Sample Window",                // Texto da janela
        WS_OVERLAPPEDWINDOW,            // Estilo da janela

        // Tamanho e posição
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

        NULL,       // Janela mãe
        NULL,       // Menu
        hInstance,  // Instância da aplicação
        NULL        // Dados adicionais de criação
    );

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

    // 3. Loop de mensagens
    MSG msg = {0};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
