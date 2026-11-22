#include <stdio.h>

int main() {

    int n = 0;
    int p = 0;
    int aux = 0;

    scanf("%d", &n);
    scanf("%d", &p);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    aux = vetor[p];
    vetor[p] = vetor[n - 1];
    vetor[n - 1] = aux;

    int pivo = vetor[n - 1];
    int posicao = 0;

    for (int i = 0; i < n - 1; i++) {
        if (vetor[i] <= pivo) {
            aux = vetor[i];
            vetor[i] = vetor[posicao];
            vetor[posicao] = aux;
            posicao++;
        }
    }

    aux = vetor[posicao];
    vetor[posicao] = vetor[n - 1];
    vetor[n - 1] = aux;

    printf("%d\n", posicao);

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
