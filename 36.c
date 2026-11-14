#include <stdio.h>

int main() {

    int n = 0;

    scanf("%d", &n);

    int ordenados[n];
    int reversos[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &ordenados[i]);
    }

    // 33 11 22

    int x = 0;
    int y = n - 1;

    for (int j = y; j > 0; j--) {
        reversos[x] = ordenados[j];
        x++;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", reversos[i]);
    }

    return 0;
}
