#include <stdlib.h>
#include <stdio.h>

int main () {
    int minLimit, maxLimit, safeMinLimit;

    printf("Insira o limite inferior e superior do intervalo\n");
    scanf("%d %d", &minLimit, &maxLimit);
    safeMinLimit = minLimit;

    for (minLimit; minLimit <= maxLimit; minLimit++) {
        if (minLimit == maxLimit) {
            printf("%d}", minLimit);
        } else if (minLimit == safeMinLimit) {
            printf("{%d, ", minLimit);
        } else {
            printf("%d, ", minLimit);
        }
    }
}
