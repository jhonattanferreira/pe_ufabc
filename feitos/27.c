#include <stdio.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int numeros[n];

    int positivos = 0;
    int negativos = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }

    for(int j = 0; j < n; j++){

        if(numeros[j] >= 0){
            positivos++;
        } else {
            negativos++;
        }
        
    }

    printf("%d %d", positivos, negativos);

    return 0;
}
