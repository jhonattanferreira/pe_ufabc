#include <stdio.h>

void soma(int a, int b, int *resultado) {

    *resultado = a + b;
}

int main() {

    int a = 0;
    int b = 0;
    int result = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    soma(a, b, &result);

    printf("%d", result);

    return 0;
}
