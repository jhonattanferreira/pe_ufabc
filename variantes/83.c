#include <stdio.h>

#define TROCA(a, b) { int t = a; a = b; b = t; }

int main() {

    int n = 0;
    float mediana = 0;

    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                TROCA(vetor[j], vetor[j + 1]);
            }
        }
    }

    mediana = (n % 2 == 1) ? vetor[n / 2] : (vetor[n / 2 - 1] + vetor[n / 2]) / 2.0;

    printf("%.2f", mediana);

    return 0;
}
