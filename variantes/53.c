#include <stdbool.h>
#include <stdio.h>

int main() {

    int n = 0;
    bool tem_duplicado = false;

    scanf("%d", &n);

    int vetorA[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < n; i++) {

        tem_duplicado = false;

        int j = i - 1;

        while (j >= 0) {
            if (vetorA[j] == vetorA[i]) {
                tem_duplicado = true;
            }
            j--;
        }

        if (!tem_duplicado) {

            int frequencia = 0;

            for (int j = 0; j < n; j++) {
                if (vetorA[i] == vetorA[j]) {
                    frequencia++;
                }
            }

            printf("%d %d\n", vetorA[i], frequencia);
        }
    }

    return 0;
}
