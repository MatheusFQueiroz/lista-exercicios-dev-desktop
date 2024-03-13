#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main () {
    float carPrice;

    printf("Insira o custo de fabrica do veiculo: (ex: 28000, 40000)\n");
    scanf("%f", &carPrice);

    float carPriceSellerTax = carPrice * 0.28;
    float carPriceTax = carPrice * 0.45;
    float totalCarPrice = carPrice + carPriceSellerTax + carPriceTax;

    printf("Este e o custo final do carro novo: %.2f \n", totalCarPrice);

}
