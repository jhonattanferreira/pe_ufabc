#include <stdio.h>

int main() {

    int n = 0;

    scanf("%d", &n);

    int vetorA[n];
    int vetorB[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    int k = n - 1;

    for (int j = 0; j < n; j++) {
        vetorB[j] = vetorA[k];
        k--;
    }

    for (int x = 0; x < n; x++) {
        printf("%d ", vetorB[x]);
    }

    return 0;
}
