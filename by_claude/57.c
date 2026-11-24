#include <stdio.h>
#include <stdlib.h>

void imprimirTransposta(int **matriz, int n, int m) {

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
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

    imprimirTransposta(matriz, n, m);

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
