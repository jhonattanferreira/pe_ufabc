#include <stdio.h>

#define MAIOR_QUE(a, b) ((a) > (b))

int main() {

    int n = 0;
    int m = 0;
    int x = 0;
    int quantidade = 0;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &x);

    int matriz[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (MAIOR_QUE(matriz[i][j], x)) {
                quantidade++;
            }
        }
    }

    printf("%d", quantidade);

    return 0;
}
