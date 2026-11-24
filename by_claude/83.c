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

float calcularMediana(int *vetor, int n) {

    if (n % 2 == 1) {
        return vetor[n / 2];
    }

    return (vetor[n / 2 - 1] + vetor[n / 2]) / 2.0;
}

int main() {

    int n = 0;
    float mediana = 0;

    scanf("%d", &n);

    int *vetor = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, n);

    mediana = calcularMediana(vetor, n);

    printf("%.2f", mediana);

    free(vetor);

    return 0;
}
