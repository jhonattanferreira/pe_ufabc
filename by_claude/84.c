#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int *vetor, int n, int x) {

    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {

        int meio = (inicio + fim) / 2;

        if (vetor[meio] == x) {
            return meio;
        } else if (vetor[meio] < x) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

int main() {

    int n = 0;
    int x = 0;
    int result = -1;

    scanf("%d", &n);

    int *vetor = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &x);

    result = buscaBinaria(vetor, n, x);

    printf("%d", result);

    free(vetor);

    return 0;
}
