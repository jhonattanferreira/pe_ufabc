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

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
