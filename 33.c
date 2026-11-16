#include <stdio.h>

int main() {

    int n = 0;
    int digito = 0;

    scanf("%d", &n);

    while (n != 0) {
        digito = n % 10;
        printf("%d", digito);
        n = n / 10;
    }

    return 0;
}
