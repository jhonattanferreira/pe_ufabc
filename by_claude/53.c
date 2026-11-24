#include <stdio.h>
#include <stdlib.h>

int temDuplicado(int *vetorA, int i) {

    for (int j = i - 1; j >= 0; j--) {
        if (vetorA[j] == vetorA[i]) {
            return 1;
        }
    }

    return 0;
}

int frequencia(int *vetorA, int n, int x) {

    int quantidade = 0;

    for (int j = 0; j < n; j++) {
        if (vetorA[j] == x) {
            quantidade++;
        }
    }

    return quantidade;
}

int main() {

    int n = 0;

    scanf("%d", &n);

    int *vetorA = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < n; i++) {
        if (temDuplicado(vetorA, i) == 0) {
            printf("%d %d\n", vetorA[i], frequencia(vetorA, n, vetorA[i]));
        }
    }

    free(vetorA);

    return 0;
}
