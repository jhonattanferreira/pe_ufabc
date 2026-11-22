#include <stdio.h>

int pot(int n, int potencia){

    int result = 1;

    for (int i = 0; i < potencia; i++)
    {
        result = result * n;
    }

    return result;
    
}


int main()
{
    int n = 0;
    int potencia = 0;
    int result = 0;

    scanf("%d %d", &n, &potencia);
    
    result = pot(n, potencia); 

    printf("%d", result);

    return 0;
}
