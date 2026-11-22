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

        int soma = 0;

        for (int j = i; j < n; j++) {
            soma += vetorA[j];

            if (soma > maior) {
                maior = soma;
            }
        }
    }

    printf("%d", maior);

    return 0;
}
