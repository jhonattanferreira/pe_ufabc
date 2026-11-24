#include <stdio.h>
#include <stdlib.h>
int **alocaMatriz(int n, int m) {
    int i;
    int **mat = malloc(sizeof(int *) * n);
    for (i=0; i<n; i++) {
        mat[i] = malloc(sizeof(int) * m);
    }
    return mat;
}
void liberaMatriz(int **mat, int n) {
    int i;
    for (i=0; i<n; i++) {
        free(mat[i]);
    }
    free(mat);
}
int **rotaciona(int **mat, int n, int m) {
    int i, j;
    int **rot = alocaMatriz(m, n);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            rot[j][n-1-i] = mat[i][j];
        }
    }
    return rot;
}
int main()
{
    int i, j, n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int **mat = alocaMatriz(n, m);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int **rot = rotaciona(mat, n, m);
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%d ", rot[i][j]);
        }
        printf("\n");
    }
    liberaMatriz(mat, n);
    liberaMatriz(rot, m);
    return 0;
}
