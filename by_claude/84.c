#include <stdio.h>
#include <stdlib.h>
int buscaBinaria(int *v, int n, int x) {
    int inicio=0, fim=n-1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (v[meio] == x) { return meio; }
        else if (v[meio] < x) { inicio = meio + 1; }
        else { fim = meio - 1; }
    }
    return -1;
}
int main()
{
    int i, n, x;
    scanf("%d", &n);
    int *v = malloc(sizeof(int) * n);
    for (i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d", &x);
    printf("%d\n", buscaBinaria(v, n, x));
    free(v);
    return 0;
}
