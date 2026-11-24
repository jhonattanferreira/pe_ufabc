#include <stdio.h>
#include <stdlib.h>
int repetiu(int *v, int i) {
    int j;
    for (j=0; j<i; j++) {
        if (v[j] == v[i]) { return 1; }
    }
    return 0;
}
int frequencia(int *v, int n, int x) {
    int j, freq=0;
    for (j=0; j<n; j++) {
        if (v[j] == x) { freq++; }
    }
    return freq;
}
int main()
{
    int i, n;
    scanf("%d", &n);
    int *v = malloc(sizeof(int) * n);
    for (i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    for (i=0; i<n; i++) {
        if (!repetiu(v, i)) {
            printf("%d %d\n", v[i], frequencia(v, n, v[i]));
        }
    }
    free(v);
    return 0;
}
