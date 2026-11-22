#include <stdio.h>

int main() {

    int n = 0;
    int m = 0;

    scanf("%d %d", &n, &m);

    int matriz[n][m];
    int rotacionada[m][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rotacionada[j][n - 1 - i] = matriz[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", rotacionada[i][j]);
        }
        printf("\n");
    }

    return 0;
}
