#include <stdio.h>

void trocar(int *a, int *b);

int main() {

    int n = 0;

    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

void trocar(int *a, int *b) {

    int aux = *a;
    *a = *b;
    *b = aux;
}
