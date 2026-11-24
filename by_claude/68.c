#include <stdio.h>
#include <stdlib.h>

int somaCaminho(int **matriz, int n, int m) {

    int i = 0;
    int j = 0;
    int soma = matriz[0][0];

    while (i < n - 1 || j < m - 1) {

        if (i == n - 1) {
            j++;
        } else if (j == m - 1) {
            i++;
        } else if (matriz[i][j + 1] >= matriz[i + 1][j]) {
            j++;
        } else {
            i++;
        }

        soma += matriz[i][j];
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

    result = somaCaminho(matriz, n, m);

    printf("%d", result);

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
