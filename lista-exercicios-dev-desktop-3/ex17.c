#include <stdlib.h>
#include <stdio.h>

int main () {
    float salarioHora, horaTrabalho;

    printf("Insira o total de horas trabalhadas no mes e o salario hora\n");
    scanf("%f %f", &horaTrabalho, &salarioHora);

    if (horaTrabalho > 160) {
        float horaExtra = (horaTrabalho - 160) * ((salarioHora /2) + salarioHora);
        horaExtra = horaExtra + salarioHora * (horaTrabalho - (horaTrabalho - 160));

        printf("%.2f", horaExtra);
    } else {
        horaTrabalho = horaTrabalho * salarioHora;

        printf("%.2f", horaTrabalho);
    }
}
