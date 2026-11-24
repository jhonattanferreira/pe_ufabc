#include <stdio.h>
#include <stdlib.h>
void troca(int *v, int i, int j) {
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}
void bubbleSort(int *v, int n) {
    int i, j;
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-1-i; j++) {
            if (v[j] > v[j+1]) { troca(v, j, j+1); }
        }
    }
}
float mediana(int *v, int n) {
    if (n % 2 == 1) { return v[n/2]; }
    return (v[n/2-1] + v[n/2]) / 2.0;
}
int main()
{
    int i, n;
    scanf("%d", &n);
    int *v = malloc(sizeof(int) * n);
    for (i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    bubbleSort(v, n);
    printf("%.2f\n", mediana(v, n));
    free(v);
    return 0;
}
