#include <stdio.h>

int main() {

    int n = 0;
    int x = 0;
    int result = -1;

    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &x);

    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {

        int meio = (inicio + fim) / 2;

        if (vetor[meio] == x) {
            result = meio;
            break;
        } else if (vetor[meio] < x) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    printf("%d", result);

    return 0;
}
