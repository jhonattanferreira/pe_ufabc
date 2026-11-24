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
int vizinhoPintado(int **pintado, int n, int m, int i, int j) {
    if (i > 0 && pintado[i-1][j]) { return 1; }
    if (i < n-1 && pintado[i+1][j]) { return 1; }
    if (j > 0 && pintado[i][j-1]) { return 1; }
    if (j < m-1 && pintado[i][j+1]) { return 1; }
    return 0;
}
void marcaRegiao(int **mat, int **pintado, int n, int m, int x, int y) {
    int i, j, mudou=1, antigo=mat[x][y];
    pintado[x][y] = 1;
    while (mudou) {
        mudou = 0;
        for (i=0; i<n; i++) {
            for (j=0; j<m; j++) {
                if (mat[i][j] == antigo && !pintado[i][j] && vizinhoPintado(pintado, n, m, i, j)) {
                    pintado[i][j] = 1; mudou = 1;
                }
            }
        }
    }
}
void floodFill(int **mat, int n, int m, int x, int y, int novo) {
    int i, j;
    int **pintado = alocaMatriz(n, m);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            pintado[i][j] = 0;
        }
    }
    marcaRegiao(mat, pintado, n, m, x, y);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            if (pintado[i][j]) { mat[i][j] = novo; }
        }
    }
    liberaMatriz(pintado, n);
}
int main()
{
    int i, j, n, m, x, y, novo;
    scanf("%d", &n);
    scanf("%d", &m);
    int **mat = alocaMatriz(n, m);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &novo);
    floodFill(mat, n, m, x, y, novo);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    liberaMatriz(mat, n);
    return 0;
}
