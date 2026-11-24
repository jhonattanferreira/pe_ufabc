#include <stdio.h>
#include <stdlib.h>

int ehIdentidade(int **matriz, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && matriz[i][j] != 1) {
                return 0;
            }

            if (i != j && matriz[i][j] != 0) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {

    int n = 0;

    scanf("%d", &n);

    int **matriz = malloc(sizeof(int *) * n);

    for (int i = 0; i < n; i++) {
        matriz[i] = malloc(sizeof(int) * n);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (ehIdentidade(matriz, n) == 1) {
        printf("SIM");
    } else {
        printf("NAO");
    }

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
