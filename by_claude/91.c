#include <stdio.h>

struct tRacional {
    int numerador;
    int denominador;
};

int mdc(int a, int b) {

    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}

struct tRacional racional(int numerador, int denominador) {

    struct tRacional r;

    r.numerador = numerador;
    r.denominador = denominador;

    return r;
}

struct tRacional negativo(struct tRacional r) {

    return racional(-r.numerador, r.denominador);
}

struct tRacional soma(struct tRacional a, struct tRacional b) {

    int numerador = a.numerador * b.denominador + b.numerador * a.denominador;
    int denominador = a.denominador * b.denominador;

    return racional(numerador, denominador);
}

struct tRacional multiplica(struct tRacional a, struct tRacional b) {

    int numerador = a.numerador * b.numerador;
    int denominador = a.denominador * b.denominador;

    return racional(numerador, denominador);
}

struct tRacional divide(struct tRacional a, struct tRacional b) {

    int numerador = a.numerador * b.denominador;
    int denominador = a.denominador * b.numerador;

    return racional(numerador, denominador);
}

struct tRacional reduz(struct tRacional r) {

    if (r.denominador < 0) {
        r.numerador = -r.numerador;
        r.denominador = -r.denominador;
    }

    int a = r.numerador;
    int b = r.denominador;

    if (a < 0) {
        a = -a;
    }

    int divisor = mdc(a, b);

    r.numerador = r.numerador / divisor;
    r.denominador = r.denominador / divisor;

    return r;
}

int main() {

    int n1 = 0;
    int d1 = 0;
    int n2 = 0;
    int d2 = 0;
    char operacao;

    while (scanf("%d", &n1) != EOF) {

        scanf("%d", &d1);
        scanf(" %c", &operacao);
        scanf("%d", &n2);
        scanf("%d", &d2);

        struct tRacional a = racional(n1, d1);
        struct tRacional b = racional(n2, d2);
        struct tRacional result;

        if (operacao == '+') {
            result = soma(a, b);
        } else if (operacao == '-') {
            result = soma(a, negativo(b));
        } else if (operacao == '*') {
            result = multiplica(a, b);
        } else {
            result = divide(a, b);
        }

        result = reduz(result);

        printf("%d %d\n", result.numerador, result.denominador);
    }

    return 0;
}
