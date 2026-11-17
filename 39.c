#include <stdio.h>

int main() {

    int n = 0;

    scanf("%d", &n);

    int vetorA[n];
    int vetorMaior[1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (vetorA[i] >= vetorA[i + 1]) {
            vetorMaior[0] = vetorA[i];
        }
    }

    printf("%d", vetorMaior[0]);

    return 0;
}
