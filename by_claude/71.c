#include <stdio.h>

void trocar(int *a, int *b) {

    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {

    int x = 0;
    int y = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    trocar(&x, &y);

    printf("%d %d", x, y);

    return 0;
}
