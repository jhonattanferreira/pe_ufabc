#include <stdbool.h>
#include <stdio.h>

int main() {

    int n = 0;

    while (scanf("%d", &n) != EOF) {

        int vetor[n];
        bool ordenado = true;

        for (int i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);
        }

        for (int i = 1; i < n; i++) {
            if (vetor[i] < vetor[i - 1]) {
                ordenado = false;
            }
        }

        if (ordenado == true) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}
