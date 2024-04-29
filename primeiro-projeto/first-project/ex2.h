void ex2 () {
    int i;
    for (i = 1990; i <= 2024; i++) {
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
            printf("%d\n", i);
        }
    }
}
