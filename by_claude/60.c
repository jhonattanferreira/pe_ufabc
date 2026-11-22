#include <stdbool.h>
#include <stdio.h>

int main() {

    int n = 0;
    bool eh_simetrica = true;

    scanf("%d", &n);

    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                eh_simetrica = false;
            }
        }
    }

    if (eh_simetrica == true) {
        printf("SIM");
    } else {
        printf("NAO");
    }

    return 0;
}
