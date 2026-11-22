#include <stdio.h>

int somaColuna(int n, int m, int matriz[n][m], int j);

int main() {

    int n = 0;
    int m = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < m; j++) {
        printf("%d\n", somaColuna(n, m, matriz, j));
    }

    return 0;
}

int somaColuna(int n, int m, int matriz[n][m], int j) {

    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += matriz[i][j];
    }

    return soma;
}
