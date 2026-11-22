#include <stdio.h>

int main() {

    int q1 = 0;
    int q2 = 0;
    int i = 0;
    int j = 0;
    int k = 0;

    scanf("%d", &q1);
    scanf("%d", &q2);

    int vetorA[q1];
    int vetorB[q2];
    int intercalado[q1 + q2];

    for (int x = 0; x < q1; x++) {
        scanf("%d", &vetorA[x]);
    }

    for (int x = 0; x < q2; x++) {
        scanf("%d", &vetorB[x]);
    }

    while (i < q1 && j < q2) {
        if (vetorA[i] <= vetorB[j]) {
            intercalado[k] = vetorA[i];
            i++;
        } else {
            intercalado[k] = vetorB[j];
            j++;
        }
        k++;
    }

    while (i < q1) {
        intercalado[k] = vetorA[i];
        i++;
        k++;
    }

    while (j < q2) {
        intercalado[k] = vetorB[j];
        j++;
        k++;
    }

    for (int x = 0; x < q1 + q2; x++) {
        printf("%d ", intercalado[x]);
    }

    return 0;
}
