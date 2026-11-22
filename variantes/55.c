#include <stdio.h>

void trocar(int *a, int *b);

int main() {

    int n = 0;
    int p = 0;

    scanf("%d", &n);
    scanf("%d", &p);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    trocar(&vetor[p], &vetor[n - 1]);

    int pivo = vetor[n - 1];
    int posicao = 0;

    for (int i = 0; i < n - 1; i++) {
        if (vetor[i] <= pivo) {
            trocar(&vetor[i], &vetor[posicao]);
            posicao++;
        }
    }

    trocar(&vetor[posicao], &vetor[n - 1]);

    printf("%d\n", posicao);

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
