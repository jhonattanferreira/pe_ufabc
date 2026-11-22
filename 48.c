#include <stdio.h>

int main() {

    int n = 0;

    scanf("%d", &n);

    int vetorA[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    int maior = vetorA[0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vetorA[i] > vetorA[j]) {
                if (vetorA[i] > maior) {
                    maior = vetorA[i];
                }
            }
        }
    }

    int menor = vetorA[0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vetorA[i] < vetorA[j]) {
                if (vetorA[i] < menor) {
                    menor = vetorA[i];
                }
            }
        }
    }

    int result = maior - menor;

    printf("%d", result);

    return 0;
}
