#include <stdio.h>

int main() {

    int n = 0;
    int aux = 0;
    float mediana = 0;

    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    if (n % 2 == 1) {
        mediana = vetor[n / 2];
    } else {
        mediana = (vetor[n / 2 - 1] + vetor[n / 2]) / 2.0;
    }

    printf("%.2f", mediana);

    return 0;
}
