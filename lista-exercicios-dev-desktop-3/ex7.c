#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main () {
    char nome[20], sexo;
    int idade;

    printf("Insira seu nome, sexo e idade: (ex: Matheus M 19)\n");
    scanf("%s %c %d", &nome, &sexo, &idade);

    if (tolower(sexo) == 'f' && idade < 25) {
        printf("%s: Aceita\n", nome);
    } else {
        printf("%s: Nao aceita\n", nome);
    }
}
