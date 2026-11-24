#include <stdio.h>
typedef struct tComplexo {
    int real, imag;
} Complexo;
Complexo complexo(int a, int b) {
    Complexo c;
    c.real = a; c.imag = b;
    return c;
}
Complexo soma(Complexo x, Complexo y) {
    return complexo(x.real + y.real, x.imag + y.imag);
}
Complexo subtrai(Complexo x, Complexo y) {
    return complexo(x.real - y.real, x.imag - y.imag);
}
Complexo multiplica(Complexo x, Complexo y) {
    return complexo(x.real * y.real - x.imag * y.imag, x.real * y.imag + x.imag * y.real);
}
Complexo divide(Complexo x, Complexo y) {
    int d = y.real * y.real + y.imag * y.imag;
    return complexo((x.real * y.real + x.imag * y.imag) / d, (x.imag * y.real - x.real * y.imag) / d);
}
int main()
{
    int a, b, c, d;
    char op;
    while (scanf("%d %di %c %d %di", &a, &b, &op, &c, &d) != EOF) {
        Complexo x = complexo(a, b), y = complexo(c, d);
        Complexo r;
        switch (op) {
            case '+': r = soma(x, y); break;
            case '-': r = subtrai(x, y); break;
            case '*': r = multiplica(x, y); break;
            default: r = divide(x, y); break;
        }
        printf("%d %di\n", r.real, r.imag);
    }
    return 0;
}
