float ex1 () {
    float H, h, S, s;
    printf("Insira a sua altura e a altura de sua sombra\n");
    scanf("%f %f", &h, &s);
    printf("Insira a altura da sombra do predio\n");
    scanf("%f", &S);
    H = (h * S) / s;
    if (H >= 2.3) {
        printf("Altura valida\n");
    } else {
        printf("Altura invalida\n");
    }
    printf("A altura do predio e: %.1f\n\n", H);
}
