#include <stdio.h>

int main()
{
    float pago = 0;
    float preco = 0;
    
    scanf("%f %f", &preco, &pago);

    float troco = preco - pago;

    printf("%.2f", troco);

}
