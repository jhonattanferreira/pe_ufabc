#include <stdio.h>

int main() {
    int n = 0;

    scanf("%d", &n);

    int vetorA[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    int maior = vetorA[0];

    for (int i = 1; i < n; i++) {
        if (vetorA[i] < maior) {
            maior = vetorA[i];
        }
    }

    printf("%d", maior);

    return 0;
}
