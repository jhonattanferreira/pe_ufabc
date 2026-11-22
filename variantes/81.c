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

        int i = 1;

        while (i < n) {
            if (vetor[i] < vetor[i - 1]) {
                crescente = false;
            }

            if (vetor[i] > vetor[i - 1]) {
                decrescente = false;
            }
            i++;
        }

        printf("%s\n", (crescente || decrescente) ? "S" : "N");
    }

    return 0;
}
