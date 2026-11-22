#include <stdio.h>

int main() {

    int x = 0;
    int y = 0;

    scanf("%d", &x);

    int vetorA[x];

    for (int i = 0; i < x; i++) {
        scanf("%d", &vetorA[i]);
    }

    scanf("%d", &y);

    int quantidade = 0;
    int vetorB[y];
    int numeros_repetidos[x];

    for (int i = 0; i < y; i++) {
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (vetorA[i] == vetorB[j]) {
                numeros_repetidos[quantidade] = vetorA[i];
                quantidade++;
                break;
            }
        }
    }

    for (int i = 0; i < quantidade; i++) {
        for (int j = 0; j < quantidade; j++) {
            if (numeros_repetidos[i] == numeros_repetidos[j]) {
                if (j == i) {
                    printf("%d ", numeros_repetidos[i]);
                }
                break;
            }
        }
    }

    return 0;
}
