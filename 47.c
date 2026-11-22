#include <stdio.h>

int main() {

    int n = 0;
    int quantidade = 0;

    scanf("%d", &n);

    int vetorA[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < n; i++) {
        if (vetorA[i] % 2 == 0) {
            quantidade++;
        }
    }

    printf("%d", quantidade);

    return 0;
}
