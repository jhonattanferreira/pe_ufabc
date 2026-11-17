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

    for (int j = 0; j < n; j++) {
        soma += vetorA[j];
    }

    printf("%d", soma);

    return 0;
}
