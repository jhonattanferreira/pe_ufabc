#include <stdio.h>

int main() {

    int n = 0;
    int aux = 0;
    int aux2 = 0;
    int quantidade = 0;
    int result = 0;

    scanf("%d", &n);

    int vetorA[n];
    int moda[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < n; i++) {

        int frequencia = 0;

        for (int j = 0; j < n; j++) {

            if (vetorA[i] == vetorA[j]) {
                frequencia++;
            }
        }

        if (frequencia >= aux) {

            if (frequencia > aux) {
                quantidade = 0;
                aux = frequencia;
            }

            aux2 = 0;

            for (int k = 0; k < quantidade; k++) {
                if (moda[k] == vetorA[i]) {
                    aux2 = 1;
                    break;
                }
            }

            if (aux2 == 0) {
                moda[quantidade] = vetorA[i];
                quantidade++;
            }
        }
    }

    if (quantidade == 1) {
        result = moda[0];
    } else {

        for (int i = 0; i < quantidade; i++) {
            for (int j = 0; j < quantidade; j++) {
                if (moda[i] < moda[j]) {
                    result = moda[i];
                }
            }
        }
    }

    printf("%d", result);

    return 0;
}
