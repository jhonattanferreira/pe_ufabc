#include <stdbool.h>
#include <stdio.h>

int main() {

    int n = 0;
    bool eh_identidade = true;

    scanf("%d", &n);

    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            int esperado = (i == j) ? 1 : 0;

            if (matriz[i][j] != esperado) {
                eh_identidade = false;
            }
        }
    }

    printf("%s", eh_identidade ? "SIM" : "NAO");

    return 0;
}
