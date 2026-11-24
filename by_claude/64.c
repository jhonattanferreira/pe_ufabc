#include <stdio.h>
#include <stdlib.h>
int somaColuna(int **mat, int n, int j) {
    int i, soma=0;
    for (i=0; i<n; i++) {
        soma = soma + mat[i][j];
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
    for (j=0; j<m; j++) {
        printf("%d\n", somaColuna(mat, n, j));
    }
    for (i=0; i<n; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
