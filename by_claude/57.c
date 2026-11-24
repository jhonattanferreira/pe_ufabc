#include <stdio.h>
#include <stdlib.h>
void imprimeTransposta(int **mat, int n, int m) {
    int i, j;
    for (j=0; j<m; j++) {
        for (i=0; i<n; i++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
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
    imprimeTransposta(mat, n, m);
    for (i=0; i<n; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
