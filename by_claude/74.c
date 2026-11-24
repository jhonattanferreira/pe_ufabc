#include <stdio.h>
#include <stdlib.h>
int somaMatriz(int **mat, int n, int m) {
    int i, j, soma=0;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            soma = soma + mat[i][j];
        }
    }
    return soma;
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
    printf("%d\n", somaMatriz(mat, n, m));
    for (i=0; i<n; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
