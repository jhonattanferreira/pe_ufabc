#include <stdio.h>

struct tComplex {
    int real;
    int imaginario;
};

struct tComplex complexo(int a, int b) {

    struct tComplex c;

    c.real = a;
    c.imaginario = b;

    return c;
}

struct tComplex soma(struct tComplex x, struct tComplex y) {

    return complexo(x.real + y.real, x.imaginario + y.imaginario);
}

struct tComplex subtrai(struct tComplex x, struct tComplex y) {

    return complexo(x.real - y.real, x.imaginario - y.imaginario);
}

struct tComplex multiplica(struct tComplex x, struct tComplex y) {

    int real = x.real * y.real - x.imaginario * y.imaginario;
    int imaginario = x.real * y.imaginario + x.imaginario * y.real;

    return complexo(real, imaginario);
}

struct tComplex divide(struct tComplex x, struct tComplex y) {

    int divisor = y.real * y.real + y.imaginario * y.imaginario;
    int real = (x.real * y.real + x.imaginario * y.imaginario) / divisor;
    int imaginario = (x.imaginario * y.real - x.real * y.imaginario) / divisor;

    return complexo(real, imaginario);
}

int main() {

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    char operacao;

    while (scanf("%d %di %c %d %di", &a, &b, &operacao, &c, &d) != EOF) {

        struct tComplex x = complexo(a, b);
        struct tComplex y = complexo(c, d);
        struct tComplex result;

        if (operacao == '+') {
            result = soma(x, y);
        } else if (operacao == '-') {
            result = subtrai(x, y);
        } else if (operacao == '*') {
            result = multiplica(x, y);
        } else {
            result = divide(x, y);
        }

        printf("%d %di\n", result.real, result.imaginario);
    }

    return 0;
}
