#include <stdio.h>

int main() {

    int n = 0;
    int soma = 0;

    scanf("%d", &n);

    int vetorA[n];
    int vetorB[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < n; i++) {
        soma += vetorA[i];
        vetorB[i] = soma;
    }

    for (int *p = vetorB; p < vetorB + n; p++) {
        printf("%d ", *p);
    }

    return 0;
}
