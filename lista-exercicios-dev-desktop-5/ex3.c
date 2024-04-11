#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int type;
    float value1 = 0, value2 = 0, area = 0;

    printf("Insira o valor de qual objeto voce deseja calcula a area:\n");
    printf("................ Area do circulo = 1 ....................\n");
    printf("................ Area de um retangulo = 2 ...............\n");
    printf("................ Area de um quadrado = 3 .................\n");
    scanf("%d", &type);

    switch (type) {
        case 1:
            printf("Insira o raio do circulo:\n");
            scanf("%f", &value1);
            area = 3.14 * (pow(value1, 2));
            printf("Esta e a area do circulo: %.1f\n", area);
            break;
        case 2:
            printf("Insira a base e a altura do retangulo:\n");
            scanf("%f %f", &value1, &value2);
            area = value1 * value2;
            printf("Esta e a area do retangulo: %.0f \n", area);
            break;
        case 3:
            printf("Insira o lado do quadrado:\n");
            scanf("%f", &value1);
            area = pow(value1, 2);
            printf("Esta e a area do quadrado: %.0f \n", area);
            break;
        default:
            printf("Nao e uma opcao valida");
            return main();
    }
}
