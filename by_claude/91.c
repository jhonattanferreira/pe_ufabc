#include <stdio.h>
#include <stdlib.h>
typedef struct tRacional {
    int num, denom;
} Racional;
Racional racional(int n, int d) {
    Racional r;
    r.num = n; r.denom = d;
    return r;
}
Racional soma(Racional r1, Racional r2) {
    return racional(r1.num * r2.denom + r2.num * r1.denom, r1.denom * r2.denom);
}
Racional negativo(Racional r) {
    r.num = -r.num;
    return r;
}
Racional multiplica(Racional r1, Racional r2) {
    return racional(r1.num * r2.num, r1.denom * r2.denom);
}
Racional divide(Racional r1, Racional r2) {
    return racional(r1.num * r2.denom, r1.denom * r2.num);
}
int mdc(int a, int b) {
    if (b == 0) { return a; }
    return mdc(b, a % b);
}
Racional reduz(Racional r) {
    int m = mdc(abs(r.num), abs(r.denom));
    r.num /= m;
    r.denom /= m;
    if (r.denom < 0) {
        r.num = -r.num; r.denom = -r.denom;
    }
    return r;
}
int main()
{
    int n1, d1, n2, d2;
    char op;
    while (scanf("%d %d %c %d %d", &n1, &d1, &op, &n2, &d2) != EOF) {
        Racional r1 = racional(n1, d1), r2 = racional(n2, d2);
        Racional r;
        switch (op) {
            case '+': r = soma(r1, r2); break;
            case '-': r = soma(r1, negativo(r2)); break;
            case '*': r = multiplica(r1, r2); break;
            default: r = divide(r1, r2); break;
        }
        r = reduz(r);
        printf("%d %d\n", r.num, r.denom);
    }
    return 0;
}
