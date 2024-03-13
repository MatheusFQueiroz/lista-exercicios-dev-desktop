#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

void main () {
    struct tm data_nascimento = {0};
    printf("Insira sua data de nascimento (dd mm aaaa): \n");
    scanf("%d %d %d", &data_nascimento.tm_mday, &data_nascimento.tm_mon, &data_nascimento.tm_year);

    time_t rn;
    struct tm *info_tempo;
    time(&rn);

    data_nascimento.tm_mon = data_nascimento.tm_mon - 1;
    data_nascimento.tm_year = data_nascimento.tm_year - 1900;

    info_tempo = localtime(&rn);

    time_t t_nascimento = mktime(&data_nascimento);
    time_t t_atual = mktime(&*info_tempo);

    double diferenca = difftime(t_atual, t_nascimento);

    diferenca = diferenca / (60 * 60 * 24);

    printf("Voce viveu %.0f dias\n", diferenca);

    system("pause");
}
