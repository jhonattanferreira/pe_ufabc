#include <stdio.h>
#include <stdlib.h>

int maiorDaLinha(int *linha, int m) {

    int maior = linha[0];

    for (int j = 1; j < m; j++) {
        if (linha[j] > maior) {
            maior = linha[j];
        }
    }

    return maior;
}

int main() {

    int n = 0;
    int m = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    int **matriz = malloc(sizeof(int *) * n);

    for (int i = 0; i < n; i++) {
        matriz[i] = malloc(sizeof(int) * m);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", maiorDaLinha(matriz[i], m));
    }

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
