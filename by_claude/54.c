#include <stdio.h>
#include <stdlib.h>

int *intercala(int *v1, int *v2, int q1, int q2) {

    int *vr = malloc(sizeof(int) * (q1 + q2));
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < q1 && j < q2) {
        if (v1[i] <= v2[j]) {
            vr[k] = v1[i];
            i++;
        } else {
            vr[k] = v2[j];
            j++;
        }
        k++;
    }

    while (i < q1) {
        vr[k] = v1[i];
        i++;
        k++;
    }

    while (j < q2) {
        vr[k] = v2[j];
        j++;
        k++;
    }

    return vr;
}

int main() {

    int q1 = 0;
    int q2 = 0;

    scanf("%d", &q1);
    scanf("%d", &q2);

    int *v1 = malloc(sizeof(int) * q1);
    int *v2 = malloc(sizeof(int) * q2);

    for (int i = 0; i < q1; i++) {
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < q2; i++) {
        scanf("%d", &v2[i]);
    }

    int *vr = intercala(v1, v2, q1, q2);

    for (int i = 0; i < q1 + q2; i++) {
        printf("%d ", vr[i]);
    }

    free(v1);
    free(v2);
    free(vr);

    return 0;
}
