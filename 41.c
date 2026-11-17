#include <stdio.h>

int buscar(int n, int busca, int vetorA[]) {

    for (int i = 0; i < n; i++) {
        if (vetorA[i] == busca) {
            return 1;
        }
    }

    return 0;
}

int main() {

    int n = 0;
    int busca = 0;
    int result = 0;
    int i = 0;

    scanf("%d", &n);

    int vetorA[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    scanf("%d", &busca);

    result = buscar(n, busca, vetorA);

    if (result == 1) {
        printf("sim");
    } else if (result == 0) {
        printf("nao");
    }

    return 0;
}
