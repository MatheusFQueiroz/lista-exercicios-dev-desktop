#include <stdlib.h>
#include <stdio.h>

int main () {
    int qntH = 0, qntM = 0, qnt = 0;
    float mAltura, hAltura;
    while (qnt <= 10) {
        char sexo;
        int altura;
        printf("Insira o sexo e altura\n");
        scanf(" %c %d", &sexo, &altura);
        if (tolower(sexo) == 'm'){
            mAltura = mAltura + altura;
            qntM++;
        } else {
            hAltura = hAltura + altura;
            qntH++;
        };
        qnt++;
    }
    hAltura = hAltura / qntH;
    mAltura = mAltura / qntM;

    printf("esta e a media de altura das mulheres: %.1f\n", mAltura);
    printf("esta e a media de altura dos homens: %.1f\n", hAltura);
}
