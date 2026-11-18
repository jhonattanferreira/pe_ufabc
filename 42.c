#include <stdbool.h>
#include <stdio.h>

int main() {

    int n = 0;
    bool tem_duplicado = false;
    int quantidade = 0;

    scanf("%d", &n);

    int original[n];
    int sem_duplicados[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &original[i]);
    }

    for (int i = 0; i < n; i++) {

        tem_duplicado = false;

        for (int j = i - 1; j >= 0; j--) {

            if (original[j] == original[i]) {
                tem_duplicado = true;
            }
        }

        if (tem_duplicado == false) {
            sem_duplicados[quantidade] = original[i];
            quantidade++;
        }
    }

    for (int i = 0; i < quantidade; i++) {
        printf("%d ", sem_duplicados[i]);
    }

    return 0;
}
