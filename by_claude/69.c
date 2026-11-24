#include <stdio.h>
#include <stdlib.h>

void imprimirLinha(int **matriz, int i, int inicio, int fim) {

    if (inicio <= fim) {
        for (int j = inicio; j <= fim; j++) {
            printf("%d ", matriz[i][j]);
        }
    } else {
        for (int j = inicio; j >= fim; j--) {
            printf("%d ", matriz[i][j]);
        }
    }
}

void imprimirColuna(int **matriz, int j, int inicio, int fim) {

    if (inicio <= fim) {
        for (int i = inicio; i <= fim; i++) {
            printf("%d ", matriz[i][j]);
        }
    } else {
        for (int i = inicio; i >= fim; i--) {
            printf("%d ", matriz[i][j]);
        }
    }
}

void imprimirEspiral(int **matriz, int n, int m) {

    int cima = 0;
    int baixo = n - 1;
    int esquerda = 0;
    int direita = m - 1;

    while (cima <= baixo && esquerda <= direita) {

        imprimirLinha(matriz, cima, esquerda, direita);
        cima++;

        if (cima <= baixo) {
            imprimirColuna(matriz, direita, cima, baixo);
        }
        direita--;

        if (cima <= baixo && esquerda <= direita) {
            imprimirLinha(matriz, baixo, direita, esquerda);
        }
        baixo--;

        if (esquerda <= direita && cima <= baixo) {
            imprimirColuna(matriz, esquerda, baixo, cima);
        }
        esquerda++;
    }
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

    imprimirEspiral(matriz, n, m);

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
