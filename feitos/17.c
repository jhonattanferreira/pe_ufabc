#include <stdio.h>

int main()
{
    float valor = 0;
    float desconto = 0;

    scanf("%f %f", &valor, &desconto);

    float novovalor = valor * (desconto/100);
    novovalor = valor - novovalor;

    printf("%.2f\n", novovalor);

    return 0;
}
