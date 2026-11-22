#include <stdio.h>

int main() {

    int soma = 0;
    int n = 0;
    int digito = 0;

    scanf("%d", &n);

    while (n != 0) {
        digito = n % 10;
        soma += digito;
        n = n / 10;
    }

    printf("%d", soma);

    return 0;
}
