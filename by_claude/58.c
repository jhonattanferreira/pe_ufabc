#include <stdio.h>

int main() {

    int n = 0;

    scanf("%d", &n);

    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", matriz[i][i]);
    }

    return 0;
}
