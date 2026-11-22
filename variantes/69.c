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

    int cima = 0;
    int baixo = n - 1;
    int esquerda = 0;
    int direita = m - 1;

    while (cima <= baixo && esquerda <= direita) {

        int j = esquerda;

        while (j <= direita) {
            printf("%d ", matriz[cima][j]);
            j++;
        }
        cima++;

        for (int i = cima; i <= baixo; i++) {
            printf("%d ", matriz[i][direita]);
        }
        direita--;

        if (cima <= baixo) {
            for (int j = direita; j >= esquerda; j--) {
                printf("%d ", matriz[baixo][j]);
            }
            baixo--;
        }

        if (esquerda <= direita) {
            for (int i = baixo; i >= cima; i--) {
                printf("%d ", matriz[i][esquerda]);
            }
            esquerda++;
        }
    }

    return 0;
}
