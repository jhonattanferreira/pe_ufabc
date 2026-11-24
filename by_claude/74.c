#include <stdio.h>
#include <stdlib.h>

int somaMatriz(int **matriz, int n, int m) {

    int soma = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int main() {

    int n = 0;
    int m = 0;
    int result = 0;

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

    result = somaMatriz(matriz, n, m);

    printf("%d", result);

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
