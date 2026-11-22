#include <stdio.h>

int x = 0;
int y = 0;

void trocar() {

    int aux = x;
    x = y;
    y = aux;
}

int main() {

    scanf("%d", &x);
    scanf("%d", &y);

    trocar();

    printf("%d %d", x, y);

    return 0;
}
