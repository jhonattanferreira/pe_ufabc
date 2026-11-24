#include <stdio.h>

typedef struct tRacional {
    int numerador;
    int denominador;
} Racional;

int mdc(int a, int b) {

    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}

Racional racional(int numerador, int denominador) {

    Racional r;

    r.numerador = numerador;
    r.denominador = denominador;

    return r;
}

Racional negativo(Racional r) {

    return racional(-r.numerador, r.denominador);
}

Racional soma(Racional a, Racional b) {

    int numerador = a.numerador * b.denominador + b.numerador * a.denominador;
    int denominador = a.denominador * b.denominador;

    return racional(numerador, denominador);
}

Racional multiplica(Racional a, Racional b) {

    int numerador = a.numerador * b.numerador;
    int denominador = a.denominador * b.denominador;

    return racional(numerador, denominador);
}

Racional divide(Racional a, Racional b) {

    int numerador = a.numerador * b.denominador;
    int denominador = a.denominador * b.numerador;

    return racional(numerador, denominador);
}

Racional reduz(Racional r) {

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

    while (scanf("%d %d %c %d %d", &n1, &d1, &operacao, &n2, &d2) != EOF) {

        Racional a = racional(n1, d1);
        Racional b = racional(n2, d2);
        Racional result;

        switch (operacao) {
            case '+':
                result = soma(a, b);
                break;
            case '-':
                result = soma(a, negativo(b));
                break;
            case '*':
                result = multiplica(a, b);
                break;
            default:
                result = divide(a, b);
                break;
        }

        result = reduz(result);

        printf("%d %d\n", result.numerador, result.denominador);
    }

    return 0;
}
