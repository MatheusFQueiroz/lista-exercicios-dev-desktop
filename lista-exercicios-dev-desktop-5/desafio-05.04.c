#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int type, num, x = 0, qtdBolas = 0, totalBolas = 0;

    printf("Insira quantos lados possui o triangulo:\n");
    printf("............ tres lados = 1 ............\n");
    printf("........... quatro lados = 2 ...........\n");
    scanf("%d", &type);

    switch (type) {
        case 1:
            printf("Insira a quantidade de bolas este tetraedro possui de lado na base:\n");
            scanf("%d", &num);
            x = num;
            while(x >= 1) { // total bolas na base
                int j = 0;
                while(j < x) {
                    qtdBolas++;
                    j++;
                }
                x--;
            }
            totalBolas = qtdBolas; // salvar a quantidade total de bolas na base
            while (num >= 1) { // calcular a quantidade de bolas da piramide
                qtdBolas = qtdBolas - num;
                totalBolas = totalBolas + qtdBolas;
                num--;
            }
            printf("Este e o total de bolas do tetraedro: %d", totalBolas);
            break;
        case 2:
            printf("Insira a quantidade de bolas este triangulo de base quadrada possui de lado na base:\n");
            scanf("%d", &num);
            while (num >= 1) { // calculo da quantidade de bolas em cada andar
                qtdBolas = pow(num, 2);
                totalBolas = totalBolas + qtdBolas;
                printf("%d\n", totalBolas);
                num--;
            }
            printf("Este e o total de bolas do tetraedro: %d", totalBolas);
            break;
    };
}
