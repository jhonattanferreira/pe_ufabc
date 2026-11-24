#include <stdio.h>
#include <stdlib.h>

int **alocarMatriz(int n, int m) {

    int **matriz = malloc(sizeof(int *) * n);

    for (int i = 0; i < n; i++) {
        matriz[i] = malloc(sizeof(int) * m);
    }

    return matriz;
}

void liberarMatriz(int **matriz, int n) {

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);
}

int **rotacionar(int **matriz, int n, int m) {

    int **rotacionada = alocarMatriz(m, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rotacionada[j][n - 1 - i] = matriz[i][j];
        }
    }

    return rotacionada;
}

int main() {

    int n = 0;
    int m = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    int **matriz = alocarMatriz(n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int **rotacionada = rotacionar(matriz, n, m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", rotacionada[i][j]);
        }
        printf("\n");
    }

    liberarMatriz(matriz, n);
    liberarMatriz(rotacionada, m);

    return 0;
}
