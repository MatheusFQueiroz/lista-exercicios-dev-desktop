#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

int main (void) {
    int age, month, day;

    printf("Escreva quantos anos voce tem: \n");
    scanf("%d", &age);

    printf("Escreva quantos meses voce tem: \n");
    scanf("%d", &month);

    printf("Escreva quantos dias voce tem: \n");
    scanf("%d", &day);

    int yearToDay = age * 365;
    int monthToDay = month * 30;

    int totalAgeInDays = yearToDay + monthToDay + day;

    printf("Esta e sua idade em dias: %d", totalAgeInDays);

    struct tm *data_hora_atual;

    time_t segundos;

    time(&segundos);

    data_hora_atual = localtime(&segundos);

    printf("\nData: %d/", data_hora_atual->tm_mday);
    printf("%d/",data_hora_atual->tm_mon+1); 
    printf("%d\n\n",data_hora_atual->tm_year+1900);
}
