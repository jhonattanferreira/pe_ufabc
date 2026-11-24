#include <stdio.h>

typedef struct tComplex {
    int real;
    int imaginario;
} Complex;

Complex complexo(int a, int b) {

    Complex c;

    c.real = a;
    c.imaginario = b;

    return c;
}

Complex soma(Complex x, Complex y) {

    return complexo(x.real + y.real, x.imaginario + y.imaginario);
}

Complex subtrai(Complex x, Complex y) {

    return complexo(x.real - y.real, x.imaginario - y.imaginario);
}

Complex multiplica(Complex x, Complex y) {

    int real = x.real * y.real - x.imaginario * y.imaginario;
    int imaginario = x.real * y.imaginario + x.imaginario * y.real;

    return complexo(real, imaginario);
}

Complex divide(Complex x, Complex y) {

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

        Complex x = complexo(a, b);
        Complex y = complexo(c, d);
        Complex result;

        switch (operacao) {
            case '+':
                result = soma(x, y);
                break;
            case '-':
                result = subtrai(x, y);
                break;
            case '*':
                result = multiplica(x, y);
                break;
            default:
                result = divide(x, y);
                break;
        }

        printf("%d %di\n", result.real, result.imaginario);
    }

    return 0;
}
