#include <stdbool.h>
#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int q = 0;

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

    int n = a + b;
    int uniao[n];

    for (int i = 0; i < a; i++) {
        uniao[i] = vetorA[i];
    }

    for (int i = 0; i < b; i++) {
        uniao[a + i] = vetorB[i];
    }

    int sem_duplicados[n];

    for (int i = 0; i < n; i++) {

        bool tem_duplicado = false;

        for (int j = i - 1; j >= 0; j--) {
            if (uniao[j] == uniao[i]) {
                tem_duplicado = true;
            }
        }

        if (tem_duplicado == false) {
            sem_duplicados[q] = uniao[i];
            q++;
        }
    }

    for (int i = 0; i < q; i++) {
        printf("%d ", sem_duplicados[i]);
    }

    return 0;
}
