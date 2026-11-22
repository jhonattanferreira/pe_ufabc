#include <stdio.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int numeros[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }

    int maior = numeros[0];

    for(int j = 1; j < n; j++){
        
        if(maior < numeros[j]){
            maior = numeros[j];
        }
    }

    printf("%d", maior);

    return 0;
}
