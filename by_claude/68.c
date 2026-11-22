#include <stdio.h>

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

    int i = 0;
    int j = 0;
    int soma = matriz[0][0];

    while (i < n - 1 || j < m - 1) {

        if (i < n - 1 && j < m - 1) {
            if (matriz[i][j + 1] >= matriz[i + 1][j]) {
                j++;
            } else {
                i++;
            }
        } else if (j < m - 1) {
            j++;
        } else {
            i++;
        }

        soma += matriz[i][j];
    }

    printf("%d", soma);

    return 0;
}
