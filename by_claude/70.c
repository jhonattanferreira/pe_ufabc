#include <stdio.h>

void preencher(int n, int m, int matriz[n][m], int i, int j, int antigo, int novo) {

    if (i < 0 || i >= n || j < 0 || j >= m) {
        return;
    }

    if (matriz[i][j] != antigo) {
        return;
    }

    matriz[i][j] = novo;

    preencher(n, m, matriz, i - 1, j, antigo, novo);
    preencher(n, m, matriz, i + 1, j, antigo, novo);
    preencher(n, m, matriz, i, j - 1, antigo, novo);
    preencher(n, m, matriz, i, j + 1, antigo, novo);
}

int main() {

    int n = 0;
    int m = 0;
    int x = 0;
    int y = 0;
    int novo = 0;

    scanf("%d %d", &n, &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    scanf("%d %d", &x, &y);
    scanf("%d", &novo);

    int antigo = matriz[x][y];

    if (antigo != novo) {
        preencher(n, m, matriz, x, y, antigo, novo);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
