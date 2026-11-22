#include <stdio.h>

int main()
{
    float salario = 0;
    float bonus = 0;

    scanf("%f %f", &salario, &bonus);

    float novoSalario = salario * (bonus/100);
    novoSalario = salario + novoSalario;

    printf("%.2f\n", novoSalario);

    return 0;
}
