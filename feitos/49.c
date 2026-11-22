#include <stdio.h>

int main() {

    int n = 0;
    int maior = 0;
    int result = 0;
    float decimal = 0;

    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vetor[i] > vetor[j]) {
                if (vetor[i] > maior) {
                    maior = vetor[i];
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        result = vetor[i] * 100 / maior;
        decimal = result / 100.0;
        printf("%.2f ", decimal);
    }

    return 0;
}
