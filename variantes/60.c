#include <stdbool.h>
#include <stdio.h>

bool ehSimetrica(int n, int matriz[n][n]);

int main() {

    int n = 0;

    scanf("%d", &n);

    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (ehSimetrica(n, matriz) == true) {
        printf("SIM");
    } else {
        printf("NAO");
    }

    return 0;
}

bool ehSimetrica(int n, int matriz[n][n]) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return false;
            }
        }
    }

    return true;
}
