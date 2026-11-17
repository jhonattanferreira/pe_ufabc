#include <stdio.h>

int main() {

    int n = 0;
    float media = 0;

    scanf("%d", &n);

    int vetorA[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int j = 0; j < n; j++) {
        media += vetorA[j];
    }

    media = media / n;

    printf("%.2f", media);

    return 0;
}
