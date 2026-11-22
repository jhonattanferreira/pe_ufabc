#include <stdbool.h>
#include <stdio.h>

int main() {

    int n = 0;

    while (scanf("%d", &n) != EOF) {

        int vetor[n];
        bool crescente = true;
        bool decrescente = true;

        for (int i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);
        }

        for (int i = 1; i < n; i++) {
            if (vetor[i] < vetor[i - 1]) {
                crescente = false;
            }

            if (vetor[i] > vetor[i - 1]) {
                decrescente = false;
            }
        }

        if (crescente == true || decrescente == true) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}
