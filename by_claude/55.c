#include <stdio.h>
#include <stdlib.h>

void trocar(int *vetor, int i, int j) {

    int aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}

int particionar(int *vetor, int n, int p) {

    int posicao = 0;

    trocar(vetor, p, n - 1);

    int pivo = vetor[n - 1];

    for (int i = 0; i < n - 1; i++) {
        if (vetor[i] <= pivo) {
            trocar(vetor, i, posicao);
            posicao++;
        }
    }

    trocar(vetor, posicao, n - 1);

    return posicao;
}

int main() {

    int n = 0;
    int p = 0;
    int result = 0;

    scanf("%d", &n);
    scanf("%d", &p);

    int *vetor = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    result = particionar(vetor, n, p);

    printf("%d\n", result);

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}
