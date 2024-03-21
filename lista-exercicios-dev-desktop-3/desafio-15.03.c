#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int ano;
    printf("Insira o ano que voce deseja saber a data da pascoa:\n");
    scanf("%d", &ano);

    int numAureo = (ano % 19) + 1;
    int calcSeculo = (ano / 100) + 1;
    int calcCorrecaoX = (3 * calcSeculo / 4) - 12;
    int calcCorrecaoZ = ((8 * calcSeculo + 5) / 25) - 5;
    int calcEpacta = (11 * numAureo + 20 + calcCorrecaoZ - calcCorrecaoX) % 30;
    if (calcEpacta == 25 && numAureo > 11 || calcEpacta == 24) {
        calcEpacta = calcEpacta + 1;
    }
    int calcLuaCheia = 44 - calcEpacta;
    if (calcLuaCheia < 21) {
        calcLuaCheia = calcLuaCheia + 30;
    }
    int calcDomingo = (5 * ano / 4) - (calcCorrecaoX + 10);
    calcLuaCheia = (calcLuaCheia + 7) - ((calcDomingo + calcLuaCheia) % 7);

    if (calcLuaCheia > 31) {
        int dataPascoa = calcLuaCheia - 31;
        printf("%d de abril de %d",  dataPascoa, ano);
    } else {
        printf("%d de marco de %d", calcLuaCheia, ano);
    }
}
