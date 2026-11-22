#include <stdio.h>

int main() {

    int n = 0;
    int quantidade = 1;

    scanf("%d", &n);

    int vetorA[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 1; i < n; i++) {
        if (*(vetorA + i) == *(vetorA + i - 1)) {
            quantidade++;
        } else {
            printf("%d %d\n", *(vetorA + i - 1), quantidade);
            quantidade = 1;
        }
    }

    printf("%d %d\n", vetorA[n - 1], quantidade);

    return 0;
}
