#include <stdio.h>
#include <stdlib.h>

int ehSimetrica(int **matriz, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] != matriz[j][i]) {
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

    if (ehSimetrica(matriz, n) == 1) {
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
