#include <stdio.h>
#include <stdlib.h>
void troca(int *v, int i, int j) {
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}
int particiona(int *v, int n, int p) {
    int i, posicao=0;
    troca(v, p, n-1);
    for (i=0; i<n-1; i++) {
        if (v[i] <= v[n-1]) {
            troca(v, i, posicao); posicao++;
        }
    }
    troca(v, posicao, n-1);
    return posicao;
}
int main()
{
    int i, n, p;
    scanf("%d", &n);
    scanf("%d", &p);
    int *v = malloc(sizeof(int) * n);
    for (i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    printf("%d\n", particiona(v, n, p));
    for (i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    free(v);
    return 0;
}
