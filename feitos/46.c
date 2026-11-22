#include <stdbool.h>
#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int quantidade = 0;

    scanf("%d", &a);

    int vetorA[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &vetorA[i]);
    }

    scanf("%d", &b);

    int vetorB[b];

    for (int i = 0; i < b; i++) {
        scanf("%d", &vetorB[i]);
    }

    int result[a];

    for (int i = 0; i < a; i++) {

        int nao_tem = true;

        for (int j = 0; j < b; j++) {

            if (vetorA[i] == vetorB[j]) {
                nao_tem = false;
            }
        }

        if (nao_tem == true) {
            result[quantidade] = vetorA[i];
            quantidade++;
        }
    }

    for (int i = 0; i < quantidade; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
