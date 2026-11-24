#include <stdio.h>
#include <stdlib.h>
int ehIdentidade(int **mat, int n) {
    int i, j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (i == j && mat[i][j] != 1) { return 0; }
            if (i != j && mat[i][j] != 0) { return 0; }
        }
    }
    return 1;
}
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int **mat = malloc(sizeof(int *) * n);
    for (i=0; i<n; i++) {
        mat[i] = malloc(sizeof(int) * n);
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    if (ehIdentidade(mat, n)) { printf("SIM\n"); }
    else { printf("NAO\n"); }
    for (i=0; i<n; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
