#include <stdio.h>
#include <stdlib.h>
void imprimeLinha(int **mat, int i, int ini, int fim) {
    int j;
    if (ini <= fim) {
        for (j=ini; j<=fim; j++) { printf("%d ", mat[i][j]); }
    } else {
        for (j=ini; j>=fim; j--) { printf("%d ", mat[i][j]); }
    }
}
void imprimeColuna(int **mat, int j, int ini, int fim) {
    int i;
    if (ini <= fim) {
        for (i=ini; i<=fim; i++) { printf("%d ", mat[i][j]); }
    } else {
        for (i=ini; i>=fim; i--) { printf("%d ", mat[i][j]); }
    }
}
void imprimeEspiral(int **mat, int n, int m) {
    int cima=0, baixo=n-1, esquerda=0, direita=m-1;
    while (cima <= baixo && esquerda <= direita) {
        imprimeLinha(mat, cima, esquerda, direita); cima++;
        if (cima <= baixo) { imprimeColuna(mat, direita, cima, baixo); }
        direita--;
        if (cima <= baixo && esquerda <= direita) { imprimeLinha(mat, baixo, direita, esquerda); }
        baixo--;
        if (esquerda <= direita && cima <= baixo) { imprimeColuna(mat, esquerda, baixo, cima); }
        esquerda++;
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
    imprimeEspiral(mat, n, m);
    printf("\n");
    for (i=0; i<n; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
