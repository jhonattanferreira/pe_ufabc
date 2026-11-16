#include <stdio.h>

int main() {

    int ordenado = 0;
    int reverso = 0;
    int n = 0;
    int digito = 0;

    scanf("%d", &n);

    int numero = n;

    while (n > 0) {
        digito = n % 10;
        reverso = reverso * 10 + digito;
        n = n / 10;
    }

    if (numero == reverso) {
        printf("sim");

    } else {

        printf("nao");
    }

    return 0;
}
