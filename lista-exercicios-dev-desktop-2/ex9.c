#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {
    float capital, taxa, periodo;

    printf("Insira os dados do montante do emprestimo, a taxa (ex: 0.08 para 8%% de juros) e o periodo\n");
    scanf("%f %f %f", &capital, &taxa, &periodo);

    float juros = capital * ((taxa * periodo) + 1);

    printf("Este e o valor total a ser pago no emprestimo: %.1f\n", juros);

}
