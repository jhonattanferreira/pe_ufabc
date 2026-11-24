#include <stdio.h>
#include <stdlib.h>
int ehSimetrica(int **mat, int n) {
    int i, j;
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (mat[i][j] != mat[j][i]) { return 0; }
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
    if (ehSimetrica(mat, n)) { printf("SIM\n"); }
    else { printf("NAO\n"); }
    for (i=0; i<n; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
