#include <stdio.h>
#include <stdlib.h>

int main() {
    int numHabitantes, codigoConsumidor;
    float valorKwh, consumo, maiorConsumo = 0, menorConsumo = 0, somaConsumo = 0;
    float consumoResidencial = 0, consumoComercial = 0, consumoIndustrial = 0;
    int contador = 0;

    printf("Digite o numero de habitantes: ");
    scanf("%d", &numHabitantes);
    printf("Digite o valor do kWh: ");
    scanf("%f", &valorKwh);

    while(contador < numHabitantes) {
        printf("Digite o consumo do mes (em kWh) do habitante %d: ", contador + 1);
        scanf("%f", &consumo);
        printf("Digite o codigo do consumidor (1-Residencial, 2-Comercial, 3-Industrial): ");
        scanf("%d", &codigoConsumidor);

        if(contador == 0 || consumo > maiorConsumo) {
            maiorConsumo = consumo;
        }
        if(contador == 0 || consumo < menorConsumo) {
            menorConsumo = consumo;
        }

        somaConsumo += consumo;
        if(codigoConsumidor == 1) {
            consumoResidencial += consumo;
        } else if(codigoConsumidor == 2) {
            consumoComercial += consumo;
        } else if(codigoConsumidor == 3) {
            consumoIndustrial += consumo;
        } else {
            printf("Codigo de consumidor invalido.\n");
        }

        contador++;
    }

    printf("Maior consumo: %.2f kWh\n", maiorConsumo);
    printf("Menor consumo: %.2f kWh\n", menorConsumo);
    printf("Media do consumo: %.2f kWh\n", somaConsumo / numHabitantes);
    printf("Total do consumo residencial: %.2f kWh\n", consumoResidencial);
    printf("Total do consumo comercial: %.2f kWh\n", consumoComercial);
    printf("Total do consumo industrial: %.2f kWh\n", consumoIndustrial);
}
