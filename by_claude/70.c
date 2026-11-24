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

int vizinhoPintado(int **pintado, int n, int m, int i, int j) {

    if (i > 0 && pintado[i - 1][j] == 1) {
        return 1;
    }

    if (i < n - 1 && pintado[i + 1][j] == 1) {
        return 1;
    }

    if (j > 0 && pintado[i][j - 1] == 1) {
        return 1;
    }

    if (j < m - 1 && pintado[i][j + 1] == 1) {
        return 1;
    }

    return 0;
}

void marcarRegiao(int **matriz, int **pintado, int n, int m, int x, int y) {

    int antigo = matriz[x][y];
    int mudou = 1;

    pintado[x][y] = 1;

    while (mudou == 1) {

        mudou = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matriz[i][j] == antigo && pintado[i][j] == 0 && vizinhoPintado(pintado, n, m, i, j) == 1) {
                    pintado[i][j] = 1;
                    mudou = 1;
                }
            }
        }
    }
}

void floodFill(int **matriz, int n, int m, int x, int y, int novo) {

    int **pintado = alocarMatriz(n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            pintado[i][j] = 0;
        }
    }

    marcarRegiao(matriz, pintado, n, m, x, y);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (pintado[i][j] == 1) {
                matriz[i][j] = novo;
            }
        }
    }

    liberarMatriz(pintado, n);
}

int main() {

    int n = 0;
    int m = 0;
    int x = 0;
    int y = 0;
    int novo = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    int **matriz = alocarMatriz(n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &novo);

    floodFill(matriz, n, m, x, y, novo);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    liberarMatriz(matriz, n);

    return 0;
}
