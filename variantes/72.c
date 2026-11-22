#include <stdio.h>

int soma(int a, int b) {

    return a + b;
}

int main() {

    int a = 0;
    int b = 0;
    int result = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    result = soma(a, b);

    printf("%d", result);

    return 0;
}
