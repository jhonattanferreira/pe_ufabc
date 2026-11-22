#include <stdio.h>

int main() {

    int n = 0;
    int m = 0;
    int soma = 0;

    scanf("%d %d", &n, &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            soma += matriz[i][j];
        }
    }

    printf("%d", soma);

    return 0;
}
