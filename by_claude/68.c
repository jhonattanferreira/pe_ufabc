#include <stdio.h>
#include <stdlib.h>
int somaCaminho(int **mat, int n, int m) {
    int i=0, j=0, soma=mat[0][0];
    while (i < n-1 || j < m-1) {
        if (i == n-1) { j++; }
        else if (j == m-1) { i++; }
        else if (mat[i][j+1] >= mat[i+1][j]) { j++; }
        else { i++; }
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
    printf("%d\n", somaCaminho(mat, n, m));
    for (i=0; i<n; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
