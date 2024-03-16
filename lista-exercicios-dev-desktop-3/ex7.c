#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main () {
    char nome[40], sexo;
    int idade;

    printf("Insira seu nome, sexo e idade: (ex: Matheus M 19)\n");
    gets(nome);
    scanf("%c", &sexo);
    scanf("%d", &idade);

    if (tolower(sexo) == 'f' && idade < 25) {
        printf("%s: Aceita\n", nome);
    } else {
        printf("%s: Nao aceita\n", nome);
    }
}
