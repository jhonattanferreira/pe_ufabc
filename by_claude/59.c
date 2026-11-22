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
            if (i == j) {
                if (matriz[i][j] != 1) {
                    eh_identidade = false;
                }
            } else {
                if (matriz[i][j] != 0) {
                    eh_identidade = false;
                }
            }
        }
    }

    if (eh_identidade == true) {
        printf("SIM");
    } else {
        printf("NAO");
    }

    return 0;
}
