#include <stdbool.h>
#include <stdio.h>

bool temVizinhoPintado(int n, int m, int pintado[n][m], int i, int j);

int main() {

    int n = 0;
    int m = 0;
    int x = 0;
    int y = 0;
    int novo = 0;
    bool mudou = true;

    scanf("%d", &n);
    scanf("%d", &m);

    int matriz[n][m];
    int pintado[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
            pintado[i][j] = 0;
        }
    }

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &novo);

    int antigo = matriz[x][y];

    pintado[x][y] = 1;

    while (mudou == true) {

        mudou = false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (matriz[i][j] == antigo && pintado[i][j] == 0) {

                    if (temVizinhoPintado(n, m, pintado, i, j) == true) {
                        pintado[i][j] = 1;
                        mudou = true;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (pintado[i][j] == 1) {
                matriz[i][j] = novo;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

bool temVizinhoPintado(int n, int m, int pintado[n][m], int i, int j) {

    bool vizinho_pintado = false;

    if (i > 0 && pintado[i - 1][j] == 1) {
        vizinho_pintado = true;
    }

    if (i < n - 1 && pintado[i + 1][j] == 1) {
        vizinho_pintado = true;
    }

    if (j > 0 && pintado[i][j - 1] == 1) {
        vizinho_pintado = true;
    }

    if (j < m - 1 && pintado[i][j + 1] == 1) {
        vizinho_pintado = true;
    }

    return vizinho_pintado;
}
