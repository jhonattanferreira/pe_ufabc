#include <stdio.h>

int main() {

    int n = 0;

    scanf("%d", &n);

    int vetora[n];
    int vetormaior[1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetora[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (vetora[i] >= vetora[i + 1]) {
            vetormaior[0] = vetora[i];
        }
    }

    printf("%d", vetormaior[0]);

    return 0;
}
