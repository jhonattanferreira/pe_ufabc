#include <stdio.h>
#include <stdlib.h>
int maiorDaLinha(int *linha, int m) {
    int j, maior=linha[0];
    for (j=1; j<m; j++) {
        if (linha[j] > maior) { maior = linha[j]; }
    }
    return maior;
}
int main()
{
    int i, j, n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int **mat = malloc(sizeof(int *) * n);
    for (i=0; i<n; i++) {
        mat[i] = malloc(sizeof(int) * m);
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i=0; i<n; i++) {
        printf("%d\n", maiorDaLinha(mat[i], m));
    }
    for (i=0; i<n; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
