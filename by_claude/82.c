#include <stdio.h>
#include <stdlib.h>

void trocar(int *vetor, int i, int j) {

    int aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}

void bubbleSort(int *vetor, int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                trocar(vetor, j, j + 1);
            }
        }
    }
}

int main() {

    int n = 0;

    scanf("%d", &n);

    int *vetor = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}
