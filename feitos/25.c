#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    int n = 0;

     scanf("%d", &n);

    float numeros[n];
    float media = 0;

    for(int i=0; i<n; i++){
        scanf("%f", &numeros[i]);
    }

    for(int j=0; j<n; j++){
        media = numeros[j] + media;
    }

    media = media / n;

    printf("%f", media);

    return 0;
}
