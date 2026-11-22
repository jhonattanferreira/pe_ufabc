#include <stdio.h>

int main() {

    int n = 0;
    int shift = 0;

    scanf("%d", &n);

    int vetor[n];
    int ordenado[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &shift);

    for (int i = 0; i < n; i++) {
        int j = i + shift;

        if (j >= n) {
            j -= n;
        }

        ordenado[j] = vetor[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", ordenado[i]);
    }

    return 0;
}
